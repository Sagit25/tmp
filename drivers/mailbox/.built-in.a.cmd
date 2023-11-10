cmd_drivers/mailbox/built-in.a := rm -f drivers/mailbox/built-in.a;  printf "drivers/mailbox/%s " mailbox.o bcm2835-mailbox.o | xargs aarch64-linux-gnu-ar cDPrST drivers/mailbox/built-in.a
