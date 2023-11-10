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
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x93426ecd, "device_property_read_string" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0xf1564295, "input_register_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x441916ec, "input_event" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,firmware-button");
MODULE_ALIAS("of:N*T*Craspberrypi,firmware-buttonC*");

MODULE_INFO(srcversion, "4C88E8A364438F2EBD58DFD");
