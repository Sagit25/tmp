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

SYMBOL_CRC(l2tp_sk_to_tunnel, 0x381814a9, "_gpl");
SYMBOL_CRC(l2tp_tunnel_inc_refcount, 0xc86edd0f, "_gpl");
SYMBOL_CRC(l2tp_tunnel_dec_refcount, 0x27cd43fe, "_gpl");
SYMBOL_CRC(l2tp_session_inc_refcount, 0x4f473a34, "_gpl");
SYMBOL_CRC(l2tp_session_dec_refcount, 0x0d53ffcf, "_gpl");
SYMBOL_CRC(l2tp_tunnel_get, 0xf67483c0, "_gpl");
SYMBOL_CRC(l2tp_tunnel_get_nth, 0x7ce103bf, "_gpl");
SYMBOL_CRC(l2tp_tunnel_get_session, 0x142e7e88, "_gpl");
SYMBOL_CRC(l2tp_session_get, 0xfa01539d, "_gpl");
SYMBOL_CRC(l2tp_session_get_nth, 0x34fda11c, "_gpl");
SYMBOL_CRC(l2tp_session_get_by_ifname, 0x62c974e2, "_gpl");
SYMBOL_CRC(l2tp_session_register, 0xe00a536f, "_gpl");
SYMBOL_CRC(l2tp_recv_common, 0x1e0719d1, "_gpl");
SYMBOL_CRC(l2tp_udp_encap_recv, 0xead6529b, "_gpl");
SYMBOL_CRC(l2tp_xmit_skb, 0x10102b47, "_gpl");
SYMBOL_CRC(l2tp_tunnel_create, 0x772d0246, "_gpl");
SYMBOL_CRC(l2tp_tunnel_register, 0x1ae9eab2, "_gpl");
SYMBOL_CRC(l2tp_tunnel_delete, 0x973be991, "_gpl");
SYMBOL_CRC(l2tp_session_delete, 0x64c75ccd, "_gpl");
SYMBOL_CRC(l2tp_session_set_header_len, 0x32e9758b, "_gpl");
SYMBOL_CRC(l2tp_session_create, 0x9e3e6dd6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x27e4ffed, "bpf_trace_run1" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdcb764ad, "memset" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x73820201, "register_pernet_device" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92997ed8, "_printk" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf1f700d0, "udp_sock_create6" },
	{ 0xc5a81d59, "kernel_sock_shutdown" },
	{ 0xacaa2c9e, "sock_release" },
	{ 0xdd65439c, "sock_create_kern" },
	{ 0xf347a9fb, "kernel_bind" },
	{ 0x265aa3d5, "kernel_connect" },
	{ 0x22ee06e, "udp_sock_create4" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x20978fb9, "idr_find" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xcc1b882a, "idr_get_next_ul" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xc74ae316, "sockfd_lookup" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xe2bce892, "fput" },
	{ 0x545b5c4b, "setup_udp_tunnel_sock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x494a1047, "ip_queue_xmit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xcb6dba5a, "udp_set_csum" },
	{ 0xf85c0dcf, "inet6_csk_xmit" },
	{ 0x81c9a25d, "udp6_set_csum" },
	{ 0x6a29aec0, "dst_release" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ip6_udp_tunnel,udp_tunnel,ipv6");


MODULE_INFO(srcversion, "7512B1DCD48B8760E388269");
