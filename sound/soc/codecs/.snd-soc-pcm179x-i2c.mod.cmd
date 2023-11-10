cmd_sound/soc/codecs/snd-soc-pcm179x-i2c.mod := printf '%s\n'   pcm179x-i2c.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-pcm179x-i2c.mod
