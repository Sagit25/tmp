cmd_drivers/video/fbdev/rpisense-fb.mod := printf '%s\n'   rpisense-fb.o | awk '!x[$$0]++ { print("drivers/video/fbdev/"$$0) }' > drivers/video/fbdev/rpisense-fb.mod
