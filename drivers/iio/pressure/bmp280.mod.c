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

SYMBOL_CRC(bmp280_common_probe, 0xba77f815, "");
SYMBOL_CRC(bmp280_dev_pm_ops, 0xfc4325f5, "");
SYMBOL_CRC(bmp180_regmap_config, 0xf32e990b, "");
SYMBOL_CRC(bmp280_regmap_config, 0x19a84469, "");
SYMBOL_CRC(bmp380_regmap_config, 0xf6faf288, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb26e53b2, "regmap_write" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xcbca3a1f, "gpiod_set_value" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa6257a2f, "complete" },
	{ 0xd47ccf38, "pm_runtime_set_autosuspend_delay" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0xd66c8184, "add_device_randomness" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x72e8b87d, "irq_get_irq_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb43d639b, "__devm_iio_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xb0fb6ce5, "regulator_bulk_set_supply_names" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0xe44c1728, "__pm_runtime_use_autosuspend" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "77F2094A3F0873F73526B9E");
