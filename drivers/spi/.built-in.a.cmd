cmd_drivers/spi/built-in.a := rm -f drivers/spi/built-in.a;  printf "drivers/spi/%s " spi.o spi-mem.o | xargs aarch64-linux-gnu-ar cDPrST drivers/spi/built-in.a
