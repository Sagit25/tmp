cmd_drivers/char/broadcom/bcm2835_smi_dev.mod := printf '%s\n'   bcm2835_smi_dev.o | awk '!x[$$0]++ { print("drivers/char/broadcom/"$$0) }' > drivers/char/broadcom/bcm2835_smi_dev.mod
