cmd_arch/arm/lib/built-in.a := rm -f arch/arm/lib/built-in.a;  printf "arch/arm/lib/%s " uaccess_with_memcpy.o | xargs arm-linux-gnueabihf-ar cDPrST arch/arm/lib/built-in.a
