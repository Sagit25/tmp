cmd_sound/soc/bcm/snd-soc-rpi-wm8804-soundcard.mod := printf '%s\n'   rpi-wm8804-soundcard.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-rpi-wm8804-soundcard.mod
