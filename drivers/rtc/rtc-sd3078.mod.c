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
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xec1f925, "devm_rtc_allocate_device" },
	{ 0x1338a947, "__devm_rtc_register_device" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cwhwave,sd3078");
MODULE_ALIAS("of:N*T*Cwhwave,sd3078C*");
MODULE_ALIAS("i2c:sd3078");

MODULE_INFO(srcversion, "9FB66F4E05772BE6B6BB523");
