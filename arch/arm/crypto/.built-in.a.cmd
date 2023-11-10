cmd_arch/arm/crypto/built-in.a := rm -f arch/arm/crypto/built-in.a;  printf "arch/arm/crypto/%s " blake2s-core.o blake2s-glue.o | xargs arm-linux-gnueabihf-ar cDPrST arch/arm/crypto/built-in.a
