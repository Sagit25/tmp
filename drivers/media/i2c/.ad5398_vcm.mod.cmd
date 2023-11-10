cmd_drivers/media/i2c/ad5398_vcm.mod := printf '%s\n'   ad5398_vcm.o | awk '!x[$$0]++ { print("drivers/media/i2c/"$$0) }' > drivers/media/i2c/ad5398_vcm.mod
