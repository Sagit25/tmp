cmd_sound/soc/bcm/snd-soc-justboom-dac.mod := printf '%s\n'   justboom-dac.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-justboom-dac.mod
