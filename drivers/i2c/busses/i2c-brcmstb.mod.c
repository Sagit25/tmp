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
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x23912872, "platform_get_resource" },
	{ 0xce23f8ca, "devm_ioremap_resource" },
	{ 0x7a6ffa02, "of_device_is_compatible" },
	{ 0xf973d666, "platform_get_resource_byname" },
	{ 0xd999bac2, "devm_iounmap" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0x8982520b, "platform_get_irq_optional" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xdd64e639, "strscpy" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xa6257a2f, "complete" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,brcmstb-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,brcmstb-i2cC*");
MODULE_ALIAS("of:N*T*Cbrcm,brcmper-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,brcmper-i2cC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-hdmi-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-hdmi-i2cC*");

MODULE_INFO(srcversion, "699AB53AC7E7F154D1B8974");
