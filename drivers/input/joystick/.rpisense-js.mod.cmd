cmd_drivers/input/joystick/rpisense-js.mod := printf '%s\n'   rpisense-js.o | awk '!x[$$0]++ { print("drivers/input/joystick/"$$0) }' > drivers/input/joystick/rpisense-js.mod
