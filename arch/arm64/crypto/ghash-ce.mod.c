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
	{ 0x9ee3f2e6, "crypto_register_aead" },
	{ 0x8c95fc50, "crypto_unregister_aead" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0x8948cdcc, "cpu_hwcaps" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9e13f6f6, "gf128mul_lle" },
	{ 0xb12f9a1e, "crypto_register_shash" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xa47e21f7, "crypto_unregister_shash" },
	{ 0x5608f91e, "skcipher_walk_aead_encrypt" },
	{ 0xdcb764ad, "memset" },
	{ 0x92a8b5d6, "skcipher_walk_done" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x446fe27e, "skcipher_walk_aead_decrypt" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libaes,gf128mul");

MODULE_ALIAS("cpu:type:*:feature:*0004*");

MODULE_INFO(srcversion, "654A998202216CDEC825A73");
