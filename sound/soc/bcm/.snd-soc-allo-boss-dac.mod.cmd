cmd_sound/soc/bcm/snd-soc-allo-boss-dac.mod := printf '%s\n'   allo-boss-dac.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-allo-boss-dac.mod
