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

SYMBOL_CRC(hifiberry_pll_regmap, 0x1d4118cb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xc2b9653c, "of_clk_del_provider" },
	{ 0x1196dca3, "of_property_read_variable_u8_array" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdcb764ad, "memset" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xa92a150c, "devm_clk_register" },
	{ 0x228fdf1a, "of_clk_src_simple_get" },
	{ 0x2b2ee70c, "of_clk_add_provider" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Chifiberry,dachd-clk");
MODULE_ALIAS("of:N*T*Chifiberry,dachd-clkC*");
MODULE_ALIAS("i2c:dachd-clk");

MODULE_INFO(srcversion, "72EC8CD34517C314041D25D");
