cmd_drivers/media/i2c/ov2311.mod := printf '%s\n'   ov2311.o | awk '!x[$$0]++ { print("drivers/media/i2c/"$$0) }' > drivers/media/i2c/ov2311.mod
