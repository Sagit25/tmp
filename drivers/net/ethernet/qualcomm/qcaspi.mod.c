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
	{ 0xc1514a3b, "free_irq" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0x48471741, "skb_put" },
	{ 0x972a3723, "consume_skb" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0xa8c060ac, "dev_trans_start" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x446b7c48, "netif_tx_unlock" },
	{ 0x85a552e, "netdev_err" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xa91d6818, "skb_copy_expand" },
	{ 0x41da0375, "qcafrm_create_header" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd017a6a4, "of_get_ethdev_address" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0x8932f5b, "ethtool_op_get_link" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0xb28a9ad, "qcafrm_create_footer" },
	{ 0xdcb764ad, "memset" },
	{ 0xcbd762f2, "netif_tx_lock" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xae7a9a01, "seq_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0x2b6ddf3f, "qcafrm_fsm_decode" },
	{ 0xd0585d22, "spi_setup" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xb3c6f341, "single_open" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "qca_7k_common");

MODULE_ALIAS("spi:qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000C*");

MODULE_INFO(srcversion, "F073693D14FB213520B8402");
