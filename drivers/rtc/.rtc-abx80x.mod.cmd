cmd_drivers/rtc/rtc-abx80x.mod := printf '%s\n'   rtc-abx80x.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-abx80x.mod
