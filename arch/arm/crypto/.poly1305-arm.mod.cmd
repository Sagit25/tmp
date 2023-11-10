cmd_arch/arm/crypto/poly1305-arm.mod := printf '%s\n'   poly1305-core.o poly1305-glue.o | awk '!x[$$0]++ { print("arch/arm/crypto/"$$0) }' > arch/arm/crypto/poly1305-arm.mod
