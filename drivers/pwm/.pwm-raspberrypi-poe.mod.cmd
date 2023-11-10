cmd_drivers/pwm/pwm-raspberrypi-poe.mod := printf '%s\n'   pwm-raspberrypi-poe.o | awk '!x[$$0]++ { print("drivers/pwm/"$$0) }' > drivers/pwm/pwm-raspberrypi-poe.mod
