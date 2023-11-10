cmd_sound/soc/codecs/snd-soc-ma120x0p.mod := printf '%s\n'   ma120x0p.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-ma120x0p.mod
