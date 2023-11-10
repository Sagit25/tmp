cmd_drivers/media/i2c/irs1125.mod := printf '%s\n'   irs1125.o | awk '!x[$$0]++ { print("drivers/media/i2c/"$$0) }' > drivers/media/i2c/irs1125.mod
