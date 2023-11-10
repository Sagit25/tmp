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
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(mtd_blktrans_cease_background, 0xae785243, "_gpl");
SYMBOL_CRC(register_mtd_blktrans, 0xe01daa29, "_gpl");
SYMBOL_CRC(deregister_mtd_blktrans, 0xb26af2e9, "_gpl");
SYMBOL_CRC(add_mtd_blktrans_dev, 0x2161e501, "_gpl");
SYMBOL_CRC(del_mtd_blktrans_dev, 0xb3d822f7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x50dabc2f, "mtd_table_mutex" },
	{ 0x44e701db, "__mtd_next_device" },
	{ 0x5befb28e, "register_mtd_user" },
	{ 0x92997ed8, "_printk" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xb9f2b3bb, "unregister_mtd_user" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x44041991, "blk_mq_alloc_sq_tag_set" },
	{ 0x5c4363d9, "__blk_mq_alloc_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd1319552, "set_capacity" },
	{ 0x9f0ecc10, "blk_queue_write_cache" },
	{ 0x992e3483, "blk_queue_logical_block_size" },
	{ 0x499398d3, "blk_queue_flag_set" },
	{ 0x8c34cc57, "blk_queue_flag_clear" },
	{ 0x39f3f1e4, "blk_queue_max_discard_sectors" },
	{ 0xda9cfa1, "device_add_disk" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0xd5a66293, "put_disk" },
	{ 0x7da8b907, "blk_mq_free_tag_set" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a3508c2, "set_disk_ro" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x691ec44b, "flush_dcache_page" },
	{ 0x6e1d3566, "blk_update_request" },
	{ 0xf4560a81, "blk_mq_start_request" },
	{ 0x5151150d, "__blk_mq_end_request" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xcc793c4a, "module_put" },
	{ 0x58ea50a4, "__put_mtd_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x614ff0d5, "sysfs_remove_group" },
	{ 0x3d004267, "del_gendisk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbaf7cb04, "blk_mq_freeze_queue" },
	{ 0xe30905c4, "blk_mq_quiesce_queue" },
	{ 0xb921cb09, "blk_mq_unquiesce_queue" },
	{ 0x97e61dfa, "blk_mq_unfreeze_queue" },
	{ 0x9303f7be, "__module_get" },
	{ 0x7fbc5ae7, "__get_mtd_device" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "4F64DED252DB1DEB1A92368");
