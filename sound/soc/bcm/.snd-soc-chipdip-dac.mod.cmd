cmd_sound/soc/bcm/snd-soc-chipdip-dac.mod := printf '%s\n'   chipdip-dac.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-chipdip-dac.mod
