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
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0x8af8defc, "i2c_smbus_read_byte_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xfbe81577, "rtc_update_irq" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xfa74e0b7, "i2c_smbus_write_i2c_block_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd486412c, "i2c_smbus_read_i2c_block_data" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xec1f925, "devm_rtc_allocate_device" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x33b0a281, "rtc_add_group" },
	{ 0x1338a947, "__devm_rtc_register_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:rx8025");
MODULE_ALIAS("i2c:rx8035");

MODULE_INFO(srcversion, "441E82D90FA0DAE32F675C4");
