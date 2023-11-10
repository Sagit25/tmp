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

SYMBOL_CRC(nfnl_acct_find_get, 0x955fea59, "_gpl");
SYMBOL_CRC(nfnl_acct_put, 0xbecf5d14, "_gpl");
SYMBOL_CRC(nfnl_acct_update, 0x3306fa0c, "_gpl");
SYMBOL_CRC(nfnl_acct_overquota, 0x124119df, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0x8ae85b79, "nfnetlink_subsys_register" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x37a0cba, "kfree" },
	{ 0xbda4f245, "nfnetlink_subsys_unregister" },
	{ 0xcc793c4a, "module_put" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5a921311, "strncmp" },
	{ 0x1425e33, "try_module_get" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x68c4428a, "__nlmsg_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb310efd8, "nla_put" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xd3c6d6dc, "nfnetlink_unicast" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x584ea4e, "__netlink_dump_start" },
	{ 0x73715f3b, "nfnetlink_broadcast" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "29788C5ECBF8961BEE2E816");
