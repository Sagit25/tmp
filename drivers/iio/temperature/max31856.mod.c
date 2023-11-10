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
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x8b65f896, "spi_write_then_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x185e9f15, "spi_get_device_id" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0xb43d639b, "__devm_iio_device_register" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmaxim,max31856");
MODULE_ALIAS("of:N*T*Cmaxim,max31856C*");
MODULE_ALIAS("spi:max31856");

MODULE_INFO(srcversion, "5CB3CD4B10D431D66B30ECE");
