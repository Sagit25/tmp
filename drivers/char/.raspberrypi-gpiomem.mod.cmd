cmd_drivers/char/raspberrypi-gpiomem.mod := printf '%s\n'   raspberrypi-gpiomem.o | awk '!x[$$0]++ { print("drivers/char/"$$0) }' > drivers/char/raspberrypi-gpiomem.mod
