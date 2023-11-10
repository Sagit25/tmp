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

SYMBOL_CRC(rpisense_get_dev, 0x4dfad400, "_gpl");
SYMBOL_CRC(rpisense_reg_read, 0xf76a415d, "_gpl");
SYMBOL_CRC(rpisense_block_write, 0x8d48b5a3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8af8defc, "i2c_smbus_read_byte_data" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0x677df74e, "platform_device_alloc" },
	{ 0x5e169e6e, "platform_device_add" },
	{ 0x3e1cfad0, "platform_device_put" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crpi,rpi-sense");
MODULE_ALIAS("of:N*T*Crpi,rpi-senseC*");
MODULE_ALIAS("i2c:rpi-sense");

MODULE_INFO(srcversion, "5CFE2FFDB3402832D31CFA9");
