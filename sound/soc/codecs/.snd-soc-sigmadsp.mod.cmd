cmd_sound/soc/codecs/snd-soc-sigmadsp.mod := printf '%s\n'   sigmadsp.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-sigmadsp.mod
