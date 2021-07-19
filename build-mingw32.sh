#java -jar ./JCGO/jcgo.jar mudclient -src ./mudclient204-headless \
#    @JCGO/stdpaths.in

#patch -p0 -i sdl.diff

#x86_64-w64-mingw32-gcc -g -I ./JCGO/include -I ./JCGO/native \
i686-w64-mingw32-gcc -g -I ./JCGO/include -I ./JCGO/native \
    -I ./JCGO/include/boehmgc -I ./SDL2-2.0.14/i686-w64-mingw32/include \
    -DJCGO_NOGC -DJCGO_USEGCJ -DJCGO_FPFAST -DJCGO_FASTMATH -DJCGO_INET  \
    -DJCGO_INTFIT -DJCGO_THREADS -D_IEEEFP_H -DJCGO_WIN32 \
    -o mudclient.exe jcgo_Out/Main.c -lm \
    -L ./SDL2-2.0.14/i686-w64-mingw32/lib -lSDL2 -lwsock32 \
    ./JCGO/libs/x86/mingw/libgcmt.a -no-pie
