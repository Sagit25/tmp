cmd_drivers/input/misc/raspberrypi-button.mod := printf '%s\n'   raspberrypi-button.o | awk '!x[$$0]++ { print("drivers/input/misc/"$$0) }' > drivers/input/misc/raspberrypi-button.mod
