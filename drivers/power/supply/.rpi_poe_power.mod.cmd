cmd_drivers/power/supply/rpi_poe_power.mod := printf '%s\n'   rpi_poe_power.o | awk '!x[$$0]++ { print("drivers/power/supply/"$$0) }' > drivers/power/supply/rpi_poe_power.mod
