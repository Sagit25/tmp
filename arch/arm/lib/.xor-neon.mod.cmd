cmd_arch/arm/lib/xor-neon.mod := printf '%s\n'   xor-neon.o | awk '!x[$$0]++ { print("arch/arm/lib/"$$0) }' > arch/arm/lib/xor-neon.mod
