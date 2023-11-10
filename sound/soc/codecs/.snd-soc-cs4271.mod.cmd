cmd_sound/soc/codecs/snd-soc-cs4271.mod := printf '%s\n'   cs4271.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-cs4271.mod
