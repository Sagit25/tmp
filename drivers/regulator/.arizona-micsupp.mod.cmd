cmd_drivers/regulator/arizona-micsupp.mod := printf '%s\n'   arizona-micsupp.o | awk '!x[$$0]++ { print("drivers/regulator/"$$0) }' > drivers/regulator/arizona-micsupp.mod
