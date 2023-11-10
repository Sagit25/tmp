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

SYMBOL_CRC(bt_sock_reclassify_lock, 0xa738fcbd, "");
SYMBOL_CRC(bt_sock_register, 0xb3283626, "");
SYMBOL_CRC(bt_sock_unregister, 0x8fea24bd, "");
SYMBOL_CRC(bt_sock_link, 0xdb696fa4, "");
SYMBOL_CRC(bt_sock_unlink, 0xb5352b7e, "");
SYMBOL_CRC(bt_accept_enqueue, 0xcbe10261, "");
SYMBOL_CRC(bt_accept_unlink, 0xc2d25825, "");
SYMBOL_CRC(bt_accept_dequeue, 0x45961328, "");
SYMBOL_CRC(bt_sock_recvmsg, 0x32234027, "");
SYMBOL_CRC(bt_sock_stream_recvmsg, 0x3c8199d2, "");
SYMBOL_CRC(bt_sock_poll, 0x1f4e585c, "");
SYMBOL_CRC(bt_sock_ioctl, 0x88a0fd0c, "");
SYMBOL_CRC(bt_sock_wait_state, 0x1f8059e0, "");
SYMBOL_CRC(bt_sock_wait_ready, 0xd629a20b, "");
SYMBOL_CRC(bt_procfs_init, 0xcecd415d, "");
SYMBOL_CRC(bt_procfs_cleanup, 0x14cb6f18, "");
SYMBOL_CRC(bt_debugfs, 0x8babef38, "_gpl");
SYMBOL_CRC(hci_alloc_dev_priv, 0x336b6aaa, "");
SYMBOL_CRC(hci_free_dev, 0xfc1279d3, "");
SYMBOL_CRC(hci_register_dev, 0x06c90c0b, "");
SYMBOL_CRC(hci_unregister_dev, 0xf5de3713, "");
SYMBOL_CRC(hci_release_dev, 0x38f5d383, "");
SYMBOL_CRC(hci_suspend_dev, 0xa46c724e, "");
SYMBOL_CRC(hci_resume_dev, 0x3f14a929, "");
SYMBOL_CRC(hci_reset_dev, 0x1ad93b01, "");
SYMBOL_CRC(hci_recv_frame, 0xbec65b85, "");
SYMBOL_CRC(hci_recv_diag, 0x789c9ca3, "");
SYMBOL_CRC(hci_set_hw_info, 0x0cf9a21e, "");
SYMBOL_CRC(hci_set_fw_info, 0x61feea9a, "");
SYMBOL_CRC(hci_register_cb, 0x1334159e, "");
SYMBOL_CRC(hci_unregister_cb, 0xc94c9bb6, "");
SYMBOL_CRC(__hci_cmd_send, 0x4cdbed63, "");
SYMBOL_CRC(hci_get_route, 0xc0fe9e38, "");
SYMBOL_CRC(hci_conn_security, 0x63b62b7b, "");
SYMBOL_CRC(hci_conn_check_secure, 0xfd09ebe9, "");
SYMBOL_CRC(hci_conn_switch_role, 0x1957b2e3, "");
SYMBOL_CRC(hci_mgmt_chan_register, 0xa759c118, "");
SYMBOL_CRC(hci_mgmt_chan_unregister, 0x32fd0bd1, "");
SYMBOL_CRC(l2cap_add_psm, 0xb46013d0, "_gpl");
SYMBOL_CRC(l2cap_chan_create, 0xaebc0fd6, "_gpl");
SYMBOL_CRC(l2cap_chan_put, 0x25613b6c, "_gpl");
SYMBOL_CRC(l2cap_chan_set_defaults, 0xb2f79241, "_gpl");
SYMBOL_CRC(l2cap_chan_del, 0x6d01c954, "_gpl");
SYMBOL_CRC(l2cap_chan_list, 0xf7e18dd2, "_gpl");
SYMBOL_CRC(l2cap_chan_close, 0x685a941f, "");
SYMBOL_CRC(l2cap_register_user, 0x487455ec, "");
SYMBOL_CRC(l2cap_unregister_user, 0x983a879c, "");
SYMBOL_CRC(l2cap_conn_get, 0x6cdf0a3d, "");
SYMBOL_CRC(l2cap_conn_put, 0xfe2cfbdf, "");
SYMBOL_CRC(l2cap_chan_send, 0x1baaf52f, "_gpl");
SYMBOL_CRC(l2cap_chan_connect, 0x60867a0d, "_gpl");
SYMBOL_CRC(l2cap_is_socket, 0x6a1409fe, "");
SYMBOL_CRC(baswap, 0x7b5ce5c3, "");
SYMBOL_CRC(bt_to_errno, 0x7aad008b, "");
SYMBOL_CRC(bt_status, 0x7bd9427a, "");
SYMBOL_CRC(bt_info, 0x0718b8b7, "");
SYMBOL_CRC(bt_warn, 0x214e4265, "");
SYMBOL_CRC(bt_err, 0x7b8c32f1, "");
SYMBOL_CRC(bt_warn_ratelimited, 0xddacccf6, "");
SYMBOL_CRC(bt_err_ratelimited, 0xd7613212, "");
SYMBOL_CRC(__hci_cmd_sync_sk, 0x9aca858e, "");
SYMBOL_CRC(__hci_cmd_sync, 0xd8141f65, "");
SYMBOL_CRC(hci_cmd_sync, 0xa840cae5, "");
SYMBOL_CRC(__hci_cmd_sync_ev, 0x538fb2e4, "");
SYMBOL_CRC(__hci_cmd_sync_status_sk, 0xa29000ed, "");
SYMBOL_CRC(__hci_cmd_sync_status, 0xc86e02d0, "");
SYMBOL_CRC(hci_cmd_sync_cancel, 0xdfc16901, "");
SYMBOL_CRC(hci_cmd_sync_queue, 0xa51965ed, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xda10ec3, "security_sock_graft" },
	{ 0x375707a8, "skb_free_datagram" },
	{ 0xe914e41e, "strcpy" },
	{ 0x708d58eb, "sock_queue_rcv_skb_reason" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x1425e33, "try_module_get" },
	{ 0x2a0b9e30, "sock_i_uid" },
	{ 0x275ae254, "simple_attr_open" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7475be8e, "crypto_ecdh_key_len" },
	{ 0x78b887ed, "vsprintf" },
	{ 0x853d16c8, "__class_create" },
	{ 0x20978fb9, "idr_find" },
	{ 0x8dad64f7, "debugfs_attr_write" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0xe95f5238, "crypto_shash_tfm_digest" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb67f3193, "debugfs_create_u16" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x3486581a, "class_destroy" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x655cade0, "seq_lseek" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x27af3415, "sock_no_connect" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x697ed5f0, "memcpy_and_pad" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9303f7be, "__module_get" },
	{ 0x148653, "vsnprintf" },
	{ 0xf7dca34a, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xc84f456a, "__pskb_copy_fclone" },
	{ 0xa13f5774, "put_cmsg" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0x92997ed8, "_printk" },
	{ 0x51af89bb, "crypto_alloc_kpp" },
	{ 0x6b853d06, "ns_to_kernel_old_timeval" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6a5932c1, "sock_register" },
	{ 0xc5a4afc, "datagram_poll" },
	{ 0x65cd2519, "__sock_recv_cmsgs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xee12e59a, "proto_register" },
	{ 0x16e297c3, "bit_wait" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xcc793c4a, "module_put" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x57827ec9, "debugfs_attr_read" },
	{ 0x41793b9e, "__sock_recv_timestamp" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0x7988a68e, "sk_filter_trim_cap" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x459e03b6, "init_net" },
	{ 0xba35e0b9, "crypto_shash_setkey" },
	{ 0x394f4efd, "simple_open" },
	{ 0x121445a5, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7bbe500c, "device_add" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xea15f280, "simple_attr_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9177debf, "init_uts_ns" },
	{ 0x96267f10, "__dev_kfree_skb_irq" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x78e55350, "device_move" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0xab93c2ef, "seq_putc" },
	{ 0xbd6841d4, "crc16" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x9055cb3a, "iov_iter_kvec" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x1daa4cb, "device_find_child" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0xc4435de7, "rfkill_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb230d2ec, "crypto_ecdh_encode_key" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0x402beac3, "device_del" },
	{ 0x118a661d, "__sock_queue_rcv_skb" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x683b9cce, "default_llseek" },
	{ 0x61f03135, "__sock_recv_wifi_status" },
	{ 0xca85377c, "from_kuid" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x55e6c216, "__get_task_comm" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0xdb73a05c, "skb_unlink" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xae7a9a01, "seq_read" },
	{ 0xe8437c97, "sock_i_ino" },
	{ 0x135ff00b, "fwnode_property_present" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xff282521, "rfkill_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc91d5c87, "sk_capable" },
	{ 0x1632bc21, "kvasprintf_const" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0x81f5c312, "skb_recv_datagram" },
	{ 0x2672b6e9, "sock_alloc_send_pskb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1f1bbd31, "skb_copy" },
	{ 0x461c9d06, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x2eef8b21, "skb_pull_data" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x15b1bafa, "sock_gettstamp" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x442817f, "proc_create_seq_private" },
	{ 0xb696a3e3, "debugfs_create_u8" },
	{ 0xb3c6f341, "single_open" },
	{ 0x8d760147, "crypto_alloc_shash" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x263ce5f, "fwnode_property_read_u8_array" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ecdh_generic,rfkill,libaes");


MODULE_INFO(srcversion, "3D154754B63BA119D86DD93");
