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
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0xb29f2933, "iio_push_to_buffers" },
	{ 0xfe70805b, "iio_get_time_ns" },
	{ 0xb235aaee, "iio_push_event" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0xa207ec7d, "iio_device_unregister" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0x2795a9fe, "regmap_field_update_bits_base" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xc22fcea6, "devm_iio_kfifo_buffer_setup_ext" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xd47ccf38, "pm_runtime_set_autosuspend_delay" },
	{ 0xe44c1728, "__pm_runtime_use_autosuspend" },
	{ 0x66ec1480, "devm_regmap_field_alloc" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x695daad2, "__iio_device_register" },
	{ 0x7246f0f1, "iio_read_const_attr" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf,regmap-i2c");

MODULE_ALIAS("of:N*T*Cavago,apds9960");
MODULE_ALIAS("of:N*T*Cavago,apds9960C*");
MODULE_ALIAS("acpi*:MSHW0184:*");
MODULE_ALIAS("i2c:apds9960");

MODULE_INFO(srcversion, "F087543ADFD873D5783CED2");
