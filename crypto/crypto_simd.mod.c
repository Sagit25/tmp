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

SYMBOL_CRC(simd_aead_create, 0x851c747c, "_gpl");
SYMBOL_CRC(simd_aead_create_compat, 0x504cb053, "_gpl");
SYMBOL_CRC(simd_aead_free, 0xbfd26f15, "_gpl");
SYMBOL_CRC(simd_register_aeads_compat, 0x706a879c, "_gpl");
SYMBOL_CRC(simd_register_skciphers_compat, 0x147f094a, "_gpl");
SYMBOL_CRC(simd_skcipher_create, 0x66983e96, "_gpl");
SYMBOL_CRC(simd_skcipher_create_compat, 0x88638552, "_gpl");
SYMBOL_CRC(simd_skcipher_free, 0xefe73979, "_gpl");
SYMBOL_CRC(simd_unregister_aeads, 0xcb16f9e6, "_gpl");
SYMBOL_CRC(simd_unregister_skciphers, 0xaab58a9c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x98ea29a, "crypto_skcipher_encrypt" },
	{ 0x2e49d3e3, "cryptd_alloc_aead" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3ff87777, "cryptd_aead_child" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9d01de8a, "crypto_register_aead" },
	{ 0x4fedb81a, "crypto_unregister_aead" },
	{ 0x37a0cba, "kfree" },
	{ 0xc7996340, "crypto_register_aeads" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc328ae42, "crypto_alloc_aead" },
	{ 0x1e9ad414, "crypto_aead_setauthsize" },
	{ 0x978c1877, "crypto_aead_decrypt" },
	{ 0xe620b946, "crypto_skcipher_setkey" },
	{ 0x9785a2f7, "crypto_unregister_aeads" },
	{ 0x87006149, "crypto_destroy_tfm" },
	{ 0xd4443d00, "cryptd_skcipher_child" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x82664cc8, "crypto_skcipher_decrypt" },
	{ 0x80106084, "cryptd_alloc_skcipher" },
	{ 0x1e466a10, "crypto_aead_setkey" },
	{ 0xc0c6ad32, "crypto_register_skcipher" },
	{ 0x1db91e12, "crypto_aead_encrypt" },
	{ 0x753d66b5, "cryptd_aead_queued" },
	{ 0x24d2aca6, "crypto_unregister_skcipher" },
	{ 0x74910d79, "crypto_register_skciphers" },
	{ 0xf46b3d23, "cryptd_skcipher_queued" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xddd0fa28, "cryptd_free_aead" },
	{ 0x68376bde, "crypto_unregister_skciphers" },
	{ 0xc9bc1e2c, "cryptd_free_skcipher" },
	{ 0x59a85471, "kmalloc_trace" },
	{ 0x67af26e2, "kmalloc_caches" },
	{ 0xb2363519, "crypto_alloc_skcipher" },
	{ 0xb899592f, "module_layout" },
};

MODULE_INFO(depends, "cryptd");


MODULE_INFO(srcversion, "97509D0C432E67D3007BE03");
