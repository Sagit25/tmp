cmd_drivers/usb/misc/built-in.a := rm -f drivers/usb/misc/built-in.a;  printf "drivers/usb/misc/%s " brcmstb-usb-pinmap.o | xargs aarch64-linux-gnu-ar cDPrST drivers/usb/misc/built-in.a
