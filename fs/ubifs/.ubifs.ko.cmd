cmd_fs/ubifs/ubifs.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/ubifs/ubifs.ko fs/ubifs/ubifs.o fs/ubifs/ubifs.mod.o;  true
