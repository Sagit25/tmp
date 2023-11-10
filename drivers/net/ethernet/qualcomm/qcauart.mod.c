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
	{ 0x20e19a6e, "alloc_etherdev_mqs" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x48471741, "skb_put" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xf22cc0cc, "serdev_device_set_baudrate" },
	{ 0x972a3723, "consume_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x23e2d31a, "serdev_device_set_flow_control" },
	{ 0xa8c060ac, "dev_trans_start" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8c02350c, "serdev_device_open" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x41da0375, "qcafrm_create_header" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xd017a6a4, "of_get_ethdev_address" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x76b8c307, "__serdev_device_driver_register" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0xb28a9ad, "qcafrm_create_footer" },
	{ 0xdcb764ad, "memset" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0xc55175c, "serdev_device_write_buf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2b6ddf3f, "qcafrm_fsm_decode" },
	{ 0xa956648d, "serdev_device_close" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "qca_7k_common");

MODULE_ALIAS("of:N*T*Cqca,qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000C*");

MODULE_INFO(srcversion, "02CC0AE0518029E66F4F39C");
