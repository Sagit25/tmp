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
	{ 0x2629c046, "nf_nat_pptp_hook" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa421ce24, "nf_ct_nat_ext_add" },
	{ 0xdac18135, "nf_ct_expect_find_get" },
	{ 0x8edaa253, "nf_ct_unexpect_related" },
	{ 0xd4a4f1e9, "nf_ct_expect_put" },
	{ 0xa31db8ea, "nf_nat_setup_info" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3cb385fd, "__nf_nat_mangle_tcp_packet" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack_pptp,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "C7C38083A615C69B600042D");
