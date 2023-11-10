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
	{ 0x98ea29a, "crypto_skcipher_encrypt" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x3642ec48, "crypto_alloc_base" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x9d669763, "memcpy" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe620b946, "crypto_skcipher_setkey" },
	{ 0x3d3c540f, "elf_hwcap" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xc7691357, "crypto_cipher_setkey" },
	{ 0x87006149, "crypto_destroy_tfm" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x99e5be18, "skcipher_walk_virt" },
	{ 0x74910d79, "crypto_register_skciphers" },
	{ 0x5f754e5a, "memset" },
	{ 0x2b522516, "skcipher_walk_done" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xd8ff470f, "scatterwalk_map_and_copy" },
	{ 0x5957ca3d, "crypto_cipher_encrypt_one" },
	{ 0x88638552, "simd_skcipher_create_compat" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xefe73979, "simd_skcipher_free" },
	{ 0x68376bde, "crypto_unregister_skciphers" },
	{ 0x426480c3, "crypto_cipher_decrypt_one" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0xb2363519, "crypto_alloc_skcipher" },
	{ 0xb899592f, "module_layout" },
};

MODULE_INFO(depends, "crypto_simd");


MODULE_INFO(srcversion, "5ED59D43F06E04F3AF2A4F5");
