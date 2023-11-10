cmd_sound/soc/bcm/snd-soc-hifiberry-dacplusdsp.mod := printf '%s\n'   hifiberry_dacplusdsp.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-hifiberry-dacplusdsp.mod
