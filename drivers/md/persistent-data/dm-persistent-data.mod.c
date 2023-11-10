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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(dm_array_info_init, 0xb940af6a, "_gpl");
SYMBOL_CRC(dm_array_empty, 0x1d0d53f7, "_gpl");
SYMBOL_CRC(dm_array_resize, 0xe0e68183, "_gpl");
SYMBOL_CRC(dm_array_new, 0xd017c9c7, "_gpl");
SYMBOL_CRC(dm_array_del, 0x38d53eec, "_gpl");
SYMBOL_CRC(dm_array_get_value, 0x6fac2256, "_gpl");
SYMBOL_CRC(dm_array_set_value, 0x418204e4, "_gpl");
SYMBOL_CRC(dm_array_walk, 0x3896f8d8, "_gpl");
SYMBOL_CRC(dm_array_cursor_begin, 0x0d251167, "_gpl");
SYMBOL_CRC(dm_array_cursor_end, 0x8e057e61, "_gpl");
SYMBOL_CRC(dm_array_cursor_next, 0x68f34c27, "_gpl");
SYMBOL_CRC(dm_array_cursor_skip, 0x87419c51, "_gpl");
SYMBOL_CRC(dm_array_cursor_get_value, 0x67c6c5b9, "_gpl");
SYMBOL_CRC(dm_disk_bitset_init, 0x836693c5, "_gpl");
SYMBOL_CRC(dm_bitset_empty, 0x46c56110, "_gpl");
SYMBOL_CRC(dm_bitset_new, 0xe07a2542, "_gpl");
SYMBOL_CRC(dm_bitset_resize, 0x2842d760, "_gpl");
SYMBOL_CRC(dm_bitset_del, 0x07ed9022, "_gpl");
SYMBOL_CRC(dm_bitset_flush, 0xedf5036f, "_gpl");
SYMBOL_CRC(dm_bitset_set_bit, 0x40720a25, "_gpl");
SYMBOL_CRC(dm_bitset_clear_bit, 0x5b04d3fe, "_gpl");
SYMBOL_CRC(dm_bitset_test_bit, 0xecc1aeba, "_gpl");
SYMBOL_CRC(dm_bitset_cursor_begin, 0x6bfa88c8, "_gpl");
SYMBOL_CRC(dm_bitset_cursor_end, 0xa99029b9, "_gpl");
SYMBOL_CRC(dm_bitset_cursor_next, 0x94daa188, "_gpl");
SYMBOL_CRC(dm_bitset_cursor_skip, 0x51005cef, "_gpl");
SYMBOL_CRC(dm_bitset_cursor_get_value, 0x32bf4f4b, "_gpl");
SYMBOL_CRC(dm_block_location, 0x5475ba9e, "_gpl");
SYMBOL_CRC(dm_block_data, 0x1e3f728d, "_gpl");
SYMBOL_CRC(dm_block_manager_create, 0x2abddf6c, "_gpl");
SYMBOL_CRC(dm_block_manager_destroy, 0x72289260, "_gpl");
SYMBOL_CRC(dm_bm_block_size, 0x7612cd9c, "_gpl");
SYMBOL_CRC(dm_bm_read_lock, 0x7b6b3af5, "_gpl");
SYMBOL_CRC(dm_bm_write_lock, 0x5375ca71, "_gpl");
SYMBOL_CRC(dm_bm_write_lock_zero, 0x30c37cc0, "_gpl");
SYMBOL_CRC(dm_bm_unlock, 0x48e323be, "_gpl");
SYMBOL_CRC(dm_bm_flush, 0x3ad0f55b, "_gpl");
SYMBOL_CRC(dm_bm_is_read_only, 0x95a52abd, "_gpl");
SYMBOL_CRC(dm_bm_set_read_only, 0x9e798e22, "_gpl");
SYMBOL_CRC(dm_bm_set_read_write, 0x2f40da68, "_gpl");
SYMBOL_CRC(dm_bm_checksum, 0x4f477261, "_gpl");
SYMBOL_CRC(dm_sm_disk_create, 0x79bdc649, "_gpl");
SYMBOL_CRC(dm_sm_disk_open, 0x9718cffa, "_gpl");
SYMBOL_CRC(dm_tm_create_non_blocking_clone, 0x7b047bd9, "_gpl");
SYMBOL_CRC(dm_tm_destroy, 0x7ade1071, "_gpl");
SYMBOL_CRC(dm_tm_pre_commit, 0x0054f69d, "_gpl");
SYMBOL_CRC(dm_tm_commit, 0xd163cade, "_gpl");
SYMBOL_CRC(dm_tm_shadow_block, 0x932a6ffc, "_gpl");
SYMBOL_CRC(dm_tm_read_lock, 0x9290e07a, "_gpl");
SYMBOL_CRC(dm_tm_unlock, 0x88295b96, "_gpl");
SYMBOL_CRC(dm_tm_inc, 0x87c934be, "_gpl");
SYMBOL_CRC(dm_tm_inc_range, 0x3ae50a4a, "_gpl");
SYMBOL_CRC(dm_tm_dec, 0xe781f874, "_gpl");
SYMBOL_CRC(dm_tm_dec_range, 0x1ae16d40, "_gpl");
SYMBOL_CRC(dm_tm_with_runs, 0x0211c39e, "_gpl");
SYMBOL_CRC(dm_tm_issue_prefetches, 0x3646e38f, "_gpl");
SYMBOL_CRC(dm_tm_create_with_sm, 0xdf3a4e7d, "_gpl");
SYMBOL_CRC(dm_tm_open_with_sm, 0x2bc1a8d9, "_gpl");
SYMBOL_CRC(dm_btree_empty, 0xbdde4031, "_gpl");
SYMBOL_CRC(dm_btree_del, 0x6c600395, "_gpl");
SYMBOL_CRC(dm_btree_lookup, 0xdb2c8e97, "_gpl");
SYMBOL_CRC(dm_btree_lookup_next, 0x15a2bf57, "_gpl");
SYMBOL_CRC(dm_btree_insert, 0xd8682982, "_gpl");
SYMBOL_CRC(dm_btree_insert_notify, 0x4f2c653e, "_gpl");
SYMBOL_CRC(dm_btree_find_highest_key, 0x91baa32f, "_gpl");
SYMBOL_CRC(dm_btree_find_lowest_key, 0x088a5b30, "_gpl");
SYMBOL_CRC(dm_btree_walk, 0x109eae1f, "_gpl");
SYMBOL_CRC(dm_btree_cursor_begin, 0x01f7c2b0, "_gpl");
SYMBOL_CRC(dm_btree_cursor_end, 0xa0bc1801, "_gpl");
SYMBOL_CRC(dm_btree_cursor_next, 0xf71f197e, "_gpl");
SYMBOL_CRC(dm_btree_cursor_skip, 0x900896b9, "_gpl");
SYMBOL_CRC(dm_btree_cursor_get_value, 0xf2b4509a, "_gpl");
SYMBOL_CRC(dm_btree_remove, 0x0cf7c42f, "_gpl");
SYMBOL_CRC(dm_btree_remove_leaves, 0x563946a0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5a9f1d63, "memmove" },
	{ 0x6d3f57bd, "dm_bufio_get_client" },
	{ 0x6cdb2d56, "dm_bufio_prefetch" },
	{ 0x24772bfe, "dm_bufio_get" },
	{ 0xad0dc4f, "dm_bufio_mark_buffer_dirty" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2e0774dc, "dm_bufio_get_block_number" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0xebcc64a4, "dm_bufio_get_block_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf083bfba, "dm_bufio_client_create" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6d83826d, "dm_bufio_get_block_size" },
	{ 0xdcb764ad, "memset" },
	{ 0xb15b4109, "crc32c" },
	{ 0xa82b2066, "dm_bufio_write_dirty_buffers" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc0d7df85, "dm_bufio_new" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x74dcd98c, "dm_bufio_get_aux_data" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dm-bufio");


MODULE_INFO(srcversion, "D35A57AE059348431FAC213");
