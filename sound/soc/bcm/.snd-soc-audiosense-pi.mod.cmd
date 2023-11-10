cmd_sound/soc/bcm/snd-soc-audiosense-pi.mod := printf '%s\n'   audiosense-pi.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-audiosense-pi.mod
