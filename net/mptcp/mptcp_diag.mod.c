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
	{ 0x70de4cfa, "inet_diag_register" },
	{ 0x9b63538f, "mptcp_diag_fill_info" },
	{ 0x8f6b63c3, "inet_diag_unregister" },
	{ 0xe7877658, "mptcp_token_get_sock" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x729ae44d, "netlink_net_capable" },
	{ 0xe8f223dd, "inet_sk_diag_fill" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdd829dfb, "mptcp_token_iter_next" },
	{ 0xfe13492a, "inet_diag_bc_sk" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "17EBC9518420B19C662409D");
