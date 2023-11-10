cmd_sound/soc/bcm/snd-soc-i-sabre-q2m.mod := printf '%s\n'   i-sabre-q2m.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-i-sabre-q2m.mod
