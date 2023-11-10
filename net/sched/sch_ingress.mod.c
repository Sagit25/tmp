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
	{ 0x3f4db9e3, "register_qdisc" },
	{ 0xd0d086e2, "unregister_qdisc" },
	{ 0x2c3054f9, "net_inc_ingress_queue" },
	{ 0x7be6905, "net_inc_egress_queue" },
	{ 0xe17f3e47, "mini_qdisc_pair_init" },
	{ 0x9241a4bf, "tcf_block_get_ext" },
	{ 0xef449c27, "mini_qdisc_pair_block_init" },
	{ 0xa82ea9c1, "mini_qdisc_pair_swap" },
	{ 0x361d614b, "tcf_block_put_ext" },
	{ 0x46013233, "net_dec_ingress_queue" },
	{ 0x86f85114, "net_dec_egress_queue" },
	{ 0xb310efd8, "nla_put" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D3672F39605AA306682F127");
