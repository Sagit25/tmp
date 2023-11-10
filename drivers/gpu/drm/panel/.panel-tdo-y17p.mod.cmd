cmd_drivers/gpu/drm/panel/panel-tdo-y17p.mod := printf '%s\n'   panel-tdo-y17p.o | awk '!x[$$0]++ { print("drivers/gpu/drm/panel/"$$0) }' > drivers/gpu/drm/panel/panel-tdo-y17p.mod
