cmd_sound/soc/bcm/snd-soc-pifi-40.mod := printf '%s\n'   pifi-40.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-pifi-40.mod
