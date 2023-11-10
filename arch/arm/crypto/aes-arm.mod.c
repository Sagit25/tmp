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
	{ 0xc9f61220, "crypto_unregister_alg" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x56054c05, "crypto_it_tab" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2b7b7fa6, "crypto_aes_set_key" },
	{ 0xcdc159fb, "crypto_register_alg" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x1a10c32b, "crypto_ft_tab" },
	{ 0xa84ce9e0, "crypto_aes_inv_sbox" },
	{ 0xb899592f, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "43CA9302F886DCE8ADCBF43");
