cmd_drivers/input/misc/ad714x-spi.mod := printf '%s\n'   ad714x-spi.o | awk '!x[$$0]++ { print("drivers/input/misc/"$$0) }' > drivers/input/misc/ad714x-spi.mod
