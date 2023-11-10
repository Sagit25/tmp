cmd_drivers/input/gameport/ns558.mod := printf '%s\n'   ns558.o | awk '!x[$$0]++ { print("drivers/input/gameport/"$$0) }' > drivers/input/gameport/ns558.mod
