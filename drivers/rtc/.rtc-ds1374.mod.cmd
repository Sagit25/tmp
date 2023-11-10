cmd_drivers/rtc/rtc-ds1374.mod := printf '%s\n'   rtc-ds1374.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-ds1374.mod
