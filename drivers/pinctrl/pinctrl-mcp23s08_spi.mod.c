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
	{ 0x8b65f896, "spi_write_then_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xb7a1891a, "mcp23x17_regmap" },
	{ 0x7ea31e0c, "devm_kmemdup" },
	{ 0x45e6bd64, "__devm_regmap_init" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0x7a7f66bb, "mcp23s08_probe_one" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x87da2df5, "mcp23x08_regmap" },
	{ 0x185e9f15, "spi_get_device_id" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "pinctrl-mcp23s08");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s18");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s18C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17C*");
MODULE_ALIAS("spi:mcp23s08");
MODULE_ALIAS("spi:mcp23s17");
MODULE_ALIAS("spi:mcp23s18");

MODULE_INFO(srcversion, "B824BB3FAD494684F2507EA");
