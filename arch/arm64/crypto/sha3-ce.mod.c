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
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x4829a47e, "memcpy" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0x8948cdcc, "cpu_hwcaps" },
	{ 0x2391f725, "irq_stat" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2748f2ca, "crypto_register_shashes" },
	{ 0x13726bc3, "crypto_sha3_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x85b5af47, "crypto_sha3_update" },
	{ 0xabeaaf6c, "crypto_sha3_final" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "sha3_generic");

MODULE_ALIAS("cpu:type:*:feature:*0011*");

MODULE_INFO(srcversion, "5F68D77766A5B2DD8E04517");
