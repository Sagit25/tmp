cmd_drivers/media/platform/video-mux.mod := printf '%s\n'   video-mux.o | awk '!x[$$0]++ { print("drivers/media/platform/"$$0) }' > drivers/media/platform/video-mux.mod
