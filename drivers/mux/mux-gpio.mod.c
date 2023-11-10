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
	{ 0x922e2d55, "devm_mux_chip_alloc" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xa16de2d2, "gpiod_count" },
	{ 0xf8d07858, "bitmap_from_arr32" },
	{ 0xebf5cd86, "gpiod_set_array_value_cansleep" },
	{ 0xb07083c4, "devm_mux_chip_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x8549ffab, "devm_gpiod_get_array" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mux-core");

MODULE_ALIAS("of:N*T*Cgpio-mux");
MODULE_ALIAS("of:N*T*Cgpio-muxC*");

MODULE_INFO(srcversion, "0A3987EA653CEDD78E8BDEA");
