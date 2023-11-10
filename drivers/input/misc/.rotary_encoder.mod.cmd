cmd_drivers/input/misc/rotary_encoder.mod := printf '%s\n'   rotary_encoder.o | awk '!x[$$0]++ { print("drivers/input/misc/"$$0) }' > drivers/input/misc/rotary_encoder.mod
