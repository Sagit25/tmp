cmd_sound/soc/bcm/snd-soc-rpi-simple-soundcard.mod := printf '%s\n'   rpi-simple-soundcard.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-rpi-simple-soundcard.mod
