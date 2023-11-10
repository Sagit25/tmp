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

SYMBOL_CRC(arizona_clk32k_enable, 0xea1fa0da, "_gpl");
SYMBOL_CRC(arizona_clk32k_disable, 0x5a6db39b, "_gpl");
SYMBOL_CRC(arizona_pm_ops, 0x83248ce8, "_gpl");
SYMBOL_CRC(arizona_dev_init, 0xddf78018, "_gpl");
SYMBOL_CRC(arizona_dev_exit, 0xcab714ab, "_gpl");
SYMBOL_CRC(arizona_request_irq, 0xcdcc7f43, "_gpl");
SYMBOL_CRC(arizona_free_irq, 0xf3c86c24, "_gpl");
SYMBOL_CRC(arizona_set_irq_wake, 0xa0be43cd, "_gpl");
SYMBOL_CRC(wm5102_spi_regmap, 0x16c93820, "_gpl");
SYMBOL_CRC(wm5102_i2c_regmap, 0x55f1f96c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe52de225, "regulator_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfc5b0633, "irq_domain_xlate_twocell" },
	{ 0xdd952fbc, "regcache_cache_only" },
	{ 0xbfb5bed4, "regcache_sync" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x162c5334, "regulator_get" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x17a65868, "gpiod_set_raw_value_cansleep" },
	{ 0xd47ccf38, "pm_runtime_set_autosuspend_delay" },
	{ 0xb90aadc4, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xf97ba291, "regulator_put" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x80e32692, "regcache_mark_dirty" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc5b6e657, "irq_set_chip_and_handler_name" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0xb4b7ee3e, "handle_simple_irq" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x6847e01, "regmap_add_irq_chip" },
	{ 0xc24a9cda, "gpiod_get_raw_value_cansleep" },
	{ 0xac095dce, "devm_gpio_request_one" },
	{ 0x84b2ee6f, "regmap_multi_reg_write_bypassed" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x72e8b87d, "irq_get_irq_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2a420a11, "mfd_add_devices" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x69be3936, "__irq_resolve_mapping" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x6c620ca3, "__irq_domain_add" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0x8296d3ad, "irq_create_mapping_affinity" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa0be912, "mfd_remove_devices" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xe44c1728, "__pm_runtime_use_autosuspend" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x4623f12f, "regulator_set_voltage" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A24ACB5B1870DF44B9A3BE7");
