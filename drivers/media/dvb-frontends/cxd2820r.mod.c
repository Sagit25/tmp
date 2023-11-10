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

SYMBOL_CRC(cxd2820r_attach, 0x1c3ef1c6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb26e53b2, "regmap_write" },
	{ 0x8733236, "intlog10" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc943aad, "i2c_new_dummy_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x7aeed1fd, "gpiochip_get_data" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x742ca250, "i2c_unregister_device" },
	{ 0xba894707, "__regmap_init_i2c" },
	{ 0xab2cc6c2, "i2c_new_client_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0xfeb2a3aa, "gpiochip_add_data_with_key" },
	{ 0x309c455f, "gpiochip_remove" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x9fbffb21, "regmap_exit" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dvb-core,regmap-i2c");

MODULE_ALIAS("i2c:cxd2820r");

MODULE_INFO(srcversion, "E095FA0047353274D8C061E");
