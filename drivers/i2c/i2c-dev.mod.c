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
	{ 0x37a0cba, "kfree" },
	{ 0x74291057, "i2c_put_adapter" },
	{ 0x92997ed8, "_printk" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x853d16c8, "__class_create" },
	{ 0x7ae52755, "i2c_bus_type" },
	{ 0xb057c160, "bus_register_notifier" },
	{ 0x3486581a, "class_destroy" },
	{ 0x2501c2a5, "i2c_for_each_dev" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xbb9bf013, "i2c_adapter_type" },
	{ 0x2ff7c860, "device_for_each_child" },
	{ 0x5a7f5ae8, "i2c_verify_client" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xef74f90d, "bus_unregister_notifier" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x606b7e51, "put_device" },
	{ 0x13575562, "cdev_device_add" },
	{ 0xfdf6508b, "i2c_get_adapter" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2a6a869d, "cdev_device_del" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8afd5abb, "i2c_smbus_xfer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdcb764ad, "memset" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "64893A5032D01C5C2CF278A");
