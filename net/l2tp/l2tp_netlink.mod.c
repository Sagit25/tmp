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

SYMBOL_CRC(l2tp_nl_register_ops, 0xe4702cce, "_gpl");
SYMBOL_CRC(l2tp_nl_unregister_ops, 0x337f2432, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2b9da7a4, "genl_lock" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0x92997ed8, "_printk" },
	{ 0xa67cd91b, "genl_register_family" },
	{ 0x62c974e2, "l2tp_session_get_by_ifname" },
	{ 0xf67483c0, "l2tp_tunnel_get" },
	{ 0x142e7e88, "l2tp_tunnel_get_session" },
	{ 0x27cd43fe, "l2tp_tunnel_dec_refcount" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x942352e7, "genlmsg_put" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xfc2bbbe6, "genl_unregister_family" },
	{ 0xb310efd8, "nla_put" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7ce103bf, "l2tp_tunnel_get_nth" },
	{ 0xe72ee14f, "genlmsg_multicast_allns" },
	{ 0x772d0246, "l2tp_tunnel_create" },
	{ 0xc86edd0f, "l2tp_tunnel_inc_refcount" },
	{ 0x1ae9eab2, "l2tp_tunnel_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x973be991, "l2tp_tunnel_delete" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x98cf60b3, "strlen" },
	{ 0x34fda11c, "l2tp_session_get_nth" },
	{ 0xd53ffcf, "l2tp_session_dec_refcount" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x4829a47e, "memcpy" },
	{ 0x32e9758b, "l2tp_session_set_header_len" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "EF4B381FDAB68BF3C0639A7");
