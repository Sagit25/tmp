cmd_drivers/input/keyboard/tca6416-keypad.mod := printf '%s\n'   tca6416-keypad.o | awk '!x[$$0]++ { print("drivers/input/keyboard/"$$0) }' > drivers/input/keyboard/tca6416-keypad.mod
