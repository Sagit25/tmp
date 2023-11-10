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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xbcacd7f6, "_copy_to_iter" },
	{ 0x48471741, "skb_put" },
	{ 0xd3466231, "can_rx_unregister" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x27af3415, "sock_no_connect" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf09dc05b, "sk_error_report" },
	{ 0x6a005439, "can_proto_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5a4afc, "datagram_poll" },
	{ 0x65cd2519, "__sock_recv_cmsgs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x39aab161, "can_send" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0x4e547048, "__kmalloc_node_track_caller" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x41f9298d, "dev_get_by_index" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0x22a09382, "sock_recv_errqueue" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0x90be4140, "sock_cmsg_send" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x81f5c312, "skb_recv_datagram" },
	{ 0x2672b6e9, "sock_alloc_send_pskb" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0x75bc21ab, "can_proto_unregister" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x15b1bafa, "sock_gettstamp" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0xf979b3c3, "can_rx_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x6b2baf52, "release_sock" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "9B3BA8DA7E515F5287B82EE");
