cmd_drivers/input/keyboard/tca8418_keypad.mod := printf '%s\n'   tca8418_keypad.o | awk '!x[$$0]++ { print("drivers/input/keyboard/"$$0) }' > drivers/input/keyboard/tca8418_keypad.mod
