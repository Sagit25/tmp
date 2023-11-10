cmd_sound/soc/bcm/snd-soc-rpi-proto.mod := printf '%s\n'   rpi-proto.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-rpi-proto.mod
