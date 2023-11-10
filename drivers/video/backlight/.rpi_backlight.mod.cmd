cmd_drivers/video/backlight/rpi_backlight.mod := printf '%s\n'   rpi_backlight.o | awk '!x[$$0]++ { print("drivers/video/backlight/"$$0) }' > drivers/video/backlight/rpi_backlight.mod
