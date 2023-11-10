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
	{ 0xa1dfe5e4, "crypto_register_alg" },
	{ 0xc6cf7ccf, "crypto_register_scomp" },
	{ 0xcdeddaf7, "crypto_unregister_alg" },
	{ 0xca1648d4, "zstd_decompress_dctx" },
	{ 0xafc6c68e, "zstd_is_error" },
	{ 0x6315c42c, "zstd_get_params" },
	{ 0xf2628676, "zstd_compress_cctx" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x999e8297, "vfree" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xbe6a8c96, "zstd_cctx_workspace_bound" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xa84b15d, "zstd_init_cctx" },
	{ 0x48f7b78a, "crypto_unregister_scomp" },
	{ 0x8c30bf67, "zstd_dctx_workspace_bound" },
	{ 0x3ae34aeb, "zstd_init_dctx" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "zstd_compress");


MODULE_INFO(srcversion, "C8FE67D3B4430E845640F17");
