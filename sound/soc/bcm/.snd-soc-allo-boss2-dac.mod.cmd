cmd_sound/soc/bcm/snd-soc-allo-boss2-dac.mod := printf '%s\n'   allo-boss2-dac.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-allo-boss2-dac.mod
