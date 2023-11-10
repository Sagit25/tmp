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
	{ 0x8af8defc, "i2c_smbus_read_byte_data" },
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xfbe81577, "rtc_update_irq" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xec1f925, "devm_rtc_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x1338a947, "__devm_rtc_register_device" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x7a9ab03e, "devm_free_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xfa74e0b7, "i2c_smbus_write_i2c_block_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd486412c, "i2c_smbus_read_i2c_block_data" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdallas,ds1374");
MODULE_ALIAS("of:N*T*Cdallas,ds1374C*");
MODULE_ALIAS("i2c:ds1374");

MODULE_INFO(srcversion, "DB03560D66ADC946C4256A1");
