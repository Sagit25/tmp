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
	{ 0x35a2d146, "xt_register_target" },
	{ 0xdd327edc, "xt_register_targets" },
	{ 0x25b24455, "xt_unregister_target" },
	{ 0xf90abf79, "xt_unregister_targets" },
	{ 0xbad2fa73, "nf_ct_netns_get" },
	{ 0xf824b36d, "nf_ct_tmpl_alloc" },
	{ 0x5f25338a, "nf_ct_ecache_ext_add" },
	{ 0x88395a41, "nf_ct_tmpl_free" },
	{ 0x50034e1a, "nf_ct_netns_put" },
	{ 0xa916b694, "strnlen" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x9fa14e4c, "nf_conntrack_helper_try_module_get" },
	{ 0x53180f40, "nf_ct_helper_ext_add" },
	{ 0xa67b4ae1, "nf_conntrack_helper_put" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "829DC803D886ED7D88D5F35");
