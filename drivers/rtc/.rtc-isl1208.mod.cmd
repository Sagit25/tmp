cmd_drivers/rtc/rtc-isl1208.mod := printf '%s\n'   rtc-isl1208.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-isl1208.mod
