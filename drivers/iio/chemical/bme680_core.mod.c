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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(bme680_regmap_config, 0x2ca4f832, "");
SYMBOL_CRC(bme680_core_probe, 0x64cf5738, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x54e5792b, "regmap_get_device" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xb43d639b, "__devm_iio_device_register" },
	{ 0x7246f0f1, "iio_read_const_attr" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "9A43B5963B9225D4B6841ED");
