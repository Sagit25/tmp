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
	{ 0x92997ed8, "_printk" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3b2b78f4, "can_dropped_invalid_skb" },
	{ 0x82d27d3f, "skb_clone_tx_timestamp" },
	{ 0x972a3723, "consume_skb" },
	{ 0x7eee524d, "skb_tstamp_tx" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x44289bce, "sock_efree" },
	{ 0xc04c722c, "netif_rx" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6a528adb, "ethtool_op_get_ts_info" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "A451C393824CF1E8691B8DD");
