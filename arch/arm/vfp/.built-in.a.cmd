cmd_arch/arm/vfp/built-in.a := rm -f arch/arm/vfp/built-in.a;  printf "arch/arm/vfp/%s " vfpmodule.o entry.o vfphw.o vfpsingle.o vfpdouble.o | xargs arm-linux-gnueabihf-ar cDPrST arch/arm/vfp/built-in.a