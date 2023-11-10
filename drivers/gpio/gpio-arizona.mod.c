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
	{ 0x7aeed1fd, "gpiochip_get_data" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x25779a61, "regcache_drop_region" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xbbf3ca14, "gpiochip_line_is_persistent" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0xa510e5d3, "device_set_node" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0x20e9f9cf, "devm_gpiochip_add_data_with_key" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "271EFFD7BC583A45342C1E6");
