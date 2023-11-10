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

SYMBOL_CRC(wpan_phy_find, 0x028ccf72, "");
SYMBOL_CRC(wpan_phy_for_each, 0x1dde816c, "");
SYMBOL_CRC(wpan_phy_new, 0xc5da40b6, "");
SYMBOL_CRC(wpan_phy_register, 0x974e4d04, "");
SYMBOL_CRC(wpan_phy_unregister, 0x6b92684f, "");
SYMBOL_CRC(wpan_phy_free, 0xec3191a7, "");
SYMBOL_CRC(ieee802154_hdr_push, 0x3dd742b3, "_gpl");
SYMBOL_CRC(ieee802154_hdr_pull, 0x0dad7841, "_gpl");
SYMBOL_CRC(ieee802154_hdr_peek_addrs, 0xaba37611, "_gpl");
SYMBOL_CRC(ieee802154_hdr_peek, 0x2958d521, "_gpl");
SYMBOL_CRC(ieee802154_max_payload, 0x87e2553b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x3f26f22e, "bpf_trace_run4" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x659f0b8a, "trace_output_call" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x942352e7, "genlmsg_put" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xf7dca34a, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcc044ad, "device_rename" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x606b7e51, "put_device" },
	{ 0xe739bb49, "netlink_broadcast" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x27e2f7b3, "class_for_each_device" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xd9ff8e23, "__dev_get_by_index" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0xdcced5f2, "__class_register" },
	{ 0x459e03b6, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7bbe500c, "device_add" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0x41f9298d, "dev_get_by_index" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb310efd8, "nla_put" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x27e4ffed, "bpf_trace_run1" },
	{ 0x402beac3, "device_del" },
	{ 0xb31eda53, "dev_set_mac_address" },
	{ 0xdcb764ad, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7de4bde7, "bpf_trace_run3" },
	{ 0x5285ddb1, "__put_net" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf9e847de, "get_net_ns_by_pid" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe9726398, "device_match_name" },
	{ 0xa8862a9e, "dev_get_by_name" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xfc2bbbe6, "genl_unregister_family" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa67cd91b, "genl_register_family" },
	{ 0x3834de27, "__dev_change_net_namespace" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x73820201, "register_pernet_device" },
	{ 0x6324a994, "get_net_ns_by_fd" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x7d26ecfe, "class_find_device" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1E74776C571EDDADCE9FC69");
