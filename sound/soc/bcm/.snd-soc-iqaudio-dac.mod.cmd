cmd_sound/soc/bcm/snd-soc-iqaudio-dac.mod := printf '%s\n'   iqaudio-dac.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-iqaudio-dac.mod
