cmd_drivers/i2c/busses/i2c-bcm2708.mod := printf '%s\n'   i2c-bcm2708.o | awk '!x[$$0]++ { print("drivers/i2c/busses/"$$0) }' > drivers/i2c/busses/i2c-bcm2708.mod
