cmd_net/ax25/ax25.mod := printf '%s\n'   ax25_addr.o ax25_dev.o ax25_iface.o ax25_in.o ax25_ip.o ax25_out.o ax25_route.o ax25_std_in.o ax25_std_subr.o ax25_std_timer.o ax25_subr.o ax25_timer.o ax25_uid.o af_ax25.o ax25_ds_in.o ax25_ds_subr.o ax25_ds_timer.o sysctl_net_ax25.o | awk '!x[$$0]++ { print("net/ax25/"$$0) }' > net/ax25/ax25.mod