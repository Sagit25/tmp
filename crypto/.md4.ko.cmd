cmd_crypto/md4.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/md4.ko crypto/md4.o crypto/md4.mod.o;  true
