cmd_drivers/mfd/arizona.mod := printf '%s\n'   arizona-core.o arizona-irq.o wm5102-tables.o | awk '!x[$$0]++ { print("drivers/mfd/"$$0) }' > drivers/mfd/arizona.mod
