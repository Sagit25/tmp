cmd_drivers/mtd/mtd.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/mtd/mtd.ko drivers/mtd/mtd.o drivers/mtd/mtd.mod.o;  true
