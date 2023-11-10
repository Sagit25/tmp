cmd_drivers/usb/common/built-in.a := rm -f drivers/usb/common/built-in.a;  printf "drivers/usb/common/%s " common.o debug.o | xargs aarch64-linux-gnu-ar cDPrST drivers/usb/common/built-in.a
