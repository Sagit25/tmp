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
	{ 0x375707a8, "skb_free_datagram" },
	{ 0x708d58eb, "sock_queue_rcv_skb_reason" },
	{ 0xbcacd7f6, "_copy_to_iter" },
	{ 0x48471741, "skb_put" },
	{ 0x972a3723, "consume_skb" },
	{ 0xd3466231, "can_rx_unregister" },
	{ 0xe1194d5, "hrtimer_try_to_cancel" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x54bcf70e, "can_sock_destruct" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x85a552e, "netdev_err" },
	{ 0xf09dc05b, "sk_error_report" },
	{ 0xa13f5774, "put_cmsg" },
	{ 0x6a005439, "can_proto_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xc5a4afc, "datagram_poll" },
	{ 0x65cd2519, "__sock_recv_cmsgs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x39aab161, "can_send" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0x4e547048, "__kmalloc_node_track_caller" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0x41f9298d, "dev_get_by_index" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x71322468, "netdev_printk" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0xb310efd8, "nla_put" },
	{ 0x22a09382, "sock_recv_errqueue" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x44289bce, "sock_efree" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x8a42a007, "sock_queue_err_skb" },
	{ 0xcfa6b507, "netdev_alert" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x81f5c312, "skb_recv_datagram" },
	{ 0x2672b6e9, "sock_alloc_send_pskb" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0x75bc21ab, "can_proto_unregister" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x7689a217, "netdev_notice" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0xf979b3c3, "can_rx_register" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x9858f364, "get_random_u8" },
	{ 0x6b2baf52, "release_sock" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "836676BC7333F92F395B72E");
