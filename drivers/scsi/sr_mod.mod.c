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
	{ 0xb5d61547, "scsi_mode_sense" },
	{ 0x992e3483, "blk_queue_logical_block_size" },
	{ 0xb1f4c904, "scsi_autopm_put_device" },
	{ 0xfc5977fa, "scsi_device_get" },
	{ 0xda9cfa1, "device_add_disk" },
	{ 0x1729e23c, "register_cdrom" },
	{ 0x30b704a, "blk_pm_runtime_init" },
	{ 0x553e6e3a, "cdrom_ioctl" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0x8077bd22, "blk_mq_alloc_disk_for_queue" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3bf67631, "scsi_test_unit_ready" },
	{ 0x1a24f041, "scsi_block_when_processing_errors" },
	{ 0x5f2ce4c2, "scsi_register_driver" },
	{ 0xd5a66293, "put_disk" },
	{ 0x995a7651, "scsi_ioctl" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3a1fb947, "blk_execute_rq" },
	{ 0x49e41aea, "blk_mq_free_request" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7e33fbb9, "scsi_device_put" },
	{ 0x9a91816, "cdrom_get_last_written" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x3ca0a762, "cdrom_check_events" },
	{ 0xb95defae, "blk_rq_map_user" },
	{ 0xa17aa0c3, "bdev_check_media_change" },
	{ 0xd1319552, "set_capacity" },
	{ 0x55535aeb, "cdrom_get_media_event" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe16bc9d3, "sdev_prefix_printk" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xf6adf2ea, "__scsi_execute" },
	{ 0x3d004267, "del_gendisk" },
	{ 0xa08a21a3, "cdrom_release" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0xb4a80a7e, "blk_rq_unmap_user" },
	{ 0x664552cf, "scsi_alloc_sgtables" },
	{ 0x6b73070d, "scsi_autopm_get_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x21339cc4, "cdrom_open" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xc9514841, "scmd_printk" },
	{ 0xdcc70d3a, "scsi_free_sgtables" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7172e2d1, "blk_dump_rq_flags" },
	{ 0x669639f9, "unregister_cdrom" },
	{ 0xa15fe11a, "scsi_ioctl_block_when_processing_errors" },
	{ 0x1b955d70, "scsi_alloc_request" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x546e72bb, "blkdev_compat_ptr_ioctl" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x52010058, "cdrom_number_of_slots" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3ec24e77, "blk_queue_rq_timeout" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xd6bf7f6, "scsi_set_medium_removal" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "A902194DC8F72DC9435FC84");
