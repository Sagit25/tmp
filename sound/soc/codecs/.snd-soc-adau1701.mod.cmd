cmd_sound/soc/codecs/snd-soc-adau1701.mod := printf '%s\n'   adau1701.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-adau1701.mod
