cmd_sound/soc/bcm/snd-soc-pisound.mod := printf '%s\n'   pisound.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-pisound.mod
