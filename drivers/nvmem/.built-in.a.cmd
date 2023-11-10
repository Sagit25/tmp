cmd_drivers/nvmem/built-in.a := rm -f drivers/nvmem/built-in.a;  printf "drivers/nvmem/%s " core.o | xargs aarch64-linux-gnu-ar cDPrST drivers/nvmem/built-in.a
