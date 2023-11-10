cmd_fs/netfs/built-in.a := rm -f fs/netfs/built-in.a;  printf "fs/netfs/%s " buffered_read.o io.o main.o objects.o stats.o | xargs aarch64-linux-gnu-ar cDPrST fs/netfs/built-in.a
