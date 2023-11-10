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
	{ 0x92997ed8, "_printk" },
	{ 0xee12e59a, "proto_register" },
	{ 0x999d9165, "inet6_add_protocol" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x29772eee, "inet6_register_protosw" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x381814a9, "l2tp_sk_to_tunnel" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x3713aac1, "ip6_flush_pending_frames" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x973be991, "l2tp_tunnel_delete" },
	{ 0x76993112, "inet6_unregister_protosw" },
	{ 0xb1489500, "inet6_del_protocol" },
	{ 0x708d58eb, "sock_queue_rcv_skb_reason" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xa96feeb, "__udp_disconnect" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc5c94160, "sk_common_release" },
	{ 0xbbfb346a, "__ip6_datagram_connect" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb25dc613, "dev_get_by_index_rcu" },
	{ 0xae52f1fe, "ipv6_chk_addr" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x81f5c312, "skb_recv_datagram" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0x375707a8, "skb_free_datagram" },
	{ 0x218ba4a2, "ipv6_recv_error" },
	{ 0x41793b9e, "__sock_recv_timestamp" },
	{ 0x49ff3394, "ip6_datagram_recv_ctl" },
	{ 0x61f03135, "__sock_recv_wifi_status" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xb15ecc98, "ip6_datagram_send_ctl" },
	{ 0x132f2bfd, "fl6_merge_options" },
	{ 0x6f6b52e9, "__ipv6_fixup_options" },
	{ 0x4904c8a9, "fl6_update_dst" },
	{ 0x4c83cd6a, "security_sk_classify_flow" },
	{ 0xc07bc866, "ip6_dst_lookup_flow" },
	{ 0x3dc7f016, "ip_generic_getfrag" },
	{ 0x6d5ba575, "ip6_append_data" },
	{ 0x6a29aec0, "dst_release" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0xf64a9c1f, "__fl6_sock_lookup" },
	{ 0x541fa5f9, "ip6_dst_hoplimit" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xcf29e120, "ip6_push_pending_frames" },
	{ 0xfa01539d, "l2tp_session_get" },
	{ 0x1e0719d1, "l2tp_recv_common" },
	{ 0xd53ffcf, "l2tp_session_dec_refcount" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xe26c434f, "__xfrm_policy_check" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x71961d3a, "__sk_receive_skb" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xad5adfa1, "inet6_release" },
	{ 0x4e6b4c2f, "inet6_bind" },
	{ 0xba5b3eae, "inet_dgram_connect" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0xc5a4afc, "datagram_poll" },
	{ 0xf3d7021b, "inet6_ioctl" },
	{ 0x1fd2c405, "inet6_compat_ioctl" },
	{ 0x15b1bafa, "sock_gettstamp" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0xa6923d8, "inet_shutdown" },
	{ 0x28d88bcc, "sock_common_setsockopt" },
	{ 0xf92ec2f7, "sock_common_getsockopt" },
	{ 0x36f11b04, "inet_sendmsg" },
	{ 0xcaa0e50d, "sock_common_recvmsg" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0xb82fe3e2, "l2tp_ioctl" },
	{ 0x90808c01, "ipv6_setsockopt" },
	{ 0x505e5e57, "ipv6_getsockopt" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ipv6,l2tp_core,l2tp_ip");


MODULE_INFO(srcversion, "A936C6ED94F3E481F3EF574");
