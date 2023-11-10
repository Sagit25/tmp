cmd_drivers/mfd/arizona-spi.mod := printf '%s\n'   arizona-spi.o | awk '!x[$$0]++ { print("drivers/mfd/"$$0) }' > drivers/mfd/arizona-spi.mod
