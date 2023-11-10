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

SYMBOL_CRC(libceph_compatible, 0x466b85b8, "");
SYMBOL_CRC(ceph_msg_type_name, 0xb54676fa, "");
SYMBOL_CRC(ceph_check_fsid, 0x7cee68de, "");
SYMBOL_CRC(ceph_compare_options, 0x87869b35, "");
SYMBOL_CRC(ceph_parse_fsid, 0x4affd6c2, "");
SYMBOL_CRC(ceph_alloc_options, 0x987d3968, "");
SYMBOL_CRC(ceph_destroy_options, 0xd4d736db, "");
SYMBOL_CRC(ceph_parse_mon_ips, 0x4ee5dc03, "");
SYMBOL_CRC(ceph_parse_param, 0xe4e85d37, "");
SYMBOL_CRC(ceph_print_client_options, 0x8ee4772a, "");
SYMBOL_CRC(ceph_client_addr, 0x8859e383, "");
SYMBOL_CRC(ceph_client_gid, 0xcb327015, "");
SYMBOL_CRC(ceph_create_client, 0xa67aa67c, "");
SYMBOL_CRC(ceph_destroy_client, 0xf95a0fd0, "");
SYMBOL_CRC(ceph_reset_client_addr, 0xdefcd56e, "");
SYMBOL_CRC(__ceph_open_session, 0xa30ce3a9, "");
SYMBOL_CRC(ceph_open_session, 0x3c4a100e, "");
SYMBOL_CRC(ceph_wait_for_latest_osdmap, 0x650d34af, "");
SYMBOL_CRC(ceph_pr_addr, 0x6a7a38a0, "");
SYMBOL_CRC(ceph_msgr_flush, 0xafb8a407, "");
SYMBOL_CRC(ceph_con_close, 0xb15ce5e1, "");
SYMBOL_CRC(ceph_con_open, 0x474b9d68, "");
SYMBOL_CRC(ceph_con_init, 0xc8d198e3, "");
SYMBOL_CRC(ceph_addr_is_blank, 0xf254297e, "");
SYMBOL_CRC(ceph_con_send, 0xaebb68bd, "");
SYMBOL_CRC(ceph_con_keepalive, 0x1e98a160, "");
SYMBOL_CRC(ceph_msg_data_add_pages, 0x10c82851, "");
SYMBOL_CRC(ceph_msg_data_add_pagelist, 0x64647e06, "");
SYMBOL_CRC(ceph_msg_data_add_bio, 0xef68501e, "");
SYMBOL_CRC(ceph_msg_data_add_bvecs, 0x82da33f5, "");
SYMBOL_CRC(ceph_msg_new2, 0x9619e7b5, "");
SYMBOL_CRC(ceph_msg_new, 0x7cabf73f, "");
SYMBOL_CRC(ceph_msg_get, 0x9ff8bfb1, "");
SYMBOL_CRC(ceph_msg_put, 0xe527ef70, "");
SYMBOL_CRC(ceph_msg_dump, 0x65fea75f, "");
SYMBOL_CRC(ceph_buffer_new, 0x9fbba67f, "");
SYMBOL_CRC(ceph_buffer_release, 0xb72c162e, "");
SYMBOL_CRC(ceph_pagelist_alloc, 0xe76e7226, "");
SYMBOL_CRC(ceph_pagelist_release, 0x2a983d26, "");
SYMBOL_CRC(ceph_pagelist_append, 0xefce991c, "");
SYMBOL_CRC(ceph_pagelist_reserve, 0xefce3c3b, "");
SYMBOL_CRC(ceph_pagelist_free_reserve, 0x165b1948, "");
SYMBOL_CRC(ceph_pagelist_set_cursor, 0xf03fe862, "");
SYMBOL_CRC(ceph_pagelist_truncate, 0xc366bfa1, "");
SYMBOL_CRC(ceph_monc_want_map, 0xa62c07dd, "");
SYMBOL_CRC(ceph_monc_got_map, 0x513d2377, "");
SYMBOL_CRC(ceph_monc_renew_subs, 0x543a3825, "");
SYMBOL_CRC(ceph_monc_wait_osdmap, 0x5db92c4d, "");
SYMBOL_CRC(ceph_monc_open_session, 0xd111d1a9, "");
SYMBOL_CRC(ceph_monc_do_statfs, 0x913923c5, "");
SYMBOL_CRC(ceph_monc_get_version, 0xa0b8731b, "");
SYMBOL_CRC(ceph_monc_get_version_async, 0x53d7e362, "");
SYMBOL_CRC(ceph_monc_blocklist_add, 0x18ec0dc6, "");
SYMBOL_CRC(ceph_monc_init, 0x7d089840, "");
SYMBOL_CRC(ceph_monc_stop, 0xd0a12de8, "");
SYMBOL_CRC(ceph_monc_validate_auth, 0x28ab77e8, "");
SYMBOL_CRC(ceph_decode_entity_addr, 0xd4eb7735, "");
SYMBOL_CRC(ceph_decode_entity_addrvec, 0x50603ce3, "");
SYMBOL_CRC(ceph_cls_lock, 0xad15a083, "");
SYMBOL_CRC(ceph_cls_unlock, 0x218f02f4, "");
SYMBOL_CRC(ceph_cls_break_lock, 0x12382558, "");
SYMBOL_CRC(ceph_cls_set_cookie, 0x2c51dee8, "");
SYMBOL_CRC(ceph_free_lockers, 0xa698f998, "");
SYMBOL_CRC(ceph_cls_lock_info, 0xb3e799be, "");
SYMBOL_CRC(ceph_cls_assert_locked, 0x42ea2bb7, "");
SYMBOL_CRC(osd_req_op_extent_osd_data, 0x58c306db, "");
SYMBOL_CRC(osd_req_op_raw_data_in_pages, 0x676d070e, "");
SYMBOL_CRC(osd_req_op_extent_osd_data_pages, 0x2814cab2, "");
SYMBOL_CRC(osd_req_op_extent_osd_data_pagelist, 0x6e8226ce, "");
SYMBOL_CRC(osd_req_op_extent_osd_data_bio, 0x97cb2a13, "");
SYMBOL_CRC(osd_req_op_extent_osd_data_bvecs, 0x4bff8ac4, "");
SYMBOL_CRC(osd_req_op_extent_osd_data_bvec_pos, 0x529b2b96, "");
SYMBOL_CRC(osd_req_op_cls_request_data_pagelist, 0x0508e243, "");
SYMBOL_CRC(osd_req_op_cls_request_data_pages, 0xcbdddb3e, "");
SYMBOL_CRC(osd_req_op_cls_request_data_bvecs, 0x00e97a08, "");
SYMBOL_CRC(osd_req_op_cls_response_data_pages, 0x60eb89b1, "");
SYMBOL_CRC(ceph_osdc_get_request, 0xdc225db9, "");
SYMBOL_CRC(ceph_osdc_put_request, 0x0069941c, "");
SYMBOL_CRC(ceph_osdc_alloc_request, 0xf94f81e8, "");
SYMBOL_CRC(ceph_osdc_alloc_messages, 0x0d7f5526, "");
SYMBOL_CRC(osd_req_op_init, 0x788bac9a, "");
SYMBOL_CRC(osd_req_op_extent_init, 0xbaae858d, "");
SYMBOL_CRC(osd_req_op_extent_update, 0x71b4666c, "");
SYMBOL_CRC(osd_req_op_extent_dup_last, 0xd3c4a2eb, "");
SYMBOL_CRC(osd_req_op_cls_init, 0xd8adc3e2, "");
SYMBOL_CRC(osd_req_op_xattr_init, 0x605b3a43, "");
SYMBOL_CRC(osd_req_op_alloc_hint_init, 0xb3dad954, "");
SYMBOL_CRC(ceph_osdc_new_request, 0xf659d165, "");
SYMBOL_CRC(ceph_osdc_abort_requests, 0xd3c9b30a, "");
SYMBOL_CRC(ceph_osdc_clear_abort_err, 0x9e2f1a18, "");
SYMBOL_CRC(ceph_osdc_update_epoch_barrier, 0x9bce97cb, "");
SYMBOL_CRC(ceph_osdc_start_request, 0xc764c839, "");
SYMBOL_CRC(ceph_osdc_cancel_request, 0x9ee39a15, "");
SYMBOL_CRC(ceph_osdc_wait_request, 0x32c1dca1, "");
SYMBOL_CRC(ceph_osdc_sync, 0x15c5aa59, "");
SYMBOL_CRC(ceph_osdc_watch, 0x3761553c, "");
SYMBOL_CRC(ceph_osdc_unwatch, 0x84183c3f, "");
SYMBOL_CRC(ceph_osdc_notify_ack, 0x9ec88d3b, "");
SYMBOL_CRC(ceph_osdc_notify, 0x42aa6f20, "");
SYMBOL_CRC(ceph_osdc_list_watchers, 0x1363a75c, "");
SYMBOL_CRC(ceph_osdc_flush_notifies, 0x9db32104, "");
SYMBOL_CRC(ceph_osdc_maybe_request_map, 0x10d9ddc6, "");
SYMBOL_CRC(ceph_osdc_call, 0x1e21f6a8, "");
SYMBOL_CRC(osd_req_op_copy_from_init, 0xd7259323, "");
SYMBOL_CRC(ceph_pg_pool_name_by_id, 0x1378aba3, "");
SYMBOL_CRC(ceph_pg_poolid_by_name, 0x04cad6f0, "");
SYMBOL_CRC(ceph_pg_pool_flags, 0x92b7b4ce, "");
SYMBOL_CRC(ceph_oloc_copy, 0xbd2f79ae, "");
SYMBOL_CRC(ceph_oloc_destroy, 0x417a9131, "");
SYMBOL_CRC(ceph_oid_copy, 0x2087719e, "");
SYMBOL_CRC(ceph_oid_printf, 0xdf6ef4a1, "");
SYMBOL_CRC(ceph_oid_aprintf, 0x5aeeee62, "");
SYMBOL_CRC(ceph_oid_destroy, 0x2101cbc9, "");
SYMBOL_CRC(ceph_object_locator_to_pg, 0xe34a59f2, "");
SYMBOL_CRC(ceph_pg_to_acting_primary, 0x17c17611, "");
SYMBOL_CRC(ceph_calc_file_object_mapping, 0x9fefa3cb, "");
SYMBOL_CRC(ceph_file_to_extents, 0x38f2d94e, "");
SYMBOL_CRC(ceph_iterate_extents, 0xeef6cfa3, "");
SYMBOL_CRC(ceph_extent_to_file, 0xca80437b, "");
SYMBOL_CRC(ceph_get_num_objects, 0x3c8d7111, "");
SYMBOL_CRC(ceph_auth_is_authenticated, 0xbbadaced, "");
SYMBOL_CRC(__ceph_auth_get_authorizer, 0xdb990b4a, "");
SYMBOL_CRC(ceph_auth_destroy_authorizer, 0xad703657, "");
SYMBOL_CRC(ceph_auth_add_authorizer_challenge, 0x37ba5512, "");
SYMBOL_CRC(ceph_auth_verify_authorizer_reply, 0x8d647c48, "");
SYMBOL_CRC(ceph_auth_invalidate_authorizer, 0xe1d6c257, "");
SYMBOL_CRC(ceph_auth_get_authorizer, 0xb3d20cab, "");
SYMBOL_CRC(ceph_auth_handle_svc_reply_more, 0x9dc17ece, "");
SYMBOL_CRC(ceph_auth_handle_svc_reply_done, 0xf62802a5, "");
SYMBOL_CRC(ceph_auth_handle_bad_authorizer, 0x59aeaaf8, "");
SYMBOL_CRC(ceph_entity_type_name, 0xdfc091f9, "");
SYMBOL_CRC(ceph_str_hash, 0x57baf885, "");
SYMBOL_CRC(ceph_str_hash_name, 0x63758856, "");
SYMBOL_CRC(ceph_put_page_vector, 0xbcdf72e3, "");
SYMBOL_CRC(ceph_release_page_vector, 0x460acb9b, "");
SYMBOL_CRC(ceph_alloc_page_vector, 0xe432b7c9, "");
SYMBOL_CRC(ceph_copy_user_to_page_vector, 0x320e6000, "");
SYMBOL_CRC(ceph_copy_to_page_vector, 0x184c4c48, "");
SYMBOL_CRC(ceph_copy_from_page_vector, 0x45b31a08, "");
SYMBOL_CRC(ceph_zero_page_vector_range, 0xf9e5cf0b, "");
SYMBOL_CRC(ceph_create_snap_context, 0x9ca95932, "");
SYMBOL_CRC(ceph_get_snap_context, 0xbe3879aa, "");
SYMBOL_CRC(ceph_put_snap_context, 0x86fca7e4, "");
SYMBOL_CRC(ceph_find_or_create_string, 0x9bc6b539, "");
SYMBOL_CRC(ceph_release_string, 0xee120c03, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x626d5117, "crypto_skcipher_encrypt" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0x691ec44b, "flush_dcache_page" },
	{ 0xb11809f1, "tcp_sock_set_cork" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x78b887ed, "vsprintf" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9f93ef75, "fs_param_is_string" },
	{ 0x76f0cd8e, "vmalloc_to_page" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xca9360b5, "rb_next" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1ca380be, "iov_iter_advance" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x38ac36ab, "unregister_key_type" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x655cade0, "seq_lseek" },
	{ 0x97eee579, "fs_param_is_enum" },
	{ 0x1d79c8e1, "logfc" },
	{ 0x4355f56e, "crypto_alloc_aead" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x939a3f13, "crypto_aead_setauthsize" },
	{ 0x9b2d5125, "crypto_aead_decrypt" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8fd417e6, "crypto_skcipher_setkey" },
	{ 0x148653, "vsnprintf" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xc6c6214d, "register_key_type" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0xb07e8f9e, "fs_param_is_u32" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x92997ed8, "_printk" },
	{ 0x1953c958, "mempool_create" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd57ede5a, "crypto_skcipher_decrypt" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x480f65b, "seq_escape_mem" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xde31500c, "key_put" },
	{ 0x65bea063, "crypto_aead_setkey" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x57bc19d2, "down_write" },
	{ 0x967d2f77, "crypto_req_done" },
	{ 0xce807a25, "up_write" },
	{ 0xba35e0b9, "crypto_shash_setkey" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc7a06f42, "crypto_aead_encrypt" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0xab93c2ef, "seq_putc" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x9055cb3a, "iov_iter_kvec" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xb133358e, "sock_sendmsg" },
	{ 0xd64c80c0, "crypto_shash_update" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x20463df4, "wait_for_completion_killable" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd2ba40a8, "sg_alloc_table_from_pages_segment" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x265aa3d5, "kernel_connect" },
	{ 0xdcb764ad, "memset" },
	{ 0x14748c79, "iov_iter_bvec" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0xece784c2, "rb_first" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xc822898e, "crypto_alloc_sync_skcipher" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x5285ddb1, "__put_net" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfe4313f1, "__folio_alloc" },
	{ 0xb15b4109, "crc32c" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x71981f9a, "crypto_shash_final" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdd65439c, "sock_create_kern" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x726bc3c7, "wait_for_completion_killable_timeout" },
	{ 0x13ba2b19, "request_key_tag" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc6cde844, "generic_key_instantiate" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x281fa3b3, "sock_recvmsg" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x437ea39d, "set_page_dirty_lock" },
	{ 0xacaa2c9e, "sock_release" },
	{ 0x7588c8d8, "iov_iter_discard" },
	{ 0x18888d00, "downgrade_write" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xbfc9d9db, "tcp_sock_set_nodelay" },
	{ 0x49a2986d, "__fs_parse" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0x742578a5, "wait_for_random_bytes" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb3c6f341, "single_open" },
	{ 0x349cba85, "strchr" },
	{ 0x8d760147, "crypto_alloc_shash" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1e0a2844, "kernel_sendmsg" },
	{ 0x53b954a2, "up_read" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x188ea314, "jiffies_to_timespec64" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B678A02494076C844086877");
