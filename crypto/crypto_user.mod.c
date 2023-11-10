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
	{ 0x584ea4e, "__netlink_dump_start" },
	{ 0x68c4428a, "__nlmsg_put" },
	{ 0x35d3dc46, "crypto_alg_sem" },
	{ 0x56443bae, "crypto_alg_mod_lookup" },
	{ 0xb5624d5c, "__netlink_kernel_create" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x9716a32f, "netlink_capable" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb310efd8, "nla_put" },
	{ 0xa0b08ae9, "netlink_rcv_skb" },
	{ 0x16c628e9, "crypto_unregister_instance" },
	{ 0xe4ee67bf, "netlink_kernel_release" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xdcb764ad, "memset" },
	{ 0x85d4409, "crypto_mod_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x457594fa, "crypto_alg_list" },
	{ 0xf19504ab, "crypto_remove_spawns" },
	{ 0x5bd0748f, "crypto_del_default_rng" },
	{ 0x62495c86, "crypto_mod_put" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x3de9cae1, "crypto_remove_final" },
	{ 0x53b954a2, "up_read" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BF49682A53F1A3578A58062");
