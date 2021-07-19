java -jar ./JCGO/jcgo.jar mudclient -src ./mudclient204-threadless \
    @JCGO/stdpaths.in

patch -p0 -i sdl.diff

emcc -O2 -I ./JCGO/include -I ./JCGO/native -I \
    -fno-strict-aliasing \
    -DJCGO_NOGC -DJCGO_FPFAST -DJCGO_FASTMATH -DJCGO_INET  \
    -DJCGO_INTFIT -DJCGO_UNIX -D_FPU_CONTROL_H -D_IEEEFP_H -DJCGO_UNIFSYS \
    -o mudclient.html jcgo_Out/Main.c -lm -lSDL2 \
    -s ALLOW_MEMORY_GROWTH=1 -s USE_SDL=2 -s ASYNCIFY \
    --preload-file ./data204
