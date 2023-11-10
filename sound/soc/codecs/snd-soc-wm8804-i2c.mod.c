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
	{ 0x6fbb787, "wm8804_pm" },
	{ 0x5bb63102, "wm8804_remove" },
	{ 0x2dc5d4ea, "wm8804_regmap_config" },
	{ 0x22024878, "wm8804_probe" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-wm8804,regmap-i2c");

MODULE_ALIAS("of:N*T*Cwlf,wm8804");
MODULE_ALIAS("of:N*T*Cwlf,wm8804C*");
MODULE_ALIAS("i2c:wm8804");

MODULE_INFO(srcversion, "B5AE767FF2421EF07E4D834");
