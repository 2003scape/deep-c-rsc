/* IdentityHashMap.java -- a class providing a hashtable data structure,
   mapping Object --> Object, which uses object identity for hashing.
   Copyright (C) 2001, 2002, 2004, 2005  Free Software Foundation, Inc.

This file is part of GNU Classpath.

GNU Classpath is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU Classpath is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Classpath; see the file COPYING.  If not, write to the
Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA.

Linking this library statically or dynamically with other modules is
making a combined work based on this library.  Thus, the terms and
conditions of the GNU General Public License cover the whole
combination.

As a special exception, the copyright holders of this library give you
permission to link this library with independent modules to produce an
executable, regardless of the license terms of these independent
modules, and to copy and distribute the resulting executable under
terms of your choice, provided that you also meet, for each linked
independent module, the terms and conditions of the license of that
module.  An independent module is a module which is not derived from
or based on this library.  If you modify this library, you may extend
this exception to your version of the library, but you are not
obligated to do so.  If you do not wish to do so, delete this
exception statement from your version. */

package java.util;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;

/**
 * This class provides a hashtable-backed implementation of the
 * Map interface, but uses object identity to do its hashing.  In fact,
 * it uses object identity for comparing values, as well. It uses a
 * linear-probe hash table, which may have faster performance
 * than the chaining employed by HashMap.
 * <p>
 *
 * <em>WARNING: This is not a general purpose map. Because it uses
 * System.identityHashCode and ==, instead of hashCode and equals, for
 * comparison, it violated Map's general contract, and may cause
 * undefined behavior when compared to other maps which are not
 * IdentityHashMaps.  This is designed only for the rare cases when
 * identity semantics are needed.</em> An example use is
 * topology-preserving graph transformations, such as deep cloning,
 * or as proxy object mapping such as in debugging.
 * <p>
 *
 * This map permits <code>null</code> keys and values, and does not
 * guarantee that elements will stay in the same order over time. The
 * basic operations (<code>get</code> and <code>put</code>) take
 * constant time, provided System.identityHashCode is decent. You can
 * tune the behavior by specifying the expected maximum size. As more
 * elements are added, the map may need to allocate a larger table,
 * which can be expensive.
 * <p>
 *
 * This implementation is unsynchronized.  If you want multi-thread
 * access to be consistent, you must synchronize it, perhaps by using
 * <code>Collections.synchronizedMap(new IdentityHashMap(...));</code>.
 * The iterators are <i>fail-fast</i>, meaning that a structural modification
 * made to the map outside of an iterator's remove method cause the
 * iterator, and in the case of the entrySet, the Map.Entry, to
 * fail with a {@link ConcurrentModificationException}.
 *
 * @author Tom Tromey (tromey@redhat.com)
 * @author Eric Blake (ebb9@email.byu.edu)
 * @see System#identityHashCode(Object)
 * @see Collection
 * @see Map
 * @see HashMap
 * @see TreeMap
 * @see LinkedHashMap
 * @see WeakHashMap
 * @since 1.4
 * @status updated to 1.4
 */
public class IdentityHashMap extends AbstractMap
  implements Map, Serializable, Cloneable
{
  /** The default capacity. */
  private static final int DEFAULT_CAPACITY = 21;

  /**
   * This object is used to mark a slot whose key or value is 'null'.
   * This is more efficient than using a special value to mark an empty
   * slot, because null entries are rare, empty slots are common, and
   * the JVM will clear new arrays for us.
   * Package visible for use by nested classes.
   */
  static final Object nullslot = new Object();

  /**
   * Compatible with JDK 1.4.
   */
  private static final long serialVersionUID = 8188218128353913216L;

  /**
   * The number of mappings in the table. Package visible for use by nested
   * classes.
   * @serial
   */
  int size;

  /**
   * The table itself. Package visible for use by nested classes.
   */
  transient Object[] table;

  /**
   * The number of structural modifications made so far. Package visible for
   * use by nested classes.
   */
  transient int modCount;

  /**
   * The cache for {@link #entrySet()}.
   */
  private transient Set entries;

  /**
   * The threshold for rehashing, which is 75% of (table.length / 2).
   */
  private transient int threshold;

  /**
   * Create a new IdentityHashMap with the default capacity (21 entries).
   */
  public IdentityHashMap()
  {
    this(DEFAULT_CAPACITY);
  }

  /**
   * Create a new IdentityHashMap with the indicated number of
   * entries.  If the number of elements added to this hash map
   * exceeds this maximum, the map will grow itself; however, that
   * incurs a performance penalty.
   *
   * @param max initial size
   * @throws IllegalArgumentException if max is negative
   */
  public IdentityHashMap(int max)
  {
    if (max < 0)
      throw new IllegalArgumentException();
    // Need at least two slots, or hash() will break.
    if (max < 2)
      max = 2;
    table = new Object[max << 1];
    threshold = (max >> 2) * 3;
  }

  /**
   * Create a new IdentityHashMap whose contents are taken from the
   * given Map.
   *
   * @param m The map whose elements are to be put in this map
   * @throws NullPointerException if m is null
   */
  public IdentityHashMap(Map m)
  {
    this(Math.max(m.size() << 1, DEFAULT_CAPACITY));
    putAll(m);
  }

  /**
   * Remove all mappings from this map.
   */
  public void clear()
  {
    if (size != 0)
      {
        modCount++;
        Arrays.fill(table, null);
        size = 0;
      }
  }

  /**
   * Creates a shallow copy where keys and values are not cloned.
   */
  public Object clone()
  {
    try
      {
        IdentityHashMap copy = (IdentityHashMap) super.clone();
        copy.table = (Object[]) table.clone();
        copy.entries = null; // invalidate the cache
        return copy;
      }
    catch (CloneNotSupportedException e)
      {
        // Can't happen.
        return null;
      }
  }

  /**
   * Tests whether the specified key is in this map.  Unlike normal Maps,
   * this test uses <code>entry == key</code> instead of
   * <code>entry == null ? key == null : entry.equals(key)</code>.
   *
   * @param key the key to look for
   * @return true if the key is contained in the map
   * @see #containsValue(Object)
   * @see #get(Object)
   */
  public boolean containsKey(Object key)
  {
    key = xform(key);
    return key == table[hash(key)];
  }

  /**
   * Returns true if this HashMap contains the value.  Unlike normal maps,
   * this test uses <code>entry == value</code> instead of
   * <code>entry == null ? value == null : entry.equals(value)</code>.
   *
   * @param value the value to search for in this HashMap
   * @return true if at least one key maps to the value
   * @see #containsKey(Object)
   */
  public boolean containsValue(Object value)
  {
    value = xform(value);
    for (int i = table.length - 1; i > 0; i -= 2)
      if (table[i] == value)
        return true;
    return false;
  }

  /**
   * Returns a "set view" of this Map's entries. The set is backed by
   * the Map, so changes in one show up in the other.  The set supports
   * element removal, but not element addition.
   * <p>
   *
   * <em>The semantics of this set, and of its contained entries, are
   * different from the contract of Set and Map.Entry in order to make
   * IdentityHashMap work.  This means that while you can compare these
   * objects between IdentityHashMaps, comparing them with regular sets
   * or entries is likely to have undefined behavior.</em>  The entries
   * in this set are reference-based, rather than the normal object
   * equality.  Therefore, <code>e1.equals(e2)</code> returns
   * <code>e1.getKey() == e2.getKey() && e1.getValue() == e2.getValue()</code>,
   * and <code>e.hashCode()</code> returns
   * <code>System.identityHashCode(e.getKey()) ^
   *       System.identityHashCode(e.getValue())</code>.
   * <p>
   *
   * Note that the iterators for all three views, from keySet(), entrySet(),
   * and values(), traverse the Map in the same sequence.
   *
   * @return a set view of the entries
   * @see #keySet()
   * @see #values()
   * @see Map.Entry
   */
  public Set entrySet()
  {
    if (entries == null)
      entries = new AbstractSet()
      {
        public int size()
        {
          return size;
        }

        public Iterator iterator()
        {
          return new IdentityIterator(ENTRIES);
        }

        public void clear()
        {
          IdentityHashMap.this.clear();
        }

        public boolean contains(Object o)
        {
          if (! (o instanceof Map.Entry))
            return false;
          Map.Entry m = (Map.Entry) o;
          Object value = xform(m.getValue());
          Object key = xform(m.getKey());
          return value == table[hash(key) + 1];
        }

        public int hashCode()
        {
          return IdentityHashMap.this.hashCode();
        }

        public boolean remove(Object o)
        {
          if (! (o instanceof Map.Entry))
            return false;
          Object key = xform(((Map.Entry) o).getKey());
          int h = hash(key);
          if (table[h] == key)
            {
              size--;
              modCount++;
              IdentityHashMap.this.removeAtIndex(h);
              return true;
            }
          return false;
        }
      };
    return entries;
  }

  /**
   * Compares two maps for equality. This returns true only if both maps
   * have the same reference-identity comparisons. While this returns
   * <code>this.entrySet().equals(m.entrySet())</code> as specified by Map,
   * this will not work with normal maps, since the entry set compares
   * with == instead of .equals.
   *
   * @param o the object to compare to
   * @return true if it is equal
   */
  public boolean equals(Object o)
  {
    // Why did Sun specify this one? The superclass does the right thing.
    return super.equals(o);
  }

  /**
   * Return the value in this Map associated with the supplied key, or
   * <code>null</code> if the key maps to nothing.
   *
   * <p>NOTE: Since the value could also be null, you must use
   * containsKey to see if this key actually maps to something.
   * Unlike normal maps, this tests for the key with <code>entry ==
   * key</code> instead of <code>entry == null ? key == null :
   * entry.equals(key)</code>.
   *
   * @param key the key for which to fetch an associated value
   * @return what the key maps to, if present
   * @see #put(Object, Object)
   * @see #containsKey(Object)
   */
  public Object get(Object key)
  {
    key = xform(key);
    int h = hash(key);
    return table[h] == key ? unxform(table[h + 1]) : null;
  }

  /**
   * Returns the hashcode of this map. This guarantees that two
   * IdentityHashMaps that compare with equals() will have the same hash code,
   * but may break with comparison to normal maps since it uses
   * System.identityHashCode() instead of hashCode().
   *
   * @return the hash code
   */
  public int hashCode()
  {
    int hash = 0;
    for (int i = table.length - 2; i >= 0; i -= 2)
      {
        Object key = table[i];
        if (key == null)
          continue;
        // FIXME: this is a lame computation.
        hash += (System.identityHashCode(unxform(key))
                 ^ System.identityHashCode(unxform(table[i + 1])));
      }
    return hash;
  }

  /**
   * Returns true if there are no key-value mappings currently in this Map
   * @return <code>size() == 0</code>
   */
  public boolean isEmpty()
  {
    return size == 0;
  }

  /**
   * Returns a "set view" of this Map's keys. The set is backed by the
   * Map, so changes in one show up in the other.  The set supports
   * element removal, but not element addition.
   * <p>
   *
   * <em>The semantics of this set are different from the contract of Set
   * in order to make IdentityHashMap work.  This means that while you can
   * compare these objects between IdentityHashMaps, comparing them with
   * regular sets is likely to have undefined behavior.</em>  The hashCode
   * of the set is the sum of the identity hash codes, instead of the
   * regular hashCodes, and equality is determined by reference instead
   * of by the equals method.
   * <p>
   *
   * @return a set view of the keys
   * @see #values()
   * @see #entrySet()
   */
  public Set keySet()
  {
    if (keys == null)
      keys = new AbstractSet()
      {
        public int size()
        {
          return size;
        }

        public Iterator iterator()
        {
          return new IdentityIterator(KEYS);
        }

        public void clear()
        {
          IdentityHashMap.this.clear();
        }

        public boolean contains(Object o)
        {
          return containsKey(o);
        }

        public int hashCode()
        {
          int hash = 0;
          for (int i = table.length - 2; i >= 0; i -= 2)
            {
              Object key = table[i];
              if (key == null)
                continue;
              hash += System.identityHashCode(unxform(key));
            }
          return hash;
        }

        public boolean remove(Object o)
        {
          o = xform(o);
          int h = hash(o);
          if (table[h] == o)
            {
              size--;
              modCount++;
              removeAtIndex(h);
              return true;
            }
          return false;
        }
      };
    return keys;
  }

  /**
   * Puts the supplied value into the Map, mapped by the supplied key.
   * The value may be retrieved by any object which <code>equals()</code>
   * this key. NOTE: Since the prior value could also be null, you must
   * first use containsKey if you want to see if you are replacing the
   * key's mapping.  Unlike normal maps, this tests for the key
   * with <code>entry == key</code> instead of
   * <code>entry == null ? key == null : entry.equals(key)</code>.
   *
   * @param key the key used to locate the value
   * @param value the value to be stored in the HashMap
   * @return the prior mapping of the key, or null if there was none
   * @see #get(Object)
   */
  public Object put(Object key, Object value)
  {
    key = xform(key);
    value = xform(value);

    // We don't want to rehash if we're overwriting an existing slot.
    int h = hash(key);
    if (table[h] == key)
      {
        Object r = unxform(table[h + 1]);
        table[h + 1] = value;
        return r;
      }

    // Rehash if the load factor is too high.
    if (size > threshold)
      {
        Object[] old = table;
        // This isn't necessarily prime, but it is an odd number of key/value
        // slots, which has a higher probability of fewer collisions.
        table = new Object[(old.length * 2) + 2];
        size = 0;
        threshold = (table.length >>> 3) * 3;

        for (int i = old.length - 2; i >= 0; i -= 2)
          {
            Object oldkey = old[i];
            if (oldkey != null)
              {
                h = hash(oldkey);
                table[h] = oldkey;
                table[h + 1] = old[i + 1];
                ++size;
                // No need to update modCount here, we'll do it
                // just after the loop.
              }
          }

        // Now that we've resize, recompute the hash value.
        h = hash(key);
      }

    // At this point, we add a new mapping.
    modCount++;
    size++;
    table[h] = key;
    table[h + 1] = value;
    return null;
  }

  /**
   * Copies all of the mappings from the specified map to this. If a key
   * is already in this map, its value is replaced.
   *
   * @param m the map to copy
   * @throws NullPointerException if m is null
   */
  public void putAll(Map m)
  {
    // Why did Sun specify this one? The superclass does the right thing.
    super.putAll(m);
  }

  /**
   * Remove the element at index and update the table to compensate.
   * This is package-private for use by inner classes.
   * @param i index of the removed element
   */
  final void removeAtIndex(int i)
  {
    // This is Algorithm R from Knuth, section 6.4.
    // Variable names are taken directly from the text.
    while (true)
      {
        table[i] = null;
        table[i + 1] = null;
        int j = i;
        int r;
        do
          {
            i -= 2;
            if (i < 0)
              i = table.length - 2;
            Object key = table[i];
            if (key == null)
              return;
            r = Math.abs(System.identityHashCode(key)
                         % (table.length >> 1)) << 1;
          }
        while ((i <= r && r < j)
            || (r < j && j < i)
            || (j < i && i <= r));
        table[j] = table[i];
        table[j + 1] = table[i + 1];
      }
  }

  /**
   * Removes from the HashMap and returns the value which is mapped by
   * the supplied key. If the key maps to nothing, then the HashMap
   * remains unchanged, and <code>null</code> is returned.
   *
   * NOTE: Since the value could also be null, you must use
   * containsKey to see if you are actually removing a mapping.
   * Unlike normal maps, this tests for the key with <code>entry ==
   * key</code> instead of <code>entry == null ? key == null :
   * entry.equals(key)</code>.
   *
   * @param key the key used to locate the value to remove
   * @return whatever the key mapped to, if present
   */
  public Object remove(Object key)
  {
    key = xform(key);
    int h = hash(key);
    if (table[h] == key)
      {
        modCount++;
        size--;
        Object r = unxform(table[h + 1]);
        removeAtIndex(h);
        return r;
      }
    return null;
  }

  /**
   * Returns the number of kay-value mappings currently in this Map
   * @return the size
   */
  public int size()
  {
    return size;
  }

  /**
   * Returns a "collection view" (or "bag view") of this Map's values.
   * The collection is backed by the Map, so changes in one show up
   * in the other.  The collection supports element removal, but not element
   * addition.
   * <p>
   *
   * <em>The semantics of this set are different from the contract of
   * Collection in order to make IdentityHashMap work.  This means that
   * while you can compare these objects between IdentityHashMaps, comparing
   * them with regular sets is likely to have undefined behavior.</em>
   * Likewise, contains and remove go by == instead of equals().
   * <p>
   *
   * @return a bag view of the values
   * @see #keySet()
   * @see #entrySet()
   */
  public Collection values()
  {
    if (values == null)
      values = new AbstractCollection()
      {
        public int size()
        {
          return size;
        }

        public Iterator iterator()
        {
          return new IdentityIterator(VALUES);
        }

        public void clear()
        {
          IdentityHashMap.this.clear();
        }

        public boolean remove(Object o)
        {
          o = xform(o);
          // This approach may look strange, but it is ok.
          for (int i = table.length - 1; i > 0; i -= 2)
            if (table[i] == o)
              {
                modCount++;
                size--;
                IdentityHashMap.this.removeAtIndex(i - 1);
                return true;
              }
          return false;
        }
      };
    return values;
  }

  /**
   * Transform a reference from its external form to its internal form.
   * This is package-private for use by inner classes.
   */
  final Object xform(Object o)
  {
    if (o == null)
      o = nullslot;
    return o;
  }

  /**
   * Transform a reference from its internal form to its external form.
   * This is package-private for use by inner classes.
   */
  final Object unxform(Object o)
  {
    if (o == nullslot)
      o = null;
    return o;
  }

  /**
   * Helper method which computes the hash code, then traverses the table
   * until it finds the key, or the spot where the key would go.  the key
   * must already be in its internal form.
   *
   * @param key the key to check
   * @return the index where the key belongs
   * @see #IdentityHashMap(int)
   * @see #put(Object, Object)
   */
  // Package visible for use by nested classes.
  final int hash(Object key)
  {
    int h = Math.abs(System.identityHashCode(key) % (table.length >> 1)) << 1;

    while (true)
      {
        // By requiring at least 2 key/value slots, and rehashing at 75%
        // capacity, we guarantee that there will always be either an empty
        // slot somewhere in the table.
        if (table[h] == key || table[h] == null)
          return h;
        // We use linear probing as it is friendlier to the cache and
        // it lets us efficiently remove entries.
        h -= 2;
        if (h < 0)
          h = table.length - 2;
      }
  }

  /**
   * This class allows parameterized iteration over IdentityHashMaps.  Based
   * on its construction, it returns the key or value of a mapping, or
   * creates the appropriate Map.Entry object with the correct fail-fast
   * semantics and identity comparisons.
   *
   * @author Tom Tromey (tromey@redhat.com)
   * @author Eric Blake (ebb9@email.byu.edu)
   */
  private class IdentityIterator implements Iterator
  {
    /**
     * The type of this Iterator: {@link #KEYS}, {@link #VALUES},
     * or {@link #ENTRIES}.
     */
    final int type;
    /** The number of modifications to the backing Map that we know about. */
    int knownMod = modCount;
    /** The number of elements remaining to be returned by next(). */
    int count = size;
    /** Location in the table. */
    int loc = table.length;

    /**
     * Construct a new Iterator with the supplied type.
     * @param type {@link #KEYS}, {@link #VALUES}, or {@link #ENTRIES}
     */
    IdentityIterator(int type)
    {
      this.type = type;
    }

    /**
     * Returns true if the Iterator has more elements.
     * @return true if there are more elements
     */
    public boolean hasNext()
    {
      return count > 0;
    }

    /**
     * Returns the next element in the Iterator's sequential view.
     * @return the next element
     * @throws ConcurrentModificationException if the Map was modified
     * @throws NoSuchElementException if there is none
     */
    public Object next()
    {
      if (knownMod != modCount)
        throw new ConcurrentModificationException();
      if (count == 0)
        throw new NoSuchElementException();
      count--;

      Object key;
      do
        {
          loc -= 2;
          key = table[loc];
        }
      while (key == null);

      return type == KEYS ? unxform(key) 
                          : (type == VALUES ? unxform(table[loc + 1])
                                            : new IdentityEntry(loc));
    }

    /**
     * Removes from the backing Map the last element which was fetched
     * with the <code>next()</code> method.
     *
     * @throws ConcurrentModificationException if the Map was modified
     * @throws IllegalStateException if called when there is no last element
     */
    public void remove()
    {
      if (knownMod != modCount)
        throw new ConcurrentModificationException();
      if (loc == table.length)
        throw new IllegalStateException();
      modCount++;
      size--;
      removeAtIndex(loc);
      knownMod++;
    }
  } // class IdentityIterator

  /**
   * This class provides Map.Entry objects for IdentityHashMaps.  The entry
   * is fail-fast, and will throw a ConcurrentModificationException if
   * the underlying map is modified, or if remove is called on the iterator
   * that generated this object.  It is identity based, so it violates
   * the general contract of Map.Entry, and is probably unsuitable for
   * comparison to normal maps; but it works among other IdentityHashMaps.
   *
   * @author Eric Blake (ebb9@email.byu.edu)
   */
  private final class IdentityEntry implements Map.Entry
  {
    /** The location of this entry. */
    final int loc;
    /** The number of modifications to the backing Map that we know about. */
    final int knownMod = modCount;

    /**
     * Constructs the Entry.
     *
     * @param loc the location of this entry in table
     */
    IdentityEntry(int loc)
    {
      this.loc = loc;
    }

    /**
     * Compares the specified object with this entry, using identity
     * semantics. Note that this can lead to undefined results with
     * Entry objects created by normal maps.
     *
     * @param o the object to compare
     * @return true if it is equal
     * @throws ConcurrentModificationException if the entry was invalidated
     *         by modifying the Map or calling Iterator.remove()
     */
    public boolean equals(Object o)
    {
      if (knownMod != modCount)
        throw new ConcurrentModificationException();
      if (! (o instanceof Map.Entry))
        return false;
      Map.Entry e = (Map.Entry) o;
      return table[loc] == xform(e.getKey())
             && table[loc + 1] == xform(e.getValue());
    }

    /**
     * Returns the key of this entry.
     *
     * @return the key
     * @throws ConcurrentModificationException if the entry was invalidated
     *         by modifying the Map or calling Iterator.remove()
     */
    public Object getKey()
    {
      if (knownMod != modCount)
        throw new ConcurrentModificationException();
      return unxform(table[loc]);
    }

    /**
     * Returns the value of this entry.
     *
     * @return the value
     * @throws ConcurrentModificationException if the entry was invalidated
     *         by modifying the Map or calling Iterator.remove()
     */
    public Object getValue()
    {
      if (knownMod != modCount)
        throw new ConcurrentModificationException();
      return unxform(table[loc + 1]);
    }

    /**
     * Returns the hashcode of the entry, using identity semantics.
     * Note that this can lead to undefined results with Entry objects
     * created by normal maps.
     *
     * @return the hash code
     * @throws ConcurrentModificationException if the entry was invalidated
     *         by modifying the Map or calling Iterator.remove()
     */
    public int hashCode()
    {
      if (knownMod != modCount)
        throw new ConcurrentModificationException();
      return (System.identityHashCode(unxform(table[loc]))
              ^ System.identityHashCode(unxform(table[loc + 1])));
    }

    /**
     * Replaces the value of this mapping, and returns the old value.
     *
     * @param value the new value
     * @return the old value
     * @throws ConcurrentModificationException if the entry was invalidated
     *         by modifying the Map or calling Iterator.remove()
     */
    public Object setValue(Object value)
    {
      if (knownMod != modCount)
        throw new ConcurrentModificationException();
      Object r = unxform(table[loc + 1]);
      table[loc + 1] = xform(value);
      return r;
    }

    /**
     * This provides a string representation of the entry. It is of the form
     * "key=value", where string concatenation is used on key and value.
     *
     * @return the string representation
     * @throws ConcurrentModificationException if the entry was invalidated
     *         by modifying the Map or calling Iterator.remove()
     */
    public String toString()
    {
      if (knownMod != modCount)
        throw new ConcurrentModificationException();
      return unxform(table[loc]) + "=" + unxform(table[loc + 1]);
    }
  } // class IdentityEntry

  /**
   * Reads the object from a serial stream.
   *
   * @param s the stream to read from
   * @throws ClassNotFoundException if the underlying stream fails
   * @throws IOException if the underlying stream fails
   * @serialData expects the size (int), followed by that many key (Object)
   *             and value (Object) pairs, with the pairs in no particular
   *             order
   */
  private void readObject(ObjectInputStream s)
    throws IOException, ClassNotFoundException
  {
    s.defaultReadObject();

    int num = s.readInt();
    table = new Object[Math.max(num << 1, DEFAULT_CAPACITY) << 1];
    // Read key/value pairs.
    while (--num >= 0)
      put(s.readObject(), s.readObject());
  }

  /**
   * Writes the object to a serial stream.
   *
   * @param s the stream to write to
   * @throws IOException if the underlying stream fails
   * @serialData outputs the size (int), followed by that many key (Object)
   *             and value (Object) pairs, with the pairs in no particular
   *             order
   */
  private void writeObject(ObjectOutputStream s)
    throws IOException
  {
    s.defaultWriteObject();
    s.writeInt(size);
    for (int i = table.length - 2; i >= 0; i -= 2)
      {
        Object key = table[i];
        if (key != null)
          {
            s.writeObject(unxform(key));
            s.writeObject(unxform(table[i + 1]));
          }
      }
  }
}
