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

SYMBOL_CRC(l2tp_ioctl, 0xb82fe3e2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xee12e59a, "proto_register" },
	{ 0x826bf818, "inet_add_protocol" },
	{ 0x150b5953, "proto_unregister" },
	{ 0xfd332b29, "inet_register_protosw" },
	{ 0x381814a9, "l2tp_sk_to_tunnel" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x973be991, "l2tp_tunnel_delete" },
	{ 0x6481d46c, "inet_unregister_protosw" },
	{ 0x2934042d, "inet_del_protocol" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc5c94160, "sk_common_release" },
	{ 0xa96feeb, "__udp_disconnect" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x6f7d5772, "__ip4_datagram_connect" },
	{ 0x47061780, "inet_addr_type" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x9217a159, "sock_wmalloc" },
	{ 0x48471741, "skb_put" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0x27b2aa88, "__sk_dst_check" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x494a1047, "ip_queue_xmit" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4c83cd6a, "security_sk_classify_flow" },
	{ 0x50f1d92d, "ip_route_output_flow" },
	{ 0xf47db2c0, "sk_setup_caps" },
	{ 0x893abd4a, "make_kuid" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x81f5c312, "skb_recv_datagram" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0x375707a8, "skb_free_datagram" },
	{ 0x41793b9e, "__sock_recv_timestamp" },
	{ 0x2a960aa0, "ip_cmsg_recv_offset" },
	{ 0x61f03135, "__sock_recv_wifi_status" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x708d58eb, "sock_queue_rcv_skb_reason" },
	{ 0xfa01539d, "l2tp_session_get" },
	{ 0x1e0719d1, "l2tp_recv_common" },
	{ 0xd53ffcf, "l2tp_session_dec_refcount" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x71961d3a, "__sk_receive_skb" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xe26c434f, "__xfrm_policy_check" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x3cb9f1b7, "inet_release" },
	{ 0xf10d95e, "inet_bind" },
	{ 0xba5b3eae, "inet_dgram_connect" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0xc5a4afc, "datagram_poll" },
	{ 0x285556a5, "inet_ioctl" },
	{ 0x15b1bafa, "sock_gettstamp" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0xa6923d8, "inet_shutdown" },
	{ 0x28d88bcc, "sock_common_setsockopt" },
	{ 0xf92ec2f7, "sock_common_getsockopt" },
	{ 0x36f11b04, "inet_sendmsg" },
	{ 0xcaa0e50d, "sock_common_recvmsg" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0x9b8a7ab7, "ip_setsockopt" },
	{ 0xa7cffea6, "ip_getsockopt" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "3FC4785B5A21023E2F50FE9");
