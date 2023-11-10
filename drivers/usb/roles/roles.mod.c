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

SYMBOL_CRC(fwnode_usb_role_switch_get, 0x6264be02, "_gpl");
SYMBOL_CRC(usb_role_string, 0x39aa4888, "_gpl");
SYMBOL_CRC(usb_role_switch_find_by_fwnode, 0xb18f738a, "_gpl");
SYMBOL_CRC(usb_role_switch_get, 0xe412fab9, "_gpl");
SYMBOL_CRC(usb_role_switch_get_drvdata, 0x1690b503, "_gpl");
SYMBOL_CRC(usb_role_switch_get_role, 0xff42c374, "_gpl");
SYMBOL_CRC(usb_role_switch_put, 0xc9fd634a, "_gpl");
SYMBOL_CRC(usb_role_switch_register, 0x423cc9b3, "_gpl");
SYMBOL_CRC(usb_role_switch_set_drvdata, 0x51a348cc, "_gpl");
SYMBOL_CRC(usb_role_switch_set_role, 0xd5474690, "_gpl");
SYMBOL_CRC(usb_role_switch_unregister, 0x2882d40e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x5dcee1dc, "try_module_get" },
	{ 0xfcd2e0ea, "__class_create" },
	{ 0xe28eff71, "dev_set_name" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x574c0679, "device_unregister" },
	{ 0xc9b921cc, "class_destroy" },
	{ 0xb260cc6f, "dev_fwnode" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4efd38e, "fwnode_connection_find_match" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xfdb36799, "fwnode_get_parent" },
	{ 0x38a158ee, "device_match_fwnode" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x88af9bce, "put_device" },
	{ 0x2a914872, "module_put" },
	{ 0x91ba8b01, "_dev_err" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x1422bbfd, "device_register" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf068ed54, "fwnode_property_present" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xeeb0cb0b, "kobject_uevent" },
	{ 0x59a85471, "kmalloc_trace" },
	{ 0x6630617f, "fwnode_handle_put" },
	{ 0x67af26e2, "kmalloc_caches" },
	{ 0xb3e1635b, "class_find_device" },
	{ 0xb899592f, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7F2E2B287CC190D2D26A478");
