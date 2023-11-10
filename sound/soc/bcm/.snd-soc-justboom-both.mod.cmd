cmd_sound/soc/bcm/snd-soc-justboom-both.mod := printf '%s\n'   justboom-both.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-justboom-both.mod
