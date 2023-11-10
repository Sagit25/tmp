cmd_sound/soc/bcm/snd-soc-hifiberry-dacplusadc.mod := printf '%s\n'   hifiberry_dacplusadc.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-hifiberry-dacplusadc.mod
