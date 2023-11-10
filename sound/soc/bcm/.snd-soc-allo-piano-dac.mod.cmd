cmd_sound/soc/bcm/snd-soc-allo-piano-dac.mod := printf '%s\n'   allo-piano-dac.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-allo-piano-dac.mod
