cmd_sound/soc/bcm/snd-soc-hifiberry-dacplus.mod := printf '%s\n'   hifiberry_dacplus.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-hifiberry-dacplus.mod
