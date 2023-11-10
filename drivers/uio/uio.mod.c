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

SYMBOL_CRC(uio_event_notify, 0xb893cb0b, "_gpl");
SYMBOL_CRC(__uio_register_device, 0x6e249d87, "_gpl");
SYMBOL_CRC(__devm_uio_register_device, 0x37162ff2, "_gpl");
SYMBOL_CRC(uio_unregister_device, 0x4148b15d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xe2964344, "__wake_up" },
	{ 0x5570945b, "kill_fasync" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xd39ca817, "kobject_put" },
	{ 0x83d5b943, "fasync_helper" },
	{ 0xcc793c4a, "module_put" },
	{ 0x606b7e51, "put_device" },
	{ 0x20978fb9, "idr_find" },
	{ 0xf7dca34a, "get_device" },
	{ 0x1425e33, "try_module_get" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x819df5d2, "remap_pfn_range" },
	{ 0x76f0cd8e, "vmalloc_to_page" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x293e8fe4, "cdev_del" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x1593e011, "cdev_alloc" },
	{ 0xef2a3de4, "kobject_set_name" },
	{ 0x8277b3bb, "cdev_add" },
	{ 0xdcced5f2, "__class_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x7bbe500c, "device_add" },
	{ 0x99009758, "kobject_create_and_add" },
	{ 0x55223acd, "kobject_init" },
	{ 0xe134a69a, "kobject_add" },
	{ 0x52427fe4, "kobject_uevent" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x402beac3, "device_del" },
	{ 0xdc510a8f, "__devres_alloc_node" },
	{ 0x28eced4f, "devres_add" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc71dca20, "generic_access_phys" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8053400DED8163E5F106571");
