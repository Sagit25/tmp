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
	{ 0xda10ec3, "security_sock_graft" },
	{ 0x375707a8, "skb_free_datagram" },
	{ 0xe914e41e, "strcpy" },
	{ 0x708d58eb, "sock_queue_rcv_skb_reason" },
	{ 0x53dea1ff, "ax2asc" },
	{ 0xc68217bf, "ax25_linkfail_register" },
	{ 0xee02e420, "ax25_findbyuid" },
	{ 0x48471741, "skb_put" },
	{ 0x7c85e954, "register_net_sysctl" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc1444946, "ax25cmp" },
	{ 0x14cecd59, "ax25_display_timer" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xaab3e089, "ax25_listen_register" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8ede9e26, "ax25_protocol_release" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x92997ed8, "_printk" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x1000e51, "schedule" },
	{ 0x6a5932c1, "sock_register" },
	{ 0xc5a4afc, "datagram_poll" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xa916b694, "strnlen" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x247ddfdd, "sk_reset_timer" },
	{ 0xee12e59a, "proto_register" },
	{ 0x4b3a8ff, "ax25_send_frame" },
	{ 0xa91d6818, "skb_copy_expand" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0x459e03b6, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x242852b9, "ax25_uid_policy" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x5a921311, "strncmp" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x61370ac2, "ax25_listen_release" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x44289bce, "sock_efree" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7ff715f3, "ax25_register_pid" },
	{ 0x26584b42, "skb_set_owner_w" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0x81f5c312, "skb_recv_datagram" },
	{ 0x9da707e5, "ax25_linkfail_release" },
	{ 0x2672b6e9, "sock_alloc_send_pskb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xa8862a9e, "dev_get_by_name" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x15b1bafa, "sock_gettstamp" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x19fc10e0, "sk_stop_timer" },
	{ 0xebe193a7, "send_sig" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0x1455b624, "skb_append" },
	{ 0x442817f, "proc_create_seq_private" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "E94ACB1C70DD27A65190BAE");
