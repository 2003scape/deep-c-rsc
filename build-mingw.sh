java -jar ./JCGO/jcgo.jar mudclient -src ./mudclient204-headless \
    @JCGO/stdpaths.in

patch -p0 -i sdl.diff

x86_64-w64-mingw32-gcc -O2 -I ./JCGO/include -I ./JCGO/native \
    -I ./JCGO/include/tinygc -I ./SDL2-2.0.14/x86_64-w64-mingw32/include \
    -fno-strict-aliasing \
    -DGC_THREADS -DJCGO_USEGCJ -DJCGO_FPFAST -DJCGO_FASTMATH -DJCGO_INET  \
    -DJCGO_INTFIT -DJCGO_THREADS -D_IEEEFP_H -DJCGO_WIN32 \
    -o mudclient.exe jcgo_Out/Main.c -lm \
    -L ./SDL2-2.0.14/x86_64-w64-mingw32/lib -lSDL2 -lwsock32 \
    ./tinygc-tinygc-2_6/tinygcmt.o -no-pie
