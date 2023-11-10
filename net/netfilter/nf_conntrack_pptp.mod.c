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

SYMBOL_CRC(nf_nat_pptp_hook, 0x2629c046, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf1ebc3a4, "nf_conntrack_helper_register" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0xdac18135, "nf_ct_expect_find_get" },
	{ 0x8edaa253, "nf_ct_unexpect_related" },
	{ 0xd4a4f1e9, "nf_ct_expect_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1c8a81b1, "nf_conntrack_helper_unregister" },
	{ 0x2706fa0e, "nf_conntrack_find_get" },
	{ 0x5432ec60, "nf_ct_delete" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x82ff887f, "nf_ct_expect_alloc" },
	{ 0xac9da20e, "nf_ct_expect_init" },
	{ 0x9375b582, "nf_ct_expect_related_report" },
	{ 0x36a86947, "nf_ct_gre_keymap_add" },
	{ 0xa905c546, "nf_ct_gre_keymap_destroy" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0xbc4507e2, "nf_ct_ext_add" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "5DC46AAA3520368E488AEEA");
