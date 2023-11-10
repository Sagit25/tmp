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

SYMBOL_CRC(register_snap_client, 0x6ac6a133, "");
SYMBOL_CRC(unregister_snap_client, 0x4934c55e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x32851e43, "llc_sap_open" },
	{ 0x92997ed8, "_printk" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x6dae9b25, "llc_build_and_send_ui_pkt" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf0f9eba2, "skb_pull_rcsum" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xbc765767, "llc_sap_close" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "2C96DF8FCE99F86E0EEE474");
