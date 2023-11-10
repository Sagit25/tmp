cmd_drivers/hwmon/rp1-adc.mod := printf '%s\n'   rp1-adc.o | awk '!x[$$0]++ { print("drivers/hwmon/"$$0) }' > drivers/hwmon/rp1-adc.mod
