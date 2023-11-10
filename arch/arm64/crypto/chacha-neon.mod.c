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

SYMBOL_CRC(hchacha_block_arch, 0xdd8ec6bd, "");
SYMBOL_CRC(chacha_init_arch, 0xdc94f829, "");
SYMBOL_CRC(chacha_crypt_arch, 0x220b49ab, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcec122d7, "chacha_crypt_generic" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0x8948cdcc, "cpu_hwcaps" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xaaa4b9bc, "hchacha_block_generic" },
	{ 0x896a26a6, "skcipher_walk_virt" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8377ecc, "crypto_register_skciphers" },
	{ 0x92a8b5d6, "skcipher_walk_done" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x64b68e93, "crypto_unregister_skciphers" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libchacha");


MODULE_INFO(srcversion, "F8ED46A6BE9C3BA9E79C0CE");
