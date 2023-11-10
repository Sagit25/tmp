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
	{ 0x3e4427c8, "roccat_report_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0x853d16c8, "__class_create" },
	{ 0x1c149c2e, "__hid_register_driver" },
	{ 0x3486581a, "class_destroy" },
	{ 0xe0f775d9, "roccat_common2_sysfs_write" },
	{ 0xbfa3cf0, "roccat_common2_sysfs_read" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0x30faa048, "usb_hid_driver" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0x89198190, "hid_hw_start" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x999a046a, "roccat_common2_device_init_struct" },
	{ 0xd5a08f2c, "roccat_connect" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "hid-roccat,hid-roccat-common");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002DBE");
MODULE_ALIAS("hid:b0003g*v00001E7Dp00002DB4");

MODULE_INFO(srcversion, "C22C4619B47CE4FC26F2426");
