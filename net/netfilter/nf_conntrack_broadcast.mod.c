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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(nf_conntrack_broadcast_help, 0x9c7eeea5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x82ff887f, "nf_ct_expect_alloc" },
	{ 0x9375b582, "nf_ct_expect_related_report" },
	{ 0xd4a4f1e9, "nf_ct_expect_put" },
	{ 0xb2662372, "__nf_ct_refresh_acct" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "3FD33C06503A68AB87677A3");
