cmd_drivers/gpu/drm/panel/panel-waveshare-dsi.mod := printf '%s\n'   panel-waveshare-dsi.o | awk '!x[$$0]++ { print("drivers/gpu/drm/panel/"$$0) }' > drivers/gpu/drm/panel/panel-waveshare-dsi.mod
