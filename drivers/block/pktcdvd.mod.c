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
	{ 0x92997ed8, "_printk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa6f5d0a6, "bio_put" },
	{ 0xf3998ffb, "bio_endio" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xdc8bbc6, "bio_split_to_limits" },
	{ 0xf6682de, "bio_split" },
	{ 0xae8f1cfd, "bio_chain" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xadd108ae, "bio_alloc_clone" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xca9360b5, "rb_next" },
	{ 0x89a3de6c, "bio_uninit" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xb3c6f341, "single_open" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0x8de5a164, "blkdev_put" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0x3d004267, "del_gendisk" },
	{ 0xd5a66293, "put_disk" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xcc793c4a, "module_put" },
	{ 0x3486581a, "class_destroy" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x2d15ee2a, "bioset_exit" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0xdcb764ad, "memset" },
	{ 0x66b26d70, "bio_init" },
	{ 0xb1eda82f, "bio_add_page" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1cc44abb, "__blk_alloc_disk" },
	{ 0xe914e41e, "strcpy" },
	{ 0x45c18671, "blkdev_get_by_dev" },
	{ 0xe15b16b3, "scsi_device_from_queue" },
	{ 0xda9cfa1, "device_add_disk" },
	{ 0xe5c17e53, "device_create_with_groups" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x606b7e51, "put_device" },
	{ 0x9303f7be, "__module_get" },
	{ 0x4af49daa, "set_blocksize" },
	{ 0x992e3483, "blk_queue_logical_block_size" },
	{ 0x97ddd9b3, "blk_queue_max_hw_sectors" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xb7f8c5fb, "proc_create_single_data" },
	{ 0x1425e33, "try_module_get" },
	{ 0x1b955d70, "scsi_alloc_request" },
	{ 0xc1610304, "blk_rq_map_kern" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x3a1fb947, "blk_execute_rq" },
	{ 0x49e41aea, "blk_mq_free_request" },
	{ 0xbb24f607, "init_cdrom_command" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x663aacd2, "bioset_init" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xdcced5f2, "__class_register" },
	{ 0x96601bbe, "misc_register" },
	{ 0xa48f9eb7, "proc_mkdir" },
	{ 0xc444c98c, "submit_bio_noacct" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6a0f82b4, "set_user_nice" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd73653c4, "freezer_active" },
	{ 0xece784c2, "rb_first" },
	{ 0xc8c41a62, "freezing_slow_path" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xaf94f012, "bio_copy_data_iter" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xd1319552, "set_capacity" },
	{ 0x50a4da2d, "set_capacity_and_notify" },
	{ 0xfeb8b860, "bio_kmalloc" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x546e72bb, "blkdev_compat_ptr_ioctl" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x613beb6, "single_release" },
	{ 0xde77a6be, "nonseekable_open" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "80E68E1DB2863DECC4D7AA3");
