cmd_fs/ntfs/ntfs.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/ntfs/ntfs.ko fs/ntfs/ntfs.o fs/ntfs/ntfs.mod.o;  true
