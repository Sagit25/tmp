cmd_drivers/usb/gadget/udc/built-in.a := rm -f drivers/usb/gadget/udc/built-in.a;  printf "drivers/usb/gadget/udc/%s " core.o trace.o bdc/built-in.a | xargs aarch64-linux-gnu-ar cDPrST drivers/usb/gadget/udc/built-in.a