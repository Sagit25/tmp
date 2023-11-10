cmd_drivers/rtc/rtc-max6900.mod := printf '%s\n'   rtc-max6900.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-max6900.mod
