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

SYMBOL_CRC(backlight_device_set_brightness, 0xcf63724d, "");
SYMBOL_CRC(backlight_force_update, 0xa671819a, "");
SYMBOL_CRC(backlight_device_register, 0x39416365, "");
SYMBOL_CRC(backlight_device_get_by_type, 0x54780552, "");
SYMBOL_CRC(backlight_device_get_by_name, 0x34d579e9, "");
SYMBOL_CRC(backlight_device_unregister, 0xa57334bc, "");
SYMBOL_CRC(backlight_register_notifier, 0xdc512134, "");
SYMBOL_CRC(backlight_unregister_notifier, 0x9939eba0, "");
SYMBOL_CRC(devm_backlight_device_register, 0xd7b797db, "");
SYMBOL_CRC(devm_backlight_device_unregister, 0x926118a2, "");
SYMBOL_CRC(of_find_backlight_by_node, 0xa8e028d0, "");
SYMBOL_CRC(devm_of_find_backlight, 0x6562c4f7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xec7546ac, "kobject_uevent_env" },
	{ 0xf5b71c4b, "sysfs_notify" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x606b7e51, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xe9726398, "device_match_name" },
	{ 0x7d26ecfe, "class_find_device" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x853d16c8, "__class_create" },
	{ 0x92997ed8, "_printk" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3486581a, "class_destroy" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0xb12cbacb, "fb_unregister_client" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0xf021b862, "devres_release" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x4c74bd14, "device_register" },
	{ 0x80d68d3e, "fb_register_client" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdc510a8f, "__devres_alloc_node" },
	{ 0x28eced4f, "devres_add" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0xb882b19b, "of_node_put" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7FF72367413063866E2C9A8");
