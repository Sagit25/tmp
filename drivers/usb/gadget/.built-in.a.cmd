cmd_drivers/usb/gadget/built-in.a := rm -f drivers/usb/gadget/built-in.a;  printf "drivers/usb/gadget/%s " udc/built-in.a function/built-in.a legacy/built-in.a | xargs aarch64-linux-gnu-ar cDPrST drivers/usb/gadget/built-in.a