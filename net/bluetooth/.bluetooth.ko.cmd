cmd_net/bluetooth/bluetooth.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/bluetooth/bluetooth.ko net/bluetooth/bluetooth.o net/bluetooth/bluetooth.mod.o;  true