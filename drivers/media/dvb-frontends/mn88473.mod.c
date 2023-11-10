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
	{ 0x9fbffb21, "regmap_exit" },
	{ 0x742ca250, "i2c_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0x8733236, "intlog10" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0x74a05018, "request_firmware" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xba894707, "__regmap_init_i2c" },
	{ 0xcc943aad, "i2c_new_dummy_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dvb-core,regmap-i2c");

MODULE_ALIAS("i2c:mn88473");

MODULE_INFO(srcversion, "0A39741D4A0DD7B491076BD");
