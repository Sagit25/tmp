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
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfbe81577, "rtc_update_irq" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x7c32e51c, "__devm_regmap_init_spi" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xec1f925, "devm_rtc_allocate_device" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x1338a947, "__devm_rtc_register_device" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("spi:pcf2123");
MODULE_ALIAS("spi:rv2123");
MODULE_ALIAS("spi:rtc-pcf2123");
MODULE_ALIAS("of:N*T*Cnxp,pcf2123");
MODULE_ALIAS("of:N*T*Cnxp,pcf2123C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv2123");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv2123C*");
MODULE_ALIAS("of:N*T*Cnxp,rtc-pcf2123");
MODULE_ALIAS("of:N*T*Cnxp,rtc-pcf2123C*");

MODULE_INFO(srcversion, "9C9185EA3A000E0D8463438");
