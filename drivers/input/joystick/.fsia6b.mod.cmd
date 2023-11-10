cmd_drivers/input/joystick/fsia6b.mod := printf '%s\n'   fsia6b.o | awk '!x[$$0]++ { print("drivers/input/joystick/"$$0) }' > drivers/input/joystick/fsia6b.mod
