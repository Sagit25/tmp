cmd_drivers/usb/serial/ipaq.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/usb/serial/ipaq.ko drivers/usb/serial/ipaq.o drivers/usb/serial/ipaq.mod.o;  true