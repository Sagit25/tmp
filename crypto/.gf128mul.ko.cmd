cmd_crypto/gf128mul.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/gf128mul.ko crypto/gf128mul.o crypto/gf128mul.mod.o;  true
