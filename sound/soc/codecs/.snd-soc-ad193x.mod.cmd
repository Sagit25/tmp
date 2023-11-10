cmd_sound/soc/codecs/snd-soc-ad193x.mod := printf '%s\n'   ad193x.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-ad193x.mod
