cmd_kernel/configs.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o kernel/configs.ko kernel/configs.o kernel/configs.mod.o;  true
