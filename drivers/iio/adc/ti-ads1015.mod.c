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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xfe70805b, "iio_get_time_ns" },
	{ 0xb235aaee, "iio_push_event" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9e218444, "device_get_next_child_node" },
	{ 0xff96f8c5, "fwnode_property_read_u32_array" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xab6c2dfb, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0xd47ccf38, "pm_runtime_set_autosuspend_delay" },
	{ 0xe44c1728, "__pm_runtime_use_autosuspend" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0x695daad2, "__iio_device_register" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x72e8b87d, "irq_get_irq_data" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x1d877bf, "fwnode_handle_put" },
	{ 0x54e5792b, "regmap_get_device" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xb29f2933, "iio_push_to_buffers" },
	{ 0x8247207e, "iio_trigger_notify_done" },
	{ 0xa207ec7d, "iio_device_unregister" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xdd4a7853, "iio_device_claim_direct_mode" },
	{ 0x6a225370, "iio_device_release_direct_mode" },
	{ 0xde7e45e2, "iio_validate_scan_mask_onehot" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio,regmap-i2c,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cti,ads1015");
MODULE_ALIAS("of:N*T*Cti,ads1015C*");
MODULE_ALIAS("of:N*T*Cti,ads1115");
MODULE_ALIAS("of:N*T*Cti,ads1115C*");
MODULE_ALIAS("of:N*T*Cti,tla2024");
MODULE_ALIAS("of:N*T*Cti,tla2024C*");
MODULE_ALIAS("i2c:ads1015");
MODULE_ALIAS("i2c:ads1115");
MODULE_ALIAS("i2c:tla2024");

MODULE_INFO(srcversion, "5F8AA4E1FD5187F3E335F80");
