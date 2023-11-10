cmd_sound/soc/bcm/snd-soc-allo-katana-codec.mod := printf '%s\n'   allo-katana-codec.o | awk '!x[$$0]++ { print("sound/soc/bcm/"$$0) }' > sound/soc/bcm/snd-soc-allo-katana-codec.mod
