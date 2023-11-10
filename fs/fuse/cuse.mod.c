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
	{ 0xee837730, "fuse_abort_conn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x293e8fe4, "cdev_del" },
	{ 0x1731f42a, "fuse_dev_release" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x1a3d6587, "fuse_dev_operations" },
	{ 0x4829a47e, "memcpy" },
	{ 0x853d16c8, "__class_create" },
	{ 0x96601bbe, "misc_register" },
	{ 0x3486581a, "class_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x97b8cffe, "fuse_sync_release" },
	{ 0xf944dd3, "fuse_conn_put" },
	{ 0x7ab4fb53, "fuse_conn_get" },
	{ 0xa1799698, "fuse_do_open" },
	{ 0x1a32b4bc, "fuse_do_ioctl" },
	{ 0xdcb764ad, "memset" },
	{ 0x1312de6a, "fuse_direct_io" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x98cf60b3, "strlen" },
	{ 0x85df9b6c, "strsep" },
	{ 0x77bc13a0, "strim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x606b7e51, "put_device" },
	{ 0x7bbe500c, "device_add" },
	{ 0x1593e011, "cdev_alloc" },
	{ 0x8277b3bb, "cdev_add" },
	{ 0x52427fe4, "kobject_uevent" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x92997ed8, "_printk" },
	{ 0x60b2e43d, "fuse_dev_fiq_ops" },
	{ 0xc6547fa1, "fuse_conn_init" },
	{ 0x909f16ce, "fuse_dev_alloc_install" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0xf6c91500, "fuse_simple_background" },
	{ 0xe92b47f6, "fuse_dev_free" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x62c4a2d9, "fuse_file_poll" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "fuse");


MODULE_INFO(srcversion, "2AEFF4C6F1A63CE76F7CCD0");
