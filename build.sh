java -jar ./JCGO/jcgo.jar mudclient -src ./mudclient204-headless \
    @JCGO/stdpaths.in

patch -p0 -i sdl.diff

    #-DJCGO_PARALLEL
    #-DJCGO_NOGJ
gcc -O2 -I ./JCGO/include -I ./JCGO/native -I ./JCGO/include/boehmgc \
    -fno-strict-aliasing \
    -DJCGO_USEGCJ -DJGCO_PARALLEL -DJCGO_FPFAST -DJCGO_FASTMATH -DJCGO_INET  \
    -DJCGO_INTFIT -DJCGO_THREADS -DJCGO_UNIX -D_IEEEFP_H -DJCGO_UNIFSYS \
    -o mudclient jcgo_Out/Main.c -lm -lpthread -lSDL2 \
    ./JCGO/libs/amd64/linux/libgcmt.a -no-pie
