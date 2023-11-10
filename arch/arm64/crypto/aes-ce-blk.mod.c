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
	{ 0xf677147a, "crypto_unregister_shashes" },
	{ 0xe95f5238, "crypto_shash_tfm_digest" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x4829a47e, "memcpy" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0x8948cdcc, "cpu_hwcaps" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x68f275ad, "ce_aes_expandkey" },
	{ 0x896a26a6, "skcipher_walk_virt" },
	{ 0x2391f725, "irq_stat" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2748f2ca, "crypto_register_shashes" },
	{ 0x8377ecc, "crypto_register_skciphers" },
	{ 0x92a8b5d6, "skcipher_walk_done" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x64b68e93, "crypto_unregister_skciphers" },
	{ 0x8d760147, "crypto_alloc_shash" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "aes-ce-cipher,libaes");

MODULE_ALIAS("cpu:type:*:feature:*0003*");

MODULE_INFO(srcversion, "9DE23D45DE780D3FCA267B1");
