cmd_sound/soc/codecs/snd-soc-pcm1794a.mod := printf '%s\n'   pcm1794a.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-pcm1794a.mod
