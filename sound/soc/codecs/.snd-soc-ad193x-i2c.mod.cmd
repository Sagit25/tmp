cmd_sound/soc/codecs/snd-soc-ad193x-i2c.mod := printf '%s\n'   ad193x-i2c.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-ad193x-i2c.mod
