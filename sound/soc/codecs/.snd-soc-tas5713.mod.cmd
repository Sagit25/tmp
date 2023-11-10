cmd_sound/soc/codecs/snd-soc-tas5713.mod := printf '%s\n'   tas5713.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-tas5713.mod
