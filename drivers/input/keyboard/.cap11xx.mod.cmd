cmd_drivers/input/keyboard/cap11xx.mod := printf '%s\n'   cap11xx.o | awk '!x[$$0]++ { print("drivers/input/keyboard/"$$0) }' > drivers/input/keyboard/cap11xx.mod
