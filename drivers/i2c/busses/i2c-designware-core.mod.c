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

SYMBOL_CRC(i2c_dw_validate_speed, 0xdfd26ecc, "_gpl");
SYMBOL_CRC(i2c_dw_adjust_bus_speed, 0x89c36b46, "_gpl");
SYMBOL_CRC(i2c_dw_prepare_clk, 0xd8467e43, "_gpl");
SYMBOL_CRC(i2c_dw_configure_master, 0xeb1a9bdb, "_gpl");
SYMBOL_CRC(i2c_dw_probe_master, 0xa178f173, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb26e53b2, "regmap_write" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x169a50f, "i2c_recover_bus" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xc683a876, "i2c_generic_scl_recovery" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xef426f3b, "i2c_add_numbered_adapter" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0x45e6bd64, "__devm_regmap_init" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CAA4F93060203F40CD63956");
