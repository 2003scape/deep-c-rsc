import java.io.IOException;

public class ClientStream extends Packet {
    private boolean closing;
    private byte buffer[];
    private int endoffset;
    private int offset;
    private boolean closed;

    public ClientStream(GameShell applet) throws IOException {
        closing = false;
        closed = true;
        //closed = false;
    }

    public void closeStream() {
        super.closeStream();
        closing = true;
        closed = true;
        buffer = null;
    }

    public int readStream() throws IOException {
        if (closing) {
            return 0;
        }

        return 12345678;
        //return instream.read();
    }

    public int availableStream() throws IOException {
        if (closing) {
            return 0;
        }

        return 12345678;
    }

    public void readStreamBytes(int len, int off, byte buff[]) throws IOException {
        if (closing) {
            return;
        }

        /*
        int k = 0;
        boolean flag = false;
        int l;
        for (; k < len; k += l)
            if ((l = instream.read(buff, k + off, len - k)) <= 0)
                throw new IOException("EOF");
        */

        System.out.println("readStreamBytes");
        throw new IOException("EOF");
    }

    public void writeStreamBytes(byte buff[], int off, int len) throws IOException {
        if (closing) {
            return;
        }

        if (buffer == null) {
            buffer = new byte[5000];
        }

        System.out.println("writeStreamBytes");
        throw new IOException("buffer overflow");

        /*
        for (int l = 0; l < len; l++) {
            buffer[offset] = buff[l + off];
            offset = (offset + 1) % 5000;

            if (offset == (endoffset + 4900) % 5000) {
                throw new IOException("buffer overflow");
            }
        }*/
    }
}
