cmd_sound/soc/bcm/snd-soc-allo-piano-dac-plus.mod := printf '%s\n'   allo-piano-dac-plus.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-allo-piano-dac-plus.mod
