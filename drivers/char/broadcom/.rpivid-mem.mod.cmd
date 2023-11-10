cmd_drivers/char/broadcom/rpivid-mem.mod := printf '%s\n'   rpivid-mem.o | awk '!x[$$0]++ { print("drivers/char/broadcom/"$$0) }' > drivers/char/broadcom/rpivid-mem.mod
