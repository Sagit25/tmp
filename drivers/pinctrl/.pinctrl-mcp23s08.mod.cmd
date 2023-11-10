cmd_drivers/pinctrl/pinctrl-mcp23s08.mod := printf '%s\n'   pinctrl-mcp23s08.o | awk '!x[$$0]++ { print("drivers/pinctrl/"$$0) }' > drivers/pinctrl/pinctrl-mcp23s08.mod
