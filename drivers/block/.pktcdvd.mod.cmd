cmd_drivers/block/pktcdvd.mod := printf '%s\n'   pktcdvd.o | awk '!x[$$0]++ { print("drivers/block/"$$0) }' > drivers/block/pktcdvd.mod
