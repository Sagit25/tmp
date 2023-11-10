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
	{ 0x16b90833, "dma_free_attrs" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x441916ec, "input_event" },
	{ 0xeba70710, "input_mt_report_slot_state" },
	{ 0x86d9791, "input_mt_sync_frame" },
	{ 0xf0f52d0a, "touchscreen_report_pos" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c59c04a, "of_get_parent" },
	{ 0x3f667784, "devm_rpi_firmware_get" },
	{ 0xb882b19b, "of_node_put" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0x31065e62, "touchscreen_parse_properties" },
	{ 0xd34af60c, "input_mt_init_slots" },
	{ 0x4a2cce7c, "input_setup_polling" },
	{ 0x6cf95b4d, "input_set_poll_interval" },
	{ 0xf1564295, "input_register_device" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,firmware-ts");
MODULE_ALIAS("of:N*T*Craspberrypi,firmware-tsC*");

MODULE_INFO(srcversion, "1E5687FB1917709C6064492");
