cmd_sound/soc/codecs/snd-soc-i-sabre-codec.mod := printf '%s\n'   i-sabre-codec.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-i-sabre-codec.mod
