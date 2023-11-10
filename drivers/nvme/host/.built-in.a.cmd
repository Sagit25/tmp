cmd_drivers/nvme/host/built-in.a := rm -f drivers/nvme/host/built-in.a;  printf "drivers/nvme/host/%s " core.o ioctl.o trace.o pci.o | xargs aarch64-linux-gnu-ar cDPrST drivers/nvme/host/built-in.a
