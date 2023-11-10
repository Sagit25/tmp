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
	{ 0x81873d75, "unregister_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4fffca41, "free_netdev" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97f91466, "_dev_printk" },
	{ 0x92997ed8, "_printk" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x8b65f896, "spi_write_then_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x85a552e, "netdev_err" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x972a3723, "consume_skb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x71322468, "netdev_printk" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x1cdbdf56, "dev_close" },
	{ 0x20e19a6e, "alloc_etherdev_mqs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa575055c, "device_get_ethdev_address" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0xc04c722c, "netif_rx" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60");
MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60C*");

MODULE_INFO(srcversion, "938F99757FBA36591406856");
