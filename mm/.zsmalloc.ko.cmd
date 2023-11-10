cmd_mm/zsmalloc.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o mm/zsmalloc.ko mm/zsmalloc.o mm/zsmalloc.mod.o;  true
