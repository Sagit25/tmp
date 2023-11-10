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
	{ 0xc8dcc62a, "krealloc" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x853d16c8, "__class_create" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x2a6a869d, "cdev_device_del" },
	{ 0x14050dae, "usb_interface_id" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3194eb2f, "usb_assign_descriptors" },
	{ 0x3486581a, "class_destroy" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0xb313877b, "config_ep_by_speed" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x13575562, "cdev_device_add" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0xb775db55, "alloc_ep_req" },
	{ 0x829925fd, "usb_function_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7ea31e0c, "devm_kmemdup" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3389d953, "usb_ep_autoconfig" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x68e6942f, "usb_put_function_instance" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4125292c, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0x8212fa83, "usb_free_all_descriptors" },
	{ 0xd143eaea, "usb_gstrings_attach" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "9F92480D7299BC3F45D0269");
