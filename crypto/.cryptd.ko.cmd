cmd_crypto/cryptd.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/cryptd.ko crypto/cryptd.o crypto/cryptd.mod.o;  true
