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
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x2429b35f, "iio_read_channel_processed" },
	{ 0x25629ff0, "iio_get_channel_type" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8308bb6b, "devm_iio_channel_get_all" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0x7410aba2, "strreplace" },
	{ 0xf523bfa6, "devm_hwmon_device_register_with_groups" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Ciio-hwmon");
MODULE_ALIAS("of:N*T*Ciio-hwmonC*");

MODULE_INFO(srcversion, "620AFC8AD330542C8275DFD");
