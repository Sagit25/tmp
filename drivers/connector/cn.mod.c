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

SYMBOL_CRC(cn_netlink_send_mult, 0x182e2f09, "_gpl");
SYMBOL_CRC(cn_netlink_send, 0xe8bc40c5, "_gpl");
SYMBOL_CRC(cn_add_callback, 0xc2124e11, "_gpl");
SYMBOL_CRC(cn_del_callback, 0x07483e13, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x68c4428a, "__nlmsg_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb5624d5c, "__netlink_kernel_create" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xe739bb49, "netlink_broadcast" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x459e03b6, "init_net" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xe4ee67bf, "netlink_kernel_release" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb7f8c5fb, "proc_create_single_data" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xaed08c5d, "netlink_has_listeners" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FFD618076D2330B13DEAAB0");
