cmd_net/netfilter/nft_compat.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nft_compat.ko net/netfilter/nft_compat.o net/netfilter/nft_compat.mod.o;  true