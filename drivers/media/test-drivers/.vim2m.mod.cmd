cmd_drivers/media/test-drivers/vim2m.mod := printf '%s\n'   vim2m.o | awk '!x[$$0]++ { print("drivers/media/test-drivers/"$$0) }' > drivers/media/test-drivers/vim2m.mod
