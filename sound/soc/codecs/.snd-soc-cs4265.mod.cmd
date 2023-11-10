cmd_sound/soc/codecs/snd-soc-cs4265.mod := printf '%s\n'   cs4265.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-cs4265.mod
