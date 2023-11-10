cmd_drivers/media/i2c/arducam-pivariety.mod := printf '%s\n'   arducam-pivariety.o | awk '!x[$$0]++ { print("drivers/media/i2c/"$$0) }' > drivers/media/i2c/arducam-pivariety.mod
