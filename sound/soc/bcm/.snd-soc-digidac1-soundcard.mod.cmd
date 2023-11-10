cmd_sound/soc/bcm/snd-soc-digidac1-soundcard.mod := printf '%s\n'   digidac1-soundcard.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-digidac1-soundcard.mod
