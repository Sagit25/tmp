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

SYMBOL_CRC(hidp_hid_driver, 0x3aa8719e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefabe1da, "input_allocate_device" },
	{ 0x983a879c, "l2cap_unregister_user" },
	{ 0xf812cff6, "memscan" },
	{ 0x14cb6f18, "bt_procfs_cleanup" },
	{ 0x48471741, "skb_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0xcecd415d, "bt_procfs_init" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x6a0f82b4, "set_user_nice" },
	{ 0xf0886af7, "sock_no_sendmsg" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x27af3415, "sock_no_connect" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9303f7be, "__module_get" },
	{ 0xf7dca34a, "get_device" },
	{ 0x6cdf0a3d, "l2cap_conn_get" },
	{ 0xd96a3ad0, "hid_allocate_device" },
	{ 0x78b34fa8, "hid_destroy_device" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x487455ec, "l2cap_register_user" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xee12e59a, "proto_register" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xdb696fa4, "bt_sock_link" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2bce892, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0x459e03b6, "init_net" },
	{ 0xce807a25, "up_write" },
	{ 0x121445a5, "skb_pull" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x7794c8c0, "__module_put_and_kthread_exit" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xa9a8aca9, "sock_no_bind" },
	{ 0x6a1409fe, "l2cap_is_socket" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0xfe2cfbdf, "l2cap_conn_put" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb5352b7e, "bt_sock_unlink" },
	{ 0x14766d50, "sock_no_recvmsg" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x441916ec, "input_event" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x718b8b7, "bt_info" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x668b19a1, "down_read" },
	{ 0xc8c45145, "hid_input_report" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb3283626, "bt_sock_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd464dd01, "sock_no_getname" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x99ab0cdc, "hid_parse_report" },
	{ 0xc74ae316, "sockfd_lookup" },
	{ 0x1e0a2844, "kernel_sendmsg" },
	{ 0x53b954a2, "up_read" },
	{ 0xb928fd76, "hid_ignore" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0x1a9f20b5, "hid_add_device" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "CC40CD58081A3CE86C5FE47");
