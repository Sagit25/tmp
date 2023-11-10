cmd_drivers/regulator/arizona-ldo1.mod := printf '%s\n'   arizona-ldo1.o | awk '!x[$$0]++ { print("drivers/regulator/"$$0) }' > drivers/regulator/arizona-ldo1.mod
