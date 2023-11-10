cmd_drivers/media/i2c/arducam_64mp.mod := printf '%s\n'   arducam_64mp.o | awk '!x[$$0]++ { print("drivers/media/i2c/"$$0) }' > drivers/media/i2c/arducam_64mp.mod
