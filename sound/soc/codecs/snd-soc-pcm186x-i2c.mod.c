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
	{ 0xba85632e, "pcm186x_probe" },
	{ 0xbc15ad04, "i2c_match_id" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x3a1ef603, "pcm186x_regmap" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-pcm186x,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,pcm1862");
MODULE_ALIAS("of:N*T*Cti,pcm1862C*");
MODULE_ALIAS("of:N*T*Cti,pcm1863");
MODULE_ALIAS("of:N*T*Cti,pcm1863C*");
MODULE_ALIAS("of:N*T*Cti,pcm1864");
MODULE_ALIAS("of:N*T*Cti,pcm1864C*");
MODULE_ALIAS("of:N*T*Cti,pcm1865");
MODULE_ALIAS("of:N*T*Cti,pcm1865C*");
MODULE_ALIAS("i2c:pcm1862");
MODULE_ALIAS("i2c:pcm1863");
MODULE_ALIAS("i2c:pcm1864");
MODULE_ALIAS("i2c:pcm1865");

MODULE_INFO(srcversion, "0B71F53C1C2E6CFABCB9940");
