cmd_drivers/power/reset/built-in.a := rm -f drivers/power/reset/built-in.a;  printf "drivers/power/reset/%s " gpio-poweroff.o | xargs aarch64-linux-gnu-ar cDPrST drivers/power/reset/built-in.a
