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
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xfe973719, "tlv320aic23_regmap" },
	{ 0xbb111000, "tlv320aic23_probe" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,snd-soc-tlv320aic23");

MODULE_ALIAS("i2c:tlv320aic23");
MODULE_ALIAS("of:N*T*Cti,tlv320aic23");
MODULE_ALIAS("of:N*T*Cti,tlv320aic23C*");

MODULE_INFO(srcversion, "DEDBF77CC9926C5224459FD");
