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

SYMBOL_CRC(ax25_bcast, 0xac93ae05, "_gpl");
SYMBOL_CRC(ax25_defaddr, 0xaeb7451e, "_gpl");
SYMBOL_CRC(null_ax25_address, 0xd43ecbf1, "");
SYMBOL_CRC(ax2asc, 0x53dea1ff, "");
SYMBOL_CRC(asc2ax, 0x4502c65a, "");
SYMBOL_CRC(ax25cmp, 0xc1444946, "");
SYMBOL_CRC(ax25_register_pid, 0x7ff715f3, "_gpl");
SYMBOL_CRC(ax25_protocol_release, 0x8ede9e26, "");
SYMBOL_CRC(ax25_linkfail_register, 0xc68217bf, "");
SYMBOL_CRC(ax25_linkfail_release, 0x9da707e5, "");
SYMBOL_CRC(ax25_listen_register, 0xaab3e089, "");
SYMBOL_CRC(ax25_listen_release, 0x61370ac2, "");
SYMBOL_CRC(ax25_header_ops, 0xcd02e645, "");
SYMBOL_CRC(ax25_ip_xmit, 0x43e492e8, "");
SYMBOL_CRC(ax25_send_frame, 0x04b3a8ff, "");
SYMBOL_CRC(ax25_display_timer, 0x14cecd59, "");
SYMBOL_CRC(ax25_uid_policy, 0x242852b9, "");
SYMBOL_CRC(ax25_findbyuid, 0xee02e420, "");
SYMBOL_CRC(ax25_find_cb, 0x19ca07a0, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xda10ec3, "security_sock_graft" },
	{ 0x375707a8, "skb_free_datagram" },
	{ 0x708d58eb, "sock_queue_rcv_skb_reason" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x48471741, "skb_put" },
	{ 0x1eb18df7, "skb_expand_head" },
	{ 0x7c85e954, "register_net_sysctl" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc0bec8ef, "dev_add_pack" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xa564ce37, "__skb_try_recv_datagram" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa262bd0c, "__dev_get_by_name" },
	{ 0x92997ed8, "_printk" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x1000e51, "schedule" },
	{ 0x6a5932c1, "sock_register" },
	{ 0xc5a4afc, "datagram_poll" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x893abd4a, "make_kuid" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xee12e59a, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x459e03b6, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa07afb40, "dev_remove_pack" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x543ef284, "seq_hlist_start" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0xf9090a54, "__skb_wait_for_more_packets" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe7a4d6f2, "skb_dequeue_tail" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb3aafb4, "sock_rfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe8437c97, "sock_i_ino" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0x26584b42, "skb_set_owner_w" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0x2672b6e9, "sock_alloc_send_pskb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x1f1bbd31, "skb_copy" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x15b1bafa, "sock_gettstamp" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xebe193a7, "send_sig" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x4afd9810, "from_kuid_munged" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0x442817f, "proc_create_seq_private" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A658CCEA4E33D4B1D7723B5");
