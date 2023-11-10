cmd_drivers/input/gameport/lightning.mod := printf '%s\n'   lightning.o | awk '!x[$$0]++ { print("drivers/input/gameport/"$$0) }' > drivers/input/gameport/lightning.mod
