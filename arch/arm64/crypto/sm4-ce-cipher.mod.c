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
	{ 0xcdeddaf7, "crypto_unregister_alg" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0xa1dfe5e4, "crypto_register_alg" },
	{ 0x8948cdcc, "cpu_hwcaps" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x24e254e8, "sm4_expandkey" },
	{ 0xfa81970e, "sm4_crypt_block" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "sm4");

MODULE_ALIAS("cpu:type:*:feature:*0013*");

MODULE_INFO(srcversion, "190B481591180594601B21E");
