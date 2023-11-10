cmd_sound/soc/bcm/snd-soc-googlevoicehat-codec.mod := printf '%s\n'   googlevoicehat-codec.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-googlevoicehat-codec.mod
