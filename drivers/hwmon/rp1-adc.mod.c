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
	{ 0x3714ccd6, "__platform_driver_probe" },
	{ 0x6de54d7d, "hwmon_device_unregister" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x63713aaf, "devm_platform_ioremap_resource" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0x7fa998e5, "regulator_get_voltage" },
	{ 0xf523bfa6, "devm_hwmon_device_register_with_groups" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x614ff0d5, "sysfs_remove_group" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rp1-adc");
MODULE_ALIAS("of:N*T*Craspberrypi,rp1-adcC*");

MODULE_INFO(srcversion, "243FFDA07880BF4C2CCED63");
