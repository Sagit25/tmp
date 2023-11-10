cmd_crypto/drbg.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/drbg.ko crypto/drbg.o crypto/drbg.mod.o;  true
