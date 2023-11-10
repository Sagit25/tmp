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

SYMBOL_CRC(ieee802154_alloc_hw, 0x38a174e1, "");
SYMBOL_CRC(ieee802154_configure_durations, 0x209d1d0c, "");
SYMBOL_CRC(ieee802154_free_hw, 0x6f99f74e, "");
SYMBOL_CRC(ieee802154_register_hw, 0xd4e40781, "");
SYMBOL_CRC(ieee802154_unregister_hw, 0xe0ad5f55, "");
SYMBOL_CRC(ieee802154_rx_irqsafe, 0x74c6acc3, "");
SYMBOL_CRC(ieee802154_wake_queue, 0xc40abc64, "");
SYMBOL_CRC(ieee802154_stop_queue, 0x34c7c273, "");
SYMBOL_CRC(ieee802154_xmit_complete, 0x9eaa32f5, "");
SYMBOL_CRC(ieee802154_xmit_error, 0x2259bcba, "");
SYMBOL_CRC(ieee802154_xmit_hw_error, 0x8bd0d69c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x626d5117, "crypto_skcipher_encrypt" },
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3f26f22e, "bpf_trace_run4" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x972a3723, "consume_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x6f850b71, "dev_alloc_name" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x4355f56e, "crypto_alloc_aead" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0x939a3f13, "crypto_aead_setauthsize" },
	{ 0x9b2d5125, "crypto_aead_decrypt" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x8fd417e6, "crypto_skcipher_setkey" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0xaba37611, "ieee802154_hdr_peek_addrs" },
	{ 0x6b92684f, "wpan_phy_unregister" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd57ede5a, "crypto_skcipher_decrypt" },
	{ 0xa91d6818, "skb_copy_expand" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x65bea063, "crypto_aead_setkey" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x974e4d04, "wpan_phy_register" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc7a06f42, "crypto_aead_encrypt" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x2958d521, "ieee802154_hdr_peek" },
	{ 0x5792f848, "strlcpy" },
	{ 0xec3191a7, "wpan_phy_free" },
	{ 0xbbfe0f97, "netif_receive_skb" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x27e4ffed, "bpf_trace_run1" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xdad7841, "ieee802154_hdr_pull" },
	{ 0xc822898e, "crypto_alloc_sync_skcipher" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7de4bde7, "bpf_trace_run3" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc5da40b6, "wpan_phy_new" },
	{ 0x461c9d06, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x3dd742b3, "ieee802154_hdr_push" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ieee802154,crc-ccitt");


MODULE_INFO(srcversion, "A4FD2DFE9739D7CE47C4DE4");
