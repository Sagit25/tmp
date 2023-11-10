cmd_sound/soc/bcm/snd-soc-hifiberry-dacplushd.mod := printf '%s\n'   hifiberry_dacplushd.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-hifiberry-dacplushd.mod
