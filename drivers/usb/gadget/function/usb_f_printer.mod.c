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
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x853d16c8, "__class_create" },
	{ 0x14050dae, "usb_interface_id" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3194eb2f, "usb_assign_descriptors" },
	{ 0x3486581a, "class_destroy" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8277b3bb, "cdev_add" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x829925fd, "usb_function_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x57bc19d2, "down_write" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0xa4a9ecb6, "device_create" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5792f848, "strlcpy" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3389d953, "usb_ep_autoconfig" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x68e6942f, "usb_put_function_instance" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4125292c, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3f74d235, "device_destroy" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8212fa83, "usb_free_all_descriptors" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x293e8fe4, "cdev_del" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "360F3B21A25E20BA1349746");
