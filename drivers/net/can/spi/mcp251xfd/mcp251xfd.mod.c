#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0xe52de225, "regulator_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xf52c621a, "can_rx_offload_del" },
	{ 0x58dcf561, "can_put_echo_skb" },
	{ 0xcace6925, "regmap_get_val_bytes" },
	{ 0x280f4bd8, "alloc_canfd_skb" },
	{ 0x185e9f15, "spi_get_device_id" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8b65f896, "spi_write_then_read" },
	{ 0x37a0cba, "kfree" },
	{ 0xae04012c, "__vmalloc" },
	{ 0xeefd9ada, "can_skb_get_frame_len" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc2266e79, "can_rx_offload_threaded_irq_finish" },
	{ 0x31dcea25, "open_candev" },
	{ 0x13125f2a, "devm_gpiod_put" },
	{ 0x85a552e, "netdev_err" },
	{ 0x63a66ce1, "devm_regulator_get_optional" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0x76ad2425, "can_rx_offload_queue_timestamp" },
	{ 0xf5fd8840, "alloc_can_skb" },
	{ 0x681b09e9, "unregister_candev" },
	{ 0x46d9df31, "can_ethtool_op_get_ts_info_hwts" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x884d434d, "can_change_state" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0x171a0c7e, "can_change_mtu" },
	{ 0xf0552201, "can_rx_offload_add_manual" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x3b2b78f4, "can_dropped_invalid_skb" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x5340bf35, "free_candev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x25d49aec, "alloc_candev_mqs" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x71322468, "netdev_printk" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0x68fd1fd8, "can_eth_ioctl_hwts" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x549241c, "dev_coredumpv" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x25b71966, "spi_async" },
	{ 0x19769b64, "close_candev" },
	{ 0xdcb764ad, "memset" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x16164d7f, "netif_schedule_queue" },
	{ 0xe2efe534, "can_bus_off" },
	{ 0x9bb45d31, "can_rx_offload_enable" },
	{ 0x6f2c6791, "devm_clk_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe1c1442f, "can_rx_offload_get_echo_skb" },
	{ 0xd0585d22, "spi_setup" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x927bd2fe, "alloc_can_err_skb" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x2d3abc95, "regmap_raw_write" },
	{ 0x1777343a, "napi_disable" },
	{ 0x7689a217, "netdev_notice" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xd069faf7, "register_candev" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0x862258db, "timecounter_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x45e6bd64, "__devm_regmap_init" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fdC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2518fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2518fdC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251863");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251863C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251xfd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251xfdC*");
MODULE_ALIAS("spi:mcp2517fd");
MODULE_ALIAS("spi:mcp2518fd");
MODULE_ALIAS("spi:mcp251863");
MODULE_ALIAS("spi:mcp251xfd");

MODULE_INFO(srcversion, "BEAFC3261FECB9E6BF50DDA");
