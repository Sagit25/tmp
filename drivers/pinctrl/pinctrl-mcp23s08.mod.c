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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(mcp23x08_regmap, 0x87da2df5, "_gpl");
SYMBOL_CRC(mcp23x17_regmap, 0xb7a1891a, "_gpl");
SYMBOL_CRC(mcp23s08_probe_one, 0x7a7f66bb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7d3bddb4, "pinconf_generic_dt_node_to_map" },
	{ 0x7aeed1fd, "gpiochip_get_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd952fbc, "regcache_cache_only" },
	{ 0xbfb5bed4, "regcache_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x452adeef, "pinctrl_dev_get_drvdata" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x20e9f9cf, "devm_gpiochip_add_data_with_key" },
	{ 0x769ba58c, "devm_pinctrl_register" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb4b7ee3e, "handle_simple_irq" },
	{ 0x69be3936, "__irq_resolve_mapping" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xae6db99, "pinconf_generic_dt_free_map" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9FFFA467C20D7D856702A16");
