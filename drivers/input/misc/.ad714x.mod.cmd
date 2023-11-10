cmd_drivers/input/misc/ad714x.mod := printf '%s\n'   ad714x.o | awk '!x[$$0]++ { print("drivers/input/misc/"$$0) }' > drivers/input/misc/ad714x.mod
