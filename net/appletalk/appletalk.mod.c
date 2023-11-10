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

SYMBOL_CRC(aarp_send_ddp, 0xe1d3087a, "");
SYMBOL_CRC(atrtr_get_dev, 0x783fc2b6, "");
SYMBOL_CRC(atalk_find_dev_addr, 0xda38c983, "");
SYMBOL_CRC(alloc_ltalkdev, 0xc9227387, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x375707a8, "skb_free_datagram" },
	{ 0x7492671d, "dev_mc_add_global" },
	{ 0x708d58eb, "sock_queue_rcv_skb_reason" },
	{ 0x2a0b9e30, "sock_i_uid" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x48471741, "skb_put" },
	{ 0x7c85e954, "register_net_sysctl" },
	{ 0x972a3723, "consume_skb" },
	{ 0xc0bec8ef, "dev_add_pack" },
	{ 0x33fc2a31, "get_user_ifreq" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x4934c55e, "unregister_snap_client" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x7cc22516, "remove_proc_subtree" },
	{ 0xa262bd0c, "__dev_get_by_name" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x92997ed8, "_printk" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x6a5932c1, "sock_register" },
	{ 0xc5a4afc, "datagram_poll" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xee12e59a, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0x6ac6a133, "register_snap_client" },
	{ 0x459e03b6, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa07afb40, "dev_remove_pack" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0xa48f9eb7, "proc_mkdir" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x260f4559, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0x81f5c312, "skb_recv_datagram" },
	{ 0x2672b6e9, "sock_alloc_send_pskb" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x1f1bbd31, "skb_copy" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x15b1bafa, "sock_gettstamp" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x4afd9810, "from_kuid_munged" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0x442817f, "proc_create_seq_private" },
	{ 0xf9a482f9, "msleep" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0x38f48af7, "put_user_ifreq" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x6b2baf52, "release_sock" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "psnap");


MODULE_INFO(srcversion, "76532B04AC67FF936704950");
