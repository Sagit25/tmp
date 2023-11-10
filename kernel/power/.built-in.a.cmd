cmd_kernel/power/built-in.a := rm -f kernel/power/built-in.a;  printf "kernel/power/%s " qos.o main.o process.o poweroff.o | xargs aarch64-linux-gnu-ar cDPrST kernel/power/built-in.a
