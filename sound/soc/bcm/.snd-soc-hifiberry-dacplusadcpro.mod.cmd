cmd_sound/soc/bcm/snd-soc-hifiberry-dacplusadcpro.mod := printf '%s\n'   hifiberry_dacplusadcpro.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-hifiberry-dacplusadcpro.mod
