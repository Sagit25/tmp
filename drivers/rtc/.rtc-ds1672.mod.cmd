cmd_drivers/rtc/rtc-ds1672.mod := printf '%s\n'   rtc-ds1672.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-ds1672.mod
