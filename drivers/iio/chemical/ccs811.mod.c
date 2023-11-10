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
	{ 0xa207ec7d, "iio_device_unregister" },
	{ 0x3774db31, "iio_triggered_buffer_cleanup" },
	{ 0x815a2078, "iio_trigger_unregister" },
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x8af8defc, "i2c_smbus_read_byte_data" },
	{ 0x6e140a34, "iio_trigger_poll" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xd486412c, "i2c_smbus_read_i2c_block_data" },
	{ 0xfe70805b, "iio_get_time_ns" },
	{ 0xb29f2933, "iio_push_to_buffers" },
	{ 0x8247207e, "iio_trigger_notify_done" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xdd4a7853, "iio_device_claim_direct_mode" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcbca3a1f, "gpiod_set_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6a225370, "iio_device_release_direct_mode" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xc768ff0f, "i2c_smbus_write_byte" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x894a8938, "iio_device_id" },
	{ 0xfdf6c71a, "__devm_iio_trigger_alloc" },
	{ 0x68e05d9e, "iio_trigger_register" },
	{ 0xf7dca34a, "get_device" },
	{ 0x9303f7be, "__module_get" },
	{ 0xe29055c3, "iio_triggered_buffer_setup_ext" },
	{ 0x695daad2, "__iio_device_register" },
	{ 0xfa74e0b7, "i2c_smbus_write_i2c_block_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cams,ccs811");
MODULE_ALIAS("of:N*T*Cams,ccs811C*");
MODULE_ALIAS("i2c:ccs811");

MODULE_INFO(srcversion, "60D9F9C6544B060029277A3");
