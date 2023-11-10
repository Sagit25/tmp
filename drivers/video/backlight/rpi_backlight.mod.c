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
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xadda69dd, "rpi_firmware_get" },
	{ 0xd7b797db, "devm_backlight_device_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "backlight");

MODULE_ALIAS("of:N*T*Craspberrypi,rpi-backlight");
MODULE_ALIAS("of:N*T*Craspberrypi,rpi-backlightC*");

MODULE_INFO(srcversion, "F28B14D84DF7AF92BB5A4D7");
