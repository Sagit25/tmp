cmd_crypto/seqiv.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/seqiv.ko crypto/seqiv.o crypto/seqiv.mod.o;  true
