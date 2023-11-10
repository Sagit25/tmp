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
	{ 0xbc15ad04, "i2c_match_id" },
	{ 0x4829a47e, "memcpy" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x64eeb1a3, "aic32x4_regmap_config" },
	{ 0x214f6bab, "of_match_node" },
	{ 0x33517929, "aic32x4_remove" },
	{ 0xc317d8d, "aic32x4_probe" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,snd-soc-tlv320aic32x4");

MODULE_ALIAS("of:N*T*Cti,tlv320aic32x4");
MODULE_ALIAS("of:N*T*Cti,tlv320aic32x4C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic32x6");
MODULE_ALIAS("of:N*T*Cti,tlv320aic32x6C*");
MODULE_ALIAS("of:N*T*Cti,tas2505");
MODULE_ALIAS("of:N*T*Cti,tas2505C*");
MODULE_ALIAS("i2c:tlv320aic32x4");
MODULE_ALIAS("i2c:tlv320aic32x6");
MODULE_ALIAS("i2c:tas2505");

MODULE_INFO(srcversion, "5762EB19C57A9D2450B7909");
