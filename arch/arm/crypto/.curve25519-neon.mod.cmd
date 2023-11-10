cmd_arch/arm/crypto/curve25519-neon.mod := printf '%s\n'   curve25519-core.o curve25519-glue.o | awk '!x[$$0]++ { print("arch/arm/crypto/"$$0) }' > arch/arm/crypto/curve25519-neon.mod
