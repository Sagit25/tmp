cmd_drivers/perf/raspberrypi_axi_monitor.mod := printf '%s\n'   raspberrypi_axi_monitor.o | awk '!x[$$0]++ { print("drivers/perf/"$$0) }' > drivers/perf/raspberrypi_axi_monitor.mod
