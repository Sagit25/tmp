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
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xaa30a485, "cs42xx8_regmap_config" },
	{ 0xcd3794c9, "cs42448_data" },
	{ 0x7cac7292, "cs42888_data" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x471e2fe8, "cs42xx8_pm" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xca55f450, "cs42xx8_probe" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,snd-soc-cs42xx8");

MODULE_ALIAS("of:N*T*Ccirrus,cs42448");
MODULE_ALIAS("of:N*T*Ccirrus,cs42448C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs42888");
MODULE_ALIAS("of:N*T*Ccirrus,cs42888C*");
MODULE_ALIAS("i2c:cs42448");
MODULE_ALIAS("i2c:cs42888");

MODULE_INFO(srcversion, "484ADAF6F34E91A72BB356D");
