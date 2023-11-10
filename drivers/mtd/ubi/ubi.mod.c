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

SYMBOL_CRC(ubi_do_get_device_info, 0x649970a8, "_gpl");
SYMBOL_CRC(ubi_get_device_info, 0x66011ab6, "_gpl");
SYMBOL_CRC(ubi_get_volume_info, 0xeff8b2da, "_gpl");
SYMBOL_CRC(ubi_open_volume, 0x2ba9e816, "_gpl");
SYMBOL_CRC(ubi_open_volume_nm, 0xb2bfe9b2, "_gpl");
SYMBOL_CRC(ubi_open_volume_path, 0xfc62474c, "_gpl");
SYMBOL_CRC(ubi_close_volume, 0x3251b8ba, "_gpl");
SYMBOL_CRC(ubi_leb_read, 0x7599ea38, "_gpl");
SYMBOL_CRC(ubi_leb_read_sg, 0x370e3f69, "_gpl");
SYMBOL_CRC(ubi_leb_write, 0x56fbc942, "_gpl");
SYMBOL_CRC(ubi_leb_change, 0x06ceb915, "_gpl");
SYMBOL_CRC(ubi_leb_erase, 0x0b46e3c0, "_gpl");
SYMBOL_CRC(ubi_leb_unmap, 0xfe87dc3b, "_gpl");
SYMBOL_CRC(ubi_leb_map, 0x8cb1ef93, "_gpl");
SYMBOL_CRC(ubi_is_mapped, 0x5c47eaeb, "_gpl");
SYMBOL_CRC(ubi_sync, 0x42801d20, "_gpl");
SYMBOL_CRC(ubi_flush, 0x38e10c1d, "_gpl");
SYMBOL_CRC(ubi_register_volume_notifier, 0xf5ee9ba8, "_gpl");
SYMBOL_CRC(ubi_unregister_volume_notifier, 0x85a8ee76, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x760a0f4f, "yield" },
	{ 0x1425e33, "try_module_get" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x26eb3ba3, "vfs_getattr" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0xb9c50ffb, "seq_release" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2a6a869d, "cdev_device_del" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0xca9360b5, "rb_next" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0xf7dca34a, "get_device" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x83279567, "get_mtd_device_nm" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5d6eca26, "path_put" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x2adfc84c, "get_mtd_device" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x92997ed8, "_printk" },
	{ 0x13575562, "cdev_device_add" },
	{ 0x1000e51, "schedule" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcc793c4a, "module_put" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd9f49540, "compat_ptr_ioctl" },
	{ 0x8277b3bb, "cdev_add" },
	{ 0xa88abc07, "mtd_block_markbad" },
	{ 0x57bc19d2, "down_write" },
	{ 0xdcced5f2, "__class_register" },
	{ 0xce807a25, "up_write" },
	{ 0x394f4efd, "simple_open" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x8b3724cd, "fixed_size_llseek" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8356a4eb, "put_mtd_device" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1c053052, "mtd_read" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc8c41a62, "freezing_slow_path" },
	{ 0x4c74bd14, "device_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x1f10e37, "kern_path" },
	{ 0x96601bbe, "misc_register" },
	{ 0xece784c2, "rb_first" },
	{ 0x81a95cf6, "mtd_erase" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82e4a7d, "mtd_write" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x999e8297, "vfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6577c5ee, "mtd_get_device_size" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x905bb457, "seq_open" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x70dee7c0, "mtd_block_isbad" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x53b954a2, "up_read" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x293e8fe4, "cdev_del" },
	{ 0x9858f364, "get_random_u8" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "DDFF4F68DA85D5705C8D996");
