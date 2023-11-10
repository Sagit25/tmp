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

SYMBOL_CRC(dm_bufio_get, 0x24772bfe, "_gpl");
SYMBOL_CRC(dm_bufio_read, 0xb04f56ab, "_gpl");
SYMBOL_CRC(dm_bufio_new, 0xc0d7df85, "_gpl");
SYMBOL_CRC(dm_bufio_prefetch, 0x6cdb2d56, "_gpl");
SYMBOL_CRC(dm_bufio_release, 0xe6024e59, "_gpl");
SYMBOL_CRC(dm_bufio_mark_partial_buffer_dirty, 0x6a2f40e1, "_gpl");
SYMBOL_CRC(dm_bufio_mark_buffer_dirty, 0x0ad0dc4f, "_gpl");
SYMBOL_CRC(dm_bufio_write_dirty_buffers_async, 0xc9a3422d, "_gpl");
SYMBOL_CRC(dm_bufio_write_dirty_buffers, 0xa82b2066, "_gpl");
SYMBOL_CRC(dm_bufio_issue_flush, 0xd4bddf5c, "_gpl");
SYMBOL_CRC(dm_bufio_issue_discard, 0x6aebce95, "_gpl");
SYMBOL_CRC(dm_bufio_release_move, 0xb2438d54, "_gpl");
SYMBOL_CRC(dm_bufio_forget, 0xcd2ba798, "_gpl");
SYMBOL_CRC(dm_bufio_forget_buffers, 0xf241a6eb, "_gpl");
SYMBOL_CRC(dm_bufio_set_minimum_buffers, 0x91f00abc, "_gpl");
SYMBOL_CRC(dm_bufio_get_block_size, 0x6d83826d, "_gpl");
SYMBOL_CRC(dm_bufio_get_device_size, 0xd991e3b9, "_gpl");
SYMBOL_CRC(dm_bufio_get_dm_io_client, 0x867e87eb, "_gpl");
SYMBOL_CRC(dm_bufio_get_block_number, 0x2e0774dc, "_gpl");
SYMBOL_CRC(dm_bufio_get_block_data, 0xebcc64a4, "_gpl");
SYMBOL_CRC(dm_bufio_get_aux_data, 0x74dcd98c, "_gpl");
SYMBOL_CRC(dm_bufio_get_client, 0x6d3f57bd, "_gpl");
SYMBOL_CRC(dm_bufio_client_create, 0xf083bfba, "_gpl");
SYMBOL_CRC(dm_bufio_client_destroy, 0xeca7949e, "_gpl");
SYMBOL_CRC(dm_bufio_set_sector_offset, 0xed3283a4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x15ba50a6, "jiffies" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x999e8297, "vfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x92997ed8, "_printk" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x89a3de6c, "bio_uninit" },
	{ 0x37a0cba, "kfree" },
	{ 0x8745a12e, "dm_io" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xfeb8b860, "bio_kmalloc" },
	{ 0x66b26d70, "bio_init" },
	{ 0xb1eda82f, "bio_add_page" },
	{ 0xa6f5d0a6, "bio_put" },
	{ 0x60ea38ad, "submit_bio" },
	{ 0xf3f67bdf, "blk_start_plug" },
	{ 0x19ce5529, "blk_finish_plug" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x8e92f7c4, "static_key_slow_inc" },
	{ 0x3d0381cc, "register_shrinker" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x3d05112c, "unregister_shrinker" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x8518a4a6, "_raw_spin_trylock_bh" },
	{ 0x991da2cb, "param_ops_ulong" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "DC9DF65738A7450B7FF5F5A");
