cmd_drivers/power/supply/ltc2941-battery-gauge.mod := printf '%s\n'   ltc2941-battery-gauge.o | awk '!x[$$0]++ { print("drivers/power/supply/"$$0) }' > drivers/power/supply/ltc2941-battery-gauge.mod
