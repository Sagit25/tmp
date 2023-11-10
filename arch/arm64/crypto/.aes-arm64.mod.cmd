cmd_arch/arm64/crypto/aes-arm64.mod := printf '%s\n'   aes-cipher-core.o aes-cipher-glue.o | awk '!x[$$0]++ { print("arch/arm64/crypto/"$$0) }' > arch/arm64/crypto/aes-arm64.mod
