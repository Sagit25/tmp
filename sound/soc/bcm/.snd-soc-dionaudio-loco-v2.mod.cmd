cmd_sound/soc/bcm/snd-soc-dionaudio-loco-v2.mod := printf '%s\n'   dionaudio_loco-v2.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-dionaudio-loco-v2.mod
