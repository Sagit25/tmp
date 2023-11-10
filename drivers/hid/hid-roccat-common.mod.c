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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(roccat_common2_receive, 0x5dd7aa2f, "_gpl");
SYMBOL_CRC(roccat_common2_send, 0xf672b626, "_gpl");
SYMBOL_CRC(roccat_common2_send_with_status, 0x5418a6a5, "_gpl");
SYMBOL_CRC(roccat_common2_device_init_struct, 0x999a046a, "_gpl");
SYMBOL_CRC(roccat_common2_sysfs_read, 0x0bfa3cf0, "_gpl");
SYMBOL_CRC(roccat_common2_sysfs_write, 0xe0f775d9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D0C329F99B0D96CA47A59DF");
