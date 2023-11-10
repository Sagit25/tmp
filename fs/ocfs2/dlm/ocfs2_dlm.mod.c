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

SYMBOL_CRC(dlm_unregister_domain, 0x3b3c8571, "_gpl");
SYMBOL_CRC(dlm_register_domain, 0x32e25944, "_gpl");
SYMBOL_CRC(dlm_setup_eviction_cb, 0x7a1211f8, "_gpl");
SYMBOL_CRC(dlm_register_eviction_cb, 0x461ede78, "_gpl");
SYMBOL_CRC(dlm_unregister_eviction_cb, 0xd8fa57a6, "_gpl");
SYMBOL_CRC(dlm_print_one_lock, 0x5261ca7a, "_gpl");
SYMBOL_CRC(dlm_errmsg, 0xd7ba575e, "_gpl");
SYMBOL_CRC(dlm_errname, 0xfb86b96f, "_gpl");
SYMBOL_CRC(dlmlock, 0x39b699d5, "_gpl");
SYMBOL_CRC(dlmunlock, 0x4110588b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0xb6ebf62a, "o2nm_this_node" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xbd13ee5d, "o2hb_check_node_heartbeating_no_sem" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x92997ed8, "_printk" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x486fba43, "o2nm_get_node_by_num" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0xa02aa74a, "__cond_resched_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xea102c33, "o2hb_setup_callback" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0xbfd7d7a2, "o2hb_global_heartbeat_active" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0x6726af2d, "__seq_open_private" },
	{ 0xdcb764ad, "memset" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x5e95a4b2, "o2net_send_message_vec" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x1b89c6ee, "o2hb_fill_node_map" },
	{ 0xf1a5611d, "o2net_unregister_handler_list" },
	{ 0xf982e6db, "o2net_send_message" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xfe1298f3, "o2net_register_handler" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x57bdb657, "seq_release_private" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb1249153, "o2hb_register_callback" },
	{ 0x58c88ff2, "o2hb_get_all_regions" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x53b954a2, "up_read" },
	{ 0xeb82a0f1, "o2hb_unregister_callback" },
	{ 0xb5fba071, "o2nm_node_put" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ocfs2_nodemanager");


MODULE_INFO(srcversion, "4AE8E9BB235CBCFFA8D3A80");
