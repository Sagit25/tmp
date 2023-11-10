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
	{ 0x50a4da2d, "set_capacity_and_notify" },
	{ 0x1cc44abb, "__blk_alloc_disk" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe400b3d1, "crypto_comp_decompress" },
	{ 0xa32f08d7, "page_endio" },
	{ 0x691ec44b, "flush_dcache_page" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x924c46f8, "zs_unmap_object" },
	{ 0x20978fb9, "idr_find" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x992e3483, "blk_queue_logical_block_size" },
	{ 0xc4b769ca, "crypto_alloc_base" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xda9cfa1, "device_add_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x96848186, "scnprintf" },
	{ 0x7cceaf92, "zs_pool_stats" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x74159882, "crypto_comp_compress" },
	{ 0x87133427, "bio_end_io_acct_remapped" },
	{ 0xcbe56bc2, "zs_get_total_pages" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0xe8ea93e1, "__cpuhp_state_remove_instance" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5a66293, "put_disk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbae3666d, "blk_queue_physical_block_size" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x2ca970b5, "sync_blockdev" },
	{ 0x499398d3, "blk_queue_flag_set" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x8c34cc57, "blk_queue_flag_clear" },
	{ 0xdd48630a, "bio_start_io_acct" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xf3998ffb, "bio_endio" },
	{ 0xed8a2d95, "memset64" },
	{ 0x57bc19d2, "down_write" },
	{ 0xdcced5f2, "__class_register" },
	{ 0xce807a25, "up_write" },
	{ 0x37b2ccac, "__cpuhp_setup_state" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xd1319552, "set_capacity" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbcf1f0e6, "zs_create_pool" },
	{ 0x259351b0, "bdev_start_io_acct" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xba3a430e, "__cpuhp_state_add_instance" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x3d004267, "del_gendisk" },
	{ 0x39f3f1e4, "blk_queue_max_discard_sectors" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xdcb764ad, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x958df3ac, "zs_free" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5da67adc, "zs_compact" },
	{ 0xd50c34d3, "blk_queue_max_write_zeroes_sectors" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x93430f57, "blk_queue_io_min" },
	{ 0xb29533ee, "zs_malloc" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xc69b7ee5, "zs_destroy_pool" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0x27864d57, "memparse" },
	{ 0x83574cac, "blk_queue_io_opt" },
	{ 0x53b954a2, "up_read" },
	{ 0xc67a6641, "__cpuhp_remove_state" },
	{ 0xc341ae6d, "zs_map_object" },
	{ 0x5496f841, "bdev_end_io_acct" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x3d8baf3b, "zs_huge_class_size" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "zsmalloc");


MODULE_INFO(srcversion, "1A796665923AA9A9E04E286");
