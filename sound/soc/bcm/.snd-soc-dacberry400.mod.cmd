cmd_sound/soc/bcm/snd-soc-dacberry400.mod := printf '%s\n'   dacberry400.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-dacberry400.mod
