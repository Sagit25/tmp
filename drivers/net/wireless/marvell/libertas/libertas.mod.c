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

SYMBOL_CRC(lbs_cmd_copyback, 0x42a661eb, "_gpl");
SYMBOL_CRC(lbs_host_sleep_cfg, 0xcbc969e7, "_gpl");
SYMBOL_CRC(__lbs_cmd, 0x6894491e, "_gpl");
SYMBOL_CRC(lbs_debug, 0xf64277de, "_gpl");
SYMBOL_CRC(lbs_host_to_card_done, 0xf019fb93, "_gpl");
SYMBOL_CRC(lbs_suspend, 0x924df963, "_gpl");
SYMBOL_CRC(lbs_resume, 0xe082fc02, "_gpl");
SYMBOL_CRC(lbs_add_card, 0xb997ae48, "_gpl");
SYMBOL_CRC(lbs_remove_card, 0x6923a98f, "_gpl");
SYMBOL_CRC(lbs_start_card, 0xf05478bd, "_gpl");
SYMBOL_CRC(lbs_stop_card, 0xe42419fc, "_gpl");
SYMBOL_CRC(lbs_queue_event, 0xea38cdb2, "_gpl");
SYMBOL_CRC(lbs_notify_command_response, 0xd5e35706, "_gpl");
SYMBOL_CRC(lbs_process_rxed_packet, 0x30a16418, "_gpl");
SYMBOL_CRC(lbs_send_tx_feedback, 0x465e4a3e, "_gpl");
SYMBOL_CRC(lbs_get_firmware_async, 0x83aa40e7, "_gpl");
SYMBOL_CRC(lbs_get_firmware, 0x785bb21e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd102dec2, "cfg80211_scan_done" },
	{ 0x972a3723, "consume_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x74a05018, "request_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0x98ff2517, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x342c795a, "cfg80211_disconnected" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x56962cfc, "ether_setup" },
	{ 0x85a552e, "netdev_err" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x453931da, "wiphy_new_nm" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa24166ef, "wiphy_register" },
	{ 0x6c9a4a22, "cfg80211_put_bss" },
	{ 0x3cefa539, "netif_device_detach" },
	{ 0xe065ce9d, "netif_device_attach" },
	{ 0x5fad0041, "ieee80211_get_channel_khz" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x11132c7a, "cfg80211_ibss_joined" },
	{ 0x72a217ee, "request_firmware_nowait" },
	{ 0x394f4efd, "simple_open" },
	{ 0x121445a5, "skb_pull" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x96267f10, "__dev_kfree_skb_irq" },
	{ 0x53222b18, "cfg80211_michael_mic_failure" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x194a2f46, "wiphy_unregister" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x61caff11, "cfg80211_get_bss" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcfa6b507, "netdev_alert" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6121104b, "cfg80211_inform_bss_data" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x429c0c31, "ieee80211_bss_get_elem" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa2db0b1a, "cfg80211_connect_done" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x123109a9, "wiphy_free" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x9877f63c, "ieee80211_get_num_supported_channels" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "5A0CB6BEFECCE0FE5DFFBE5");
