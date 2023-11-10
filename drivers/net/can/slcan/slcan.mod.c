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
	{ 0x8d73278e, "hex_asc_upper" },
	{ 0x7eee524d, "skb_tstamp_tx" },
	{ 0xd7f744b8, "tty_register_ldisc" },
	{ 0x972a3723, "consume_skb" },
	{ 0x3c1bbb93, "tty_mode_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xe2964344, "__wake_up" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x31dcea25, "open_candev" },
	{ 0x85a552e, "netdev_err" },
	{ 0x92997ed8, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xf5fd8840, "alloc_can_skb" },
	{ 0x681b09e9, "unregister_candev" },
	{ 0x884d434d, "can_change_state" },
	{ 0xc6cbbc89, "capable" },
	{ 0x171a0c7e, "can_change_mtu" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3b2b78f4, "can_dropped_invalid_skb" },
	{ 0x5340bf35, "free_candev" },
	{ 0x25d49aec, "alloc_candev_mqs" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x71322468, "netdev_printk" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x19769b64, "close_candev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc04c722c, "netif_rx" },
	{ 0xe2efe534, "can_bus_off" },
	{ 0x4dcdd9c8, "tty_unregister_ldisc" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x927bd2fe, "alloc_can_err_skb" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x82d27d3f, "skb_clone_tx_timestamp" },
	{ 0xd069faf7, "register_candev" },
	{ 0x6a528adb, "ethtool_op_get_ts_info" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "9C11DD092A2FB6D5CEBCBD7");
