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
	{ 0x73820201, "register_pernet_device" },
	{ 0xee12e59a, "proto_register" },
	{ 0xb2fb5ec7, "register_pppox_proto" },
	{ 0xe4702cce, "l2tp_nl_register_ops" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x92997ed8, "_printk" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0xd53ffcf, "l2tp_session_dec_refcount" },
	{ 0xead6529b, "l2tp_udp_encap_recv" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x81f5c312, "skb_recv_datagram" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0xc5b3969b, "proc_create_net_data" },
	{ 0x27cd43fe, "l2tp_tunnel_dec_refcount" },
	{ 0x7ce103bf, "l2tp_tunnel_get_nth" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xf67483c0, "l2tp_tunnel_get" },
	{ 0x772d0246, "l2tp_tunnel_create" },
	{ 0xc86edd0f, "l2tp_tunnel_inc_refcount" },
	{ 0x1ae9eab2, "l2tp_tunnel_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x257ccc06, "ppp_input" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x708d58eb, "sock_queue_rcv_skb_reason" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x121445a5, "skb_pull" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x34fda11c, "l2tp_session_get_nth" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x142e7e88, "l2tp_tunnel_get_session" },
	{ 0x973be991, "l2tp_tunnel_delete" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9e3e6dd6, "l2tp_session_create" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4f473a34, "l2tp_session_inc_refcount" },
	{ 0xe00a536f, "l2tp_session_register" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x33ac3aa, "ppp_register_net_channel" },
	{ 0x64c75ccd, "l2tp_session_delete" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe119d949, "ppp_dev_name" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdfa8d968, "pppox_unbind_sock" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x10102b47, "l2tp_xmit_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x32e9758b, "l2tp_session_set_header_len" },
	{ 0xdcb764ad, "memset" },
	{ 0x9217a159, "sock_wmalloc" },
	{ 0x48471741, "skb_put" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0xa9a8aca9, "sock_no_bind" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0xc5a4afc, "datagram_poll" },
	{ 0x1fbf1c22, "pppox_ioctl" },
	{ 0x9c2e68ce, "pppox_compat_ioctl" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "pppox,l2tp_netlink,l2tp_core,ppp_generic");


MODULE_INFO(srcversion, "E6F6423649BAA70365E5B6E");
