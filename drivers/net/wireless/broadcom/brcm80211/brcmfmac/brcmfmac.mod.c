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
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xeb30e00b, "brcmu_pktq_mlen" },
	{ 0x1f258bf4, "cfg80211_sched_scan_results" },
	{ 0x2ced6654, "sdio_retune_hold_now" },
	{ 0x9f41fd76, "sdio_release_host" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x3871aaa7, "sdio_disable_func" },
	{ 0x7d45a939, "cfg80211_mgmt_tx_status_ext" },
	{ 0x141b8c4e, "usb_autopm_put_interface" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x59686cc4, "sdio_set_block_size" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x48471741, "skb_put" },
	{ 0x6c6122d6, "brcmu_pkt_buf_free_skb" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x7a11789c, "sdio_retune_crc_disable" },
	{ 0xd102dec2, "cfg80211_scan_done" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5710317b, "firmware_request_nowarn" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xdbf8049f, "sdio_claim_host" },
	{ 0x6dce2310, "cfg80211_sched_scan_stopped" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa49cf4b8, "sdio_memcpy_fromio" },
	{ 0x972a3723, "consume_skb" },
	{ 0xa98dc0ed, "sdio_register_driver" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x342b626e, "cfg80211_remain_on_channel_expired" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe0e5d536, "cfg80211_register_netdevice" },
	{ 0x74a05018, "request_firmware" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x2d3dc664, "cfg80211_port_authorized" },
	{ 0xe2349788, "brcmu_pktq_init" },
	{ 0x27c556ed, "brcmu_pktq_penq_head" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x9924b6a5, "sdio_memcpy_toio" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x77734a0f, "cfg80211_new_sta" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa17c0ccf, "brcmu_dotrev_str" },
	{ 0x342c795a, "cfg80211_disconnected" },
	{ 0x56962cfc, "ether_setup" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x35f28641, "sdio_f0_readb" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x453931da, "wiphy_new_nm" },
	{ 0x92997ed8, "_printk" },
	{ 0x432d1588, "cfg80211_ready_on_channel" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc48a83dc, "devm_kstrdup" },
	{ 0x9094dcde, "cfg80211_classify8021d" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x416322ae, "sdio_release_irq" },
	{ 0x9108a880, "debugfs_create_devm_seqfile" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4bfdbce7, "cfg80211_crit_proto_stopped" },
	{ 0xa24166ef, "wiphy_register" },
	{ 0x209f749c, "__cfg80211_alloc_reply_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x6c9a4a22, "cfg80211_put_bss" },
	{ 0xbf293c89, "cfg80211_roamed" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x9f984513, "strrchr" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x5b81004c, "of_get_mac_address" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x5fad0041, "ieee80211_get_channel_khz" },
	{ 0x61de3f0d, "cfg80211_check_combinations" },
	{ 0x8f2e623f, "sdio_f0_writeb" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x38b30f21, "sdio_unregister_driver" },
	{ 0x798dba96, "sdio_readsb" },
	{ 0x9dbcd801, "brcmu_dbg_hex_dump" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1dfaa4dd, "efi" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x11132c7a, "cfg80211_ibss_joined" },
	{ 0x72a217ee, "request_firmware_nowait" },
	{ 0x394f4efd, "simple_open" },
	{ 0x121445a5, "skb_pull" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x72e8b87d, "irq_get_irq_data" },
	{ 0x7c592253, "wiphy_apply_custom_regulatory" },
	{ 0x53222b18, "cfg80211_michael_mic_failure" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x9f0bf240, "sdio_retune_crc_enable" },
	{ 0x14841c15, "brcmu_pktq_flush" },
	{ 0x72941518, "brcmu_pktq_peek_tail" },
	{ 0x5a921311, "strncmp" },
	{ 0x1d0f24a3, "cfg80211_del_sta_sinfo" },
	{ 0xca5690c, "sdio_readl" },
	{ 0xf69c6aec, "mmc_set_data_timeout" },
	{ 0xb310efd8, "nla_put" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x194a2f46, "wiphy_unregister" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0xed815740, "wiphy_read_of_freq_limits" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5642dade, "eth_platform_get_mac_address" },
	{ 0x549241c, "dev_coredumpv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xd77b9a50, "brcmu_pktq_pdeq_match" },
	{ 0x4b4a4ba2, "cfg80211_vendor_cmd_reply" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x544d3b52, "sdio_writel" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x1fa115ba, "debugfs_create_u32" },
	{ 0xb2ab218c, "mmc_wait_for_req" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xdc58f5d4, "param_ops_string" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xdb73a05c, "skb_unlink" },
	{ 0xa75f6858, "sdio_get_host_pm_caps" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe1bed8dd, "pm_runtime_forbid" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xddbcff2b, "brcmu_pktq_mdeq" },
	{ 0xff06ce79, "cfg80211_unregister_wdev" },
	{ 0x3e43fffe, "brcmu_pktq_penq" },
	{ 0x33ae4bae, "pm_runtime_allow" },
	{ 0x999e8297, "vfree" },
	{ 0x3714ccd6, "__platform_driver_probe" },
	{ 0x7a6ffa02, "of_device_is_compatible" },
	{ 0xafa88d4c, "cfg80211_rx_mgmt_ext" },
	{ 0x85df9b6c, "strsep" },
	{ 0xd68e2560, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x39d3e4a, "brcmu_pktq_pdeq_tail" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x7deb4ca9, "driver_for_each_device" },
	{ 0xc310b981, "strnstr" },
	{ 0x87b8798d, "sg_next" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5185d51b, "seq_write" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x1d864ef5, "brcmu_pkt_buf_get_skb" },
	{ 0x99b097e8, "mmc_hw_reset" },
	{ 0x77148dd5, "sdio_retune_release" },
	{ 0x234daf4b, "sdio_claim_irq" },
	{ 0x99e91096, "cfg80211_report_wowlan_wakeup" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc16e3eae, "sdio_enable_func" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0xebe193a7, "send_sig" },
	{ 0x1906648e, "brcmu_boardrev_str" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x6121104b, "cfg80211_inform_bss_data" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xea124bd1, "gcd" },
	{ 0x20af50d6, "irq_of_parse_and_map" },
	{ 0x518262a, "device_release_driver" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xbec55524, "of_find_node_opts_by_path" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa2db0b1a, "cfg80211_connect_done" },
	{ 0x7410aba2, "strreplace" },
	{ 0x123109a9, "wiphy_free" },
	{ 0xf1852056, "of_property_read_string_helper" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x71d552ca, "cfg80211_cqm_rssi_notify" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xd6217d91, "brcmu_d11_attach" },
	{ 0x9858f364, "get_random_u8" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4233af5c, "sdio_readb" },
	{ 0xbd58d3ea, "sdio_writeb" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "brcmutil,cfg80211");

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4359*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("sdio:c*v02D0dA804*");
MODULE_ALIAS("sdio:c*v02D0dA9AF*");
MODULE_ALIAS("sdio:c*v02D0dAAE8*");
MODULE_ALIAS("sdio:c*v02D0d4355*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4pBD29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A56A7880CC5C16787B64C69");
