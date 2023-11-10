cmd_drivers/hid/hid-picolcd.mod := printf '%s\n'   hid-picolcd_core.o hid-picolcd_debugfs.o | awk '!x[$$0]++ { print("drivers/hid/"$$0) }' > drivers/hid/hid-picolcd.mod
