cmd_sound/soc/bcm/snd-soc-rpi-cirrus.mod := printf '%s\n'   rpi-cirrus.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-rpi-cirrus.mod
