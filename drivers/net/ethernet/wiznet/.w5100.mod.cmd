cmd_drivers/net/ethernet/wiznet/w5100.mod := printf '%s\n'   w5100.o | awk '!x[$$0]++ { print("drivers/net/ethernet/wiznet/"$$0) }' > drivers/net/ethernet/wiznet/w5100.mod
