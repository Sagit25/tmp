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
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2d2f5cd5, "ms_sensors_reset" },
	{ 0x8f0461fc, "ms_sensors_read_serial" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xb43d639b, "__devm_iio_device_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x17e02772, "ms_sensors_write_resolution" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd13ce113, "ms_sensors_ht_read_humidity" },
	{ 0x69a36cae, "ms_sensors_ht_read_temperature" },
	{ 0x8c313ff8, "ms_sensors_write_heater" },
	{ 0x45031e28, "ms_sensors_show_heater" },
	{ 0x6a807ec9, "ms_sensors_show_battery_low" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x7246f0f1, "iio_read_const_attr" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio,ms_sensors_i2c");

MODULE_ALIAS("of:N*T*Cmeas,htu21");
MODULE_ALIAS("of:N*T*Cmeas,htu21C*");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-humidity");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-humidityC*");
MODULE_ALIAS("i2c:htu21");
MODULE_ALIAS("i2c:ms8607-humidity");

MODULE_INFO(srcversion, "9A470E4CF0D30DD5EBD7B74");
