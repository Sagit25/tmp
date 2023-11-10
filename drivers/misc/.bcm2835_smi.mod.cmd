cmd_drivers/misc/bcm2835_smi.mod := printf '%s\n'   bcm2835_smi.o | awk '!x[$$0]++ { print("drivers/misc/"$$0) }' > drivers/misc/bcm2835_smi.mod
