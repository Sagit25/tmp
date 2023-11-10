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

SYMBOL_CRC(iio_register_sw_trigger_type, 0x667d3622, "");
SYMBOL_CRC(iio_unregister_sw_trigger_type, 0x285753fc, "");
SYMBOL_CRC(iio_sw_trigger_create, 0x5719d983, "");
SYMBOL_CRC(iio_sw_trigger_destroy, 0x9d1ee2cd, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x70c303bc, "iio_configfs_subsys" },
	{ 0x1aebc88a, "configfs_register_default_group" },
	{ 0x43630af8, "configfs_unregister_default_group" },
	{ 0xcc793c4a, "module_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0b55e33, "config_item_put" },
	{ 0x1425e33, "try_module_get" },
	{ 0x92997ed8, "_printk" },
	{ 0x975398a, "config_item_set_name" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio-configfs");


MODULE_INFO(srcversion, "0AD3AEC00AFC66173EF661D");
