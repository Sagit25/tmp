cmd_sound/soc/bcm/snd-soc-iqaudio-codec.mod := printf '%s\n'   iqaudio-codec.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-iqaudio-codec.mod
