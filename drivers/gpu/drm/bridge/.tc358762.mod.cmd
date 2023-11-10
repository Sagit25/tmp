cmd_drivers/gpu/drm/bridge/tc358762.mod := printf '%s\n'   tc358762.o | awk '!x[$$0]++ { print("drivers/gpu/drm/bridge/"$$0) }' > drivers/gpu/drm/bridge/tc358762.mod
