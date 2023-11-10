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
	{ 0x38745ba5, "nft_register_obj" },
	{ 0x4caa31be, "nft_register_expr" },
	{ 0xa4ee8d41, "nft_unregister_obj" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x786f1604, "nf_conncount_gc_list" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb310efd8, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf2a1dbb9, "nf_conncount_cache_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xded40268, "nf_conncount_list_init" },
	{ 0xbad2fa73, "nf_ct_netns_get" },
	{ 0xaa4c18e5, "nft_unregister_expr" },
	{ 0xfd3d71d0, "nf_conncount_add" },
	{ 0x1f2c29a7, "nf_ct_get_tuplepr" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x50034e1a, "nf_ct_netns_put" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_conncount,nf_conntrack");


MODULE_INFO(srcversion, "9C36D1030DFDAFC64E201A2");
