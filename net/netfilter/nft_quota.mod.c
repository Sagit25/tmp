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
	{ 0x37a0cba, "kfree" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xaa4c18e5, "nft_unregister_expr" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x34310e61, "nft_obj_notify" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0xb310efd8, "nla_put" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "2EBC1C0922DB54AA63BF815");
