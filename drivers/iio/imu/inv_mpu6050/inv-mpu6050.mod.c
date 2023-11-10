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

SYMBOL_CRC(inv_mpu_core_probe, 0x5789b767, "_gpl");
SYMBOL_CRC(inv_mpu_pmops, 0x3fd24889, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe52de225, "regulator_enable" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xab6c2dfb, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x54e5792b, "regmap_get_device" },
	{ 0xd47ccf38, "pm_runtime_set_autosuspend_delay" },
	{ 0xb29f2933, "iio_push_to_buffers" },
	{ 0x96848186, "scnprintf" },
	{ 0x6a225370, "iio_device_release_direct_mode" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9303f7be, "__module_get" },
	{ 0xf7dca34a, "get_device" },
	{ 0x894a8938, "iio_device_id" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0xc48a83dc, "devm_kstrdup" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x9eee3730, "iio_show_mount_matrix" },
	{ 0xdd4a7853, "iio_device_claim_direct_mode" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x72e8b87d, "irq_get_irq_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb43d639b, "__devm_iio_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa531c586, "iio_read_mount_matrix" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x3cc89633, "devm_iio_trigger_register" },
	{ 0xb770e79a, "regmap_noinc_read" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x8247207e, "iio_trigger_notify_done" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0x7246f0f1, "iio_read_const_attr" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xe44c1728, "__pm_runtime_use_autosuspend" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0xfdf6c71a, "__devm_iio_trigger_alloc" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");


MODULE_INFO(srcversion, "39E8036D2BEE6F961A8AA37");
