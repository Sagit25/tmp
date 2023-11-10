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

SYMBOL_CRC(nf_defrag_ipv4_enable, 0xa5486dcb, "_gpl");
SYMBOL_CRC(nf_defrag_ipv4_disable, 0xfe6fbae5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x70f3cde3, "nf_register_net_hooks" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xbb6234da, "ip_defrag" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x30ccd6e, "nf_unregister_net_hooks" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "52E1D82824810B71BC94219");
