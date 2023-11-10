cmd_sound/soc/codecs/snd-soc-wm5102.mod := printf '%s\n'   wm5102.o | awk '!x[$$0]++ { print("sound/soc/codecs/"$$0) }' > sound/soc/codecs/snd-soc-wm5102.mod
