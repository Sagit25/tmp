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
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8af8defc, "i2c_smbus_read_byte_data" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xfbe81577, "rtc_update_irq" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xec1f925, "devm_rtc_allocate_device" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x1338a947, "__devm_rtc_register_device" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0xa92a150c, "devm_clk_register" },
	{ 0x228fdf1a, "of_clk_src_simple_get" },
	{ 0x2b2ee70c, "of_clk_add_provider" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pcf8563");
MODULE_ALIAS("of:N*T*Cnxp,pcf8563C*");
MODULE_ALIAS("of:N*T*Cepson,rtc8564");
MODULE_ALIAS("of:N*T*Cepson,rtc8564C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8564");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8564C*");
MODULE_ALIAS("of:N*T*Cnxp,pca8565");
MODULE_ALIAS("of:N*T*Cnxp,pca8565C*");
MODULE_ALIAS("i2c:pcf8563");
MODULE_ALIAS("i2c:rtc8564");
MODULE_ALIAS("i2c:pca8565");

MODULE_INFO(srcversion, "A5AF7CB81A90710905FA762");
