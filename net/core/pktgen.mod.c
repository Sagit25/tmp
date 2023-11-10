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
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0xb3c6f341, "single_open" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5a921311, "strncmp" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x5da0a311, "proc_remove" },
	{ 0x6612133d, "proc_create_data" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xcc793c4a, "module_put" },
	{ 0x48471741, "skb_put" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x37a0cba, "kfree" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0x2dccc194, "__put_task_struct" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x10a44557, "__xfrm_state_destroy" },
	{ 0xa48f9eb7, "proc_mkdir" },
	{ 0xe1dc7c0f, "proc_create" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xdc29a525, "kmalloc_node_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x78ca9d8c, "kthread_bind" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x999e8297, "vfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x1425e33, "try_module_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x652032cb, "mac_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0xa8862a9e, "dev_get_by_name" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x9858f364, "get_random_u8" },
	{ 0x34514e24, "xfrm_state_lookup_byspi" },
	{ 0x9cac8f4c, "xfrm_stateonly_find" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xd73653c4, "freezer_active" },
	{ 0xc8c41a62, "freezing_slow_path" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x3a02e014, "hrtimer_init_sleeper" },
	{ 0xa87bffc3, "hrtimer_sleeper_start_expires" },
	{ 0x1000e51, "schedule" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x806f7faf, "softnet_data" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0xbbfe0f97, "netif_receive_skb" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x121445a5, "skb_pull" },
	{ 0x8f778857, "pktgen_xfrm_outer_mode_output" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xd0ab05f4, "udp4_hwcsum" },
	{ 0x7f2d3a3b, "skb_checksum" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x655cade0, "seq_lseek" },
	{ 0x613beb6, "single_release" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6531797595E58436DFEF06F");
