cmd_drivers/mfd/rpisense-core.mod := printf '%s\n'   rpisense-core.o | awk '!x[$$0]++ { print("drivers/mfd/"$$0) }' > drivers/mfd/rpisense-core.mod
