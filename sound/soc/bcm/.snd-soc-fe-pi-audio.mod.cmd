cmd_sound/soc/bcm/snd-soc-fe-pi-audio.mod := printf '%s\n'   fe-pi-audio.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-fe-pi-audio.mod
