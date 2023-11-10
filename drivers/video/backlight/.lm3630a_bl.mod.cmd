cmd_drivers/video/backlight/lm3630a_bl.mod := printf '%s\n'   lm3630a_bl.o | awk '!x[$$0]++ { print("drivers/video/backlight/"$$0) }' > drivers/video/backlight/lm3630a_bl.mod
