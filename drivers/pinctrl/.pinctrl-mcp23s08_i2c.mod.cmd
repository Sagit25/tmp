cmd_drivers/pinctrl/pinctrl-mcp23s08_i2c.mod := printf '%s\n'   pinctrl-mcp23s08_i2c.o | awk '!x[$$0]++ { print("drivers/pinctrl/"$$0) }' > drivers/pinctrl/pinctrl-mcp23s08_i2c.mod
