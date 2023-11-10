cmd_drivers/media/i2c/imx708.mod := printf '%s\n'   imx708.o | awk '!x[$$0]++ { print("drivers/media/i2c/"$$0) }' > drivers/media/i2c/imx708.mod
