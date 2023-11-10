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
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xea304e7b, "tpm_chip_unregister" },
	{ 0x370c0fd8, "tpm_tis_remove" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x4a647f29, "tpm_tis_core_init" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "tpm,tpm_tis_core,crc-ccitt");

MODULE_ALIAS("of:N*T*Cinfineon,slb9673");
MODULE_ALIAS("of:N*T*Cinfineon,slb9673C*");
MODULE_ALIAS("i2c:tpm_tis_i2c");

MODULE_INFO(srcversion, "1FE1472DDE59345FE4DB9F2");
