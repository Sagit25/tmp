cmd_drivers/media/i2c/ov9281.mod := printf '%s\n'   ov9281.o | awk '!x[$$0]++ { print("drivers/media/i2c/"$$0) }' > drivers/media/i2c/ov9281.mod
