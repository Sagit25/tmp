cmd_drivers/gpio/gpio-fsm.mod := printf '%s\n'   gpio-fsm.o | awk '!x[$$0]++ { print("drivers/gpio/"$$0) }' > drivers/gpio/gpio-fsm.mod
