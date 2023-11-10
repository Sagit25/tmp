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
	{ 0xccebc488, "nf_nat_ftp_hook" },
	{ 0x8546ad36, "nf_nat_helper_register" },
	{ 0x977f12bd, "nf_nat_helper_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5c00915d, "nf_nat_follow_master" },
	{ 0x295a7f18, "nf_nat_exp_find_port" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3cb385fd, "__nf_nat_mangle_tcp_packet" },
	{ 0xa85f230d, "nf_ct_helper_log" },
	{ 0x8edaa253, "nf_ct_unexpect_related" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack_ftp,nf_conntrack,nf_nat");


MODULE_INFO(srcversion, "1B0A34945B90260D8282C36");
