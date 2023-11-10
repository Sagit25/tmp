cmd_sound/soc/bcm/snd-soc-dionaudio-loco.mod := printf '%s\n'   dionaudio_loco.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-dionaudio-loco.mod
