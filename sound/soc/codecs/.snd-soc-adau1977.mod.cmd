cmd_sound/soc/codecs/snd-soc-adau1977.mod := printf '%s\n'   adau1977.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-adau1977.mod
