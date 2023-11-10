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

SYMBOL_CRC(ce_aes_expandkey, 0x68f275ad, "");
SYMBOL_CRC(ce_aes_setkey, 0x3c129d24, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcdeddaf7, "crypto_unregister_alg" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x78a16f48, "aes_decrypt" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0xa1dfe5e4, "crypto_register_alg" },
	{ 0x8948cdcc, "cpu_hwcaps" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libaes");

MODULE_ALIAS("cpu:type:*:feature:*0003*");

MODULE_INFO(srcversion, "FFB3FB60E4A43765362997A");
