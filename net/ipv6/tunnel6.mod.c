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

SYMBOL_CRC(xfrm6_tunnel_register, 0xa9788733, "");
SYMBOL_CRC(xfrm6_tunnel_deregister, 0x40416c0d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x999d9165, "inet6_add_protocol" },
	{ 0x92997ed8, "_printk" },
	{ 0xb1489500, "inet6_del_protocol" },
	{ 0xd89889ae, "xfrm_input_register_afinfo" },
	{ 0xe705c3fa, "__icmpv6_send" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xa12e8a3e, "xfrm_input_unregister_afinfo" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "975715B74011B9D23D94754");
