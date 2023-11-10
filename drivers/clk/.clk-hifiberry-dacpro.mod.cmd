cmd_drivers/clk/clk-hifiberry-dacpro.mod := printf '%s\n'   clk-hifiberry-dacpro.o | awk '!x[$$0]++ { print("drivers/clk/"$$0) }' > drivers/clk/clk-hifiberry-dacpro.mod
