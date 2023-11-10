cmd_drivers/w1/masters/ds1wm.mod := printf '%s\n'   ds1wm.o | awk '!x[$$0]++ { print("drivers/w1/masters/"$$0) }' > drivers/w1/masters/ds1wm.mod
