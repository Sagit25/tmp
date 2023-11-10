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
	{ 0xe52de225, "regulator_enable" },
	{ 0xdd952fbc, "regcache_cache_only" },
	{ 0xbfb5bed4, "regcache_sync" },
	{ 0x9a057658, "devm_gpio_request" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xbc15ad04, "i2c_match_id" },
	{ 0x86bd853, "gpiod_set_raw_value" },
	{ 0x80e32692, "regcache_mark_dirty" },
	{ 0xb82fe302, "of_get_named_gpio_flags" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x5f0265b, "gpiod_direction_output_raw" },
	{ 0x2e83e82e, "snd_soc_add_component_controls" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:tpa6130a2");
MODULE_ALIAS("i2c:tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2C*");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2C*");

MODULE_INFO(srcversion, "31B6F589BE4088991EBFEFB");
