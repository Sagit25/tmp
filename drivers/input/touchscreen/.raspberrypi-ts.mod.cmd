cmd_drivers/input/touchscreen/raspberrypi-ts.mod := printf '%s\n'   raspberrypi-ts.o | awk '!x[$$0]++ { print("drivers/input/touchscreen/"$$0) }' > drivers/input/touchscreen/raspberrypi-ts.mod
