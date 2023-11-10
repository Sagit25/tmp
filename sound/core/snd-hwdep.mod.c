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

SYMBOL_CRC(snd_hwdep_new, 0x0f8f91e4, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1425e33, "try_module_get" },
	{ 0xe9182752, "snd_info_register" },
	{ 0xa9f96f2, "snd_info_create_module_entry" },
	{ 0xf854d979, "snd_ctl_unregister_ioctl_compat" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x8360c53b, "snd_info_free_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x29329ea9, "snd_unregister_oss_device" },
	{ 0xe2964344, "__wake_up" },
	{ 0x5c08605f, "snd_register_oss_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x4a5512d2, "snd_ctl_register_ioctl" },
	{ 0x5157fceb, "snd_card_file_add" },
	{ 0xcc793c4a, "module_put" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8f595b11, "snd_major" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c31bb98, "snd_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x21f8804, "snd_device_new" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x775feec3, "snd_ctl_unregister_ioctl" },
	{ 0xdd64e639, "strscpy" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x135cafbc, "snd_ctl_register_ioctl_compat" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x3521c5ef, "snd_device_initialize" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x75f40f00, "snd_card_file_remove" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x564b4d47, "snd_register_device" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "2F1902DAB3C617A971424F9");
