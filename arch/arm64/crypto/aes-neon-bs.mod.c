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
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x4829a47e, "memcpy" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb8c706a6, "neon_aes_ctr_encrypt" },
	{ 0xd5f41819, "neon_aes_ecb_encrypt" },
	{ 0x896a26a6, "skcipher_walk_virt" },
	{ 0x8377ecc, "crypto_register_skciphers" },
	{ 0xdcb764ad, "memset" },
	{ 0x52d67a4e, "neon_aes_cbc_encrypt" },
	{ 0x92a8b5d6, "skcipher_walk_done" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xea11590c, "neon_aes_xts_encrypt" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x64b68e93, "crypto_unregister_skciphers" },
	{ 0xefc32a9b, "neon_aes_xts_decrypt" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libaes,aes-neon-blk");


MODULE_INFO(srcversion, "9454FA65B1E5EFCB33931CF");
