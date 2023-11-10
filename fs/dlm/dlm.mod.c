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

SYMBOL_CRC(dlm_new_lockspace, 0xcd224e1d, "_gpl");
SYMBOL_CRC(dlm_release_lockspace, 0xcf9f3328, "_gpl");
SYMBOL_CRC(dlm_lock, 0x8a6c5f1b, "_gpl");
SYMBOL_CRC(dlm_unlock, 0x4b62826c, "_gpl");
SYMBOL_CRC(dlm_posix_lock, 0xc43a3062, "_gpl");
SYMBOL_CRC(dlm_posix_unlock, 0x971d3862, "_gpl");
SYMBOL_CRC(dlm_posix_get, 0x46687873, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x1425e33, "try_module_get" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3f26f22e, "bpf_trace_run4" },
	{ 0x7b5547f0, "config_group_init" },
	{ 0x20978fb9, "idr_find" },
	{ 0x4c4a5bde, "config_group_find_item" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xddfecb9, "sock_set_mark" },
	{ 0xd45306e5, "bpf_trace_run6" },
	{ 0xca9360b5, "rb_next" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x3e078bd, "config_item_get" },
	{ 0xf347a9fb, "kernel_bind" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xb379664, "posix_lock_file" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x9674484b, "kset_unregister" },
	{ 0xbfd84f16, "kernel_kobj" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xbe3a357b, "call_srcu" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x919a6abb, "synchronize_srcu" },
	{ 0xe2a2230, "kernel_accept" },
	{ 0xfc93d201, "kernel_recvmsg" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x41810ca2, "bpf_trace_run8" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe02ba436, "trace_print_hex_seq" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x3be9c133, "configfs_unregister_subsystem" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0xe4939f87, "locks_lock_inode_wait" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b5c4f9f, "sock_set_sndtimeo" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb8e79a7b, "locks_init_lock" },
	{ 0x3d241832, "kernel_sendpage" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcc793c4a, "module_put" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x61651be, "strcat" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0x57bc19d2, "down_write" },
	{ 0x459e03b6, "init_net" },
	{ 0xce807a25, "up_write" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x7f776354, "configfs_register_subsystem" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xc5e724ff, "configfs_remove_default_groups" },
	{ 0xc9377098, "__srcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0xc5a81d59, "kernel_sock_shutdown" },
	{ 0x954f099c, "idr_preload" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5a921311, "strncmp" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xf1e046cc, "panic" },
	{ 0xe4aac435, "kobject_init_and_add" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc6bd01cf, "sock_set_rcvbuf" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xd257863c, "sock_set_reuseaddr" },
	{ 0xdcb764ad, "memset" },
	{ 0x96601bbe, "misc_register" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xece784c2, "rb_first" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x7de4bde7, "bpf_trace_run3" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcbad1871, "config_item_init_type_name" },
	{ 0xdd65439c, "sock_create_kern" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xf0b55e33, "config_item_put" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x58315632, "__srcu_read_unlock" },
	{ 0x52427fe4, "kobject_uevent" },
	{ 0xacaa2c9e, "sock_release" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xbfc9d9db, "tcp_sock_set_nodelay" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x53b954a2, "up_read" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x30fb6f46, "sock_bind_add" },
	{ 0xdd991861, "locks_copy_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x6b2baf52, "release_sock" },
	{ 0xa0a1468f, "kset_create_and_add" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xd39ca817, "kobject_put" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BF66EC3DFDBE51EB0C2EC31");
