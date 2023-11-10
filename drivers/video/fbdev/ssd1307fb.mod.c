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
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xa57334bc, "backlight_device_unregister" },
	{ 0xb0dea802, "unregister_framebuffer" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0x745bd700, "fb_deferred_io_cleanup" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x5c861d8c, "framebuffer_release" },
	{ 0xffd9bd46, "pwm_put" },
	{ 0xc4ffa827, "pwm_apply_state" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x102231c1, "sys_imageblit" },
	{ 0xfb262aa8, "sys_copyarea" },
	{ 0xc8437f7a, "sys_fillrect" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x6752d2b8, "framebuffer_alloc" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x63a66ce1, "devm_regulator_get_optional" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x23359264, "device_property_read_u8_array" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x8f3f63bf, "fb_deferred_io_init" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe52de225, "regulator_enable" },
	{ 0x5e7c5eb8, "pwm_get" },
	{ 0x3c2f60b0, "register_framebuffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x39416365, "backlight_device_register" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xb1c29ef, "fb_sys_read" },
	{ 0x215869ab, "fb_deferred_io_mmap" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "backlight,sysimgblt,syscopyarea,sysfillrect,fb_sys_fops");

MODULE_ALIAS("i2c:ssd1305fb");
MODULE_ALIAS("i2c:ssd1306fb");
MODULE_ALIAS("i2c:ssd1307fb");
MODULE_ALIAS("i2c:ssd1309fb");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2cC*");

MODULE_INFO(srcversion, "3CA95CB2D69E4A3850979B4");
