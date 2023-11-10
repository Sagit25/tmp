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
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0x972a3723, "consume_skb" },
	{ 0x5ca1b2e7, "can_free_echo_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8b65f896, "spi_write_then_read" },
	{ 0xf5fd8840, "alloc_can_skb" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7aeed1fd, "gpiochip_get_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x3b2b78f4, "can_dropped_invalid_skb" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x71322468, "netdev_printk" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x681b09e9, "unregister_candev" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x5340bf35, "free_candev" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x927bd2fe, "alloc_can_err_skb" },
	{ 0xe2efe534, "can_bus_off" },
	{ 0x9900edb, "can_get_echo_skb" },
	{ 0x85a552e, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0x6f2c6791, "devm_clk_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x25d49aec, "alloc_candev_mqs" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xd0585d22, "spi_setup" },
	{ 0x63a66ce1, "devm_regulator_get_optional" },
	{ 0xe52de225, "regulator_enable" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xd069faf7, "register_candev" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x20e9f9cf, "devm_gpiochip_add_data_with_key" },
	{ 0x185e9f15, "spi_get_device_id" },
	{ 0x19769b64, "close_candev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe065ce9d, "netif_device_attach" },
	{ 0x31dcea25, "open_candev" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x58dcf561, "can_put_echo_skb" },
	{ 0x171a0c7e, "can_change_mtu" },
	{ 0x6a528adb, "ethtool_op_get_ts_info" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("spi:mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625C*");

MODULE_INFO(srcversion, "711530C86B5D0659DE4AF6B");
