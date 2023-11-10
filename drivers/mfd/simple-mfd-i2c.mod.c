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
	{ 0x111bf9da, "device_get_match_data" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x93ddeab, "devm_mfd_add_devices" },
	{ 0x86098ebc, "devm_of_platform_populate" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Ckontron,sl28cpld");
MODULE_ALIAS("of:N*T*Ckontron,sl28cpldC*");
MODULE_ALIAS("of:N*T*Csilergy,sy7636a");
MODULE_ALIAS("of:N*T*Csilergy,sy7636aC*");
MODULE_ALIAS("of:N*T*Craspberrypi,poe-core");
MODULE_ALIAS("of:N*T*Craspberrypi,poe-coreC*");

MODULE_INFO(srcversion, "D1A5C1D6D404914A00C66E7");
