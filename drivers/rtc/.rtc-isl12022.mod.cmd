cmd_drivers/rtc/rtc-isl12022.mod := printf '%s\n'   rtc-isl12022.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-isl12022.mod
