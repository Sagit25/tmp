cmd_sound/soc/codecs/snd-soc-arizona.mod := printf '%s\n'   arizona.o arizona-jack.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-arizona.mod
