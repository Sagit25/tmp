cmd_drivers/gpio/gpio-arizona.mod := printf '%s\n'   gpio-arizona.o | awk '!x[$$0]++ { print("drivers/gpio/"$$0) }' > drivers/gpio/gpio-arizona.mod
