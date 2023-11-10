cmd_drivers/clk/clk-hifiberry-dachd.mod := printf '%s\n'   clk-hifiberry-dachd.o | awk '!x[$$0]++ { print("drivers/clk/"$$0) }' > drivers/clk/clk-hifiberry-dachd.mod
