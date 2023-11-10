cmd_drivers/input/joystick/psxpad-spi.mod := printf '%s\n'   psxpad-spi.o | awk '!x[$$0]++ { print("drivers/input/joystick/"$$0) }' > drivers/input/joystick/psxpad-spi.mod
