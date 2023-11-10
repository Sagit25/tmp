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
	{ 0xdcb764ad, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("i2c:tda18212");

MODULE_INFO(srcversion, "CD81F2078B45579D8A233B8");
