cmd_drivers/mfd/arizona-i2c.mod := printf '%s\n'   arizona-i2c.o | awk '!x[$$0]++ { print("drivers/mfd/"$$0) }' > drivers/mfd/arizona-i2c.mod
