cmd_drivers/input/touchscreen/stmpe-ts.mod := printf '%s\n'   stmpe-ts.o | awk '!x[$$0]++ { print("drivers/input/touchscreen/"$$0) }' > drivers/input/touchscreen/stmpe-ts.mod
