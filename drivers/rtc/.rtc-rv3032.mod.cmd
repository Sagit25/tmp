cmd_drivers/rtc/rtc-rv3032.mod := printf '%s\n'   rtc-rv3032.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-rv3032.mod
