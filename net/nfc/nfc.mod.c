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

SYMBOL_CRC(nfc_fw_download_done, 0x9e008c86, "");
SYMBOL_CRC(nfc_dep_link_is_up, 0xe907edcf, "");
SYMBOL_CRC(nfc_find_se, 0x06bb0b18, "");
SYMBOL_CRC(nfc_set_remote_general_bytes, 0x365f033a, "");
SYMBOL_CRC(nfc_get_local_general_bytes, 0xfb88a1f1, "");
SYMBOL_CRC(nfc_tm_data_received, 0x554b4104, "");
SYMBOL_CRC(nfc_tm_activated, 0x5d3acc87, "");
SYMBOL_CRC(nfc_tm_deactivated, 0x3adbd221, "");
SYMBOL_CRC(nfc_alloc_recv_skb, 0x9d19bbb5, "");
SYMBOL_CRC(nfc_targets_found, 0x247edabd, "");
SYMBOL_CRC(nfc_target_lost, 0xf7d6b8f3, "");
SYMBOL_CRC(nfc_driver_failure, 0x37accc92, "");
SYMBOL_CRC(nfc_add_se, 0x37991e35, "");
SYMBOL_CRC(nfc_remove_se, 0xd34b7bff, "");
SYMBOL_CRC(nfc_se_transaction, 0x08db8686, "");
SYMBOL_CRC(nfc_se_connectivity, 0x70e3a66f, "");
SYMBOL_CRC(nfc_class, 0xe04fe1d4, "");
SYMBOL_CRC(nfc_allocate_device, 0x04ddff67, "");
SYMBOL_CRC(nfc_register_device, 0x6fe40abd, "");
SYMBOL_CRC(nfc_unregister_device, 0xf802ea4b, "");
SYMBOL_CRC(__nfc_alloc_vendor_cmd_reply_skb, 0x2d7852da, "");
SYMBOL_CRC(nfc_vendor_cmd_reply, 0xce4b4165, "");
SYMBOL_CRC(nfc_proto_register, 0x7eef5e16, "");
SYMBOL_CRC(nfc_proto_unregister, 0x12af22fc, "");
SYMBOL_CRC(nfc_send_to_raw_sock, 0x78d136b4, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xda10ec3, "security_sock_graft" },
	{ 0x375707a8, "skb_free_datagram" },
	{ 0x708d58eb, "sock_queue_rcv_skb_reason" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x90b0c77d, "class_dev_iter_next" },
	{ 0x1425e33, "try_module_get" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x48471741, "skb_put" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x6eb983df, "device_initialize" },
	{ 0xf0886af7, "sock_no_sendmsg" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x942352e7, "genlmsg_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x27af3415, "sock_no_connect" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc84f456a, "__pskb_copy_fclone" },
	{ 0xf09dc05b, "sk_error_report" },
	{ 0xf3718e5a, "class_dev_iter_exit" },
	{ 0x92997ed8, "_printk" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6a5932c1, "sock_register" },
	{ 0xc5a4afc, "datagram_poll" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x606b7e51, "put_device" },
	{ 0xe739bb49, "netlink_broadcast" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xee12e59a, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xcc793c4a, "module_put" },
	{ 0x41793b9e, "__sock_recv_timestamp" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0xdcced5f2, "__class_register" },
	{ 0x459e03b6, "init_net" },
	{ 0x121445a5, "skb_pull" },
	{ 0x7bbe500c, "device_add" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0x5a921311, "strncmp" },
	{ 0xb310efd8, "nla_put" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0xa9a8aca9, "sock_no_bind" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0xc4435de7, "rfkill_alloc" },
	{ 0x1f1c0b19, "class_dev_iter_init" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0x402beac3, "device_del" },
	{ 0x61f03135, "__sock_recv_wifi_status" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xdb73a05c, "skb_unlink" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xff282521, "rfkill_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x81f5c312, "skb_recv_datagram" },
	{ 0x2672b6e9, "sock_alloc_send_pskb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd464dd01, "sock_no_getname" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x1f1bbd31, "skb_copy" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xae9e1c26, "sock_no_ioctl" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xfc2bbbe6, "genl_unregister_family" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0xa67cd91b, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7d26ecfe, "class_find_device" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "rfkill");


MODULE_INFO(srcversion, "4DA502CC9D27FFBB0C5258E");
