cmd_net/netfilter/nf_nat.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nf_nat.ko net/netfilter/nf_nat.o net/netfilter/nf_nat.mod.o;  true