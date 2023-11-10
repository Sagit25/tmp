cmd_drivers/char/tpm/tpm_tis_i2c.mod := printf '%s\n'   tpm_tis_i2c.o | awk '!x[$$0]++ { print("drivers/char/tpm/"$$0) }' > drivers/char/tpm/tpm_tis_i2c.mod
