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

SYMBOL_CRC(cfg80211_shutdown_all_interfaces, 0x081748a0, "_gpl");
SYMBOL_CRC(wiphy_new_nm, 0x453931da, "");
SYMBOL_CRC(wiphy_register, 0xa24166ef, "");
SYMBOL_CRC(wiphy_rfkill_start_polling, 0x121cad58, "");
SYMBOL_CRC(wiphy_unregister, 0x194a2f46, "");
SYMBOL_CRC(wiphy_free, 0x123109a9, "");
SYMBOL_CRC(wiphy_rfkill_set_hw_state_reason, 0xdfd6c09f, "");
SYMBOL_CRC(cfg80211_unregister_wdev, 0xff06ce79, "");
SYMBOL_CRC(cfg80211_stop_iface, 0xa312237b, "");
SYMBOL_CRC(cfg80211_register_netdevice, 0xe0e5d536, "");
SYMBOL_CRC(wiphy_work_queue, 0xf3735136, "_gpl");
SYMBOL_CRC(wiphy_work_cancel, 0xd7c85642, "_gpl");
SYMBOL_CRC(wiphy_delayed_work_timer, 0x85de3f6f, "");
SYMBOL_CRC(wiphy_delayed_work_queue, 0x1d570db5, "_gpl");
SYMBOL_CRC(wiphy_delayed_work_cancel, 0x9297101b, "_gpl");
SYMBOL_CRC(ieee80211_radiotap_iterator_init, 0x43afadee, "");
SYMBOL_CRC(ieee80211_radiotap_iterator_next, 0x7acb86ed, "");
SYMBOL_CRC(ieee80211_get_response_rate, 0x46ff300c, "");
SYMBOL_CRC(ieee80211_mandatory_rates, 0x97b516c7, "");
SYMBOL_CRC(ieee80211_channel_to_freq_khz, 0x5584448a, "");
SYMBOL_CRC(ieee80211_s1g_channel_width, 0x0cc95bc2, "");
SYMBOL_CRC(ieee80211_freq_khz_to_channel, 0x6bedf402, "");
SYMBOL_CRC(ieee80211_get_channel_khz, 0x5fad0041, "");
SYMBOL_CRC(ieee80211_hdrlen, 0x7ef39823, "");
SYMBOL_CRC(ieee80211_get_hdrlen_from_skb, 0xa71c2ada, "");
SYMBOL_CRC(ieee80211_get_mesh_hdrlen, 0xd56d55f3, "");
SYMBOL_CRC(ieee80211_data_to_8023_exthdr, 0xdd73cdf6, "");
SYMBOL_CRC(ieee80211_amsdu_to_8023s, 0xc0d228bc, "");
SYMBOL_CRC(cfg80211_classify8021d, 0x9094dcde, "");
SYMBOL_CRC(ieee80211_bss_get_elem, 0x429c0c31, "");
SYMBOL_CRC(cfg80211_calculate_bitrate, 0x4d888bc1, "");
SYMBOL_CRC(cfg80211_get_p2p_attr, 0xf5596d89, "");
SYMBOL_CRC(ieee80211_ie_split_ric, 0x275269b3, "");
SYMBOL_CRC(ieee80211_operating_class_to_band, 0xf40bc2f5, "");
SYMBOL_CRC(ieee80211_chandef_to_operating_class, 0x3643b80f, "");
SYMBOL_CRC(cfg80211_iter_combinations, 0xd4392a4c, "");
SYMBOL_CRC(cfg80211_check_combinations, 0x61de3f0d, "");
SYMBOL_CRC(ieee80211_get_num_supported_channels, 0x9877f63c, "");
SYMBOL_CRC(cfg80211_get_station, 0xd3df344b, "");
SYMBOL_CRC(cfg80211_free_nan_func, 0x8fa02936, "");
SYMBOL_CRC(cfg80211_sinfo_alloc_tid_stats, 0x1b5a3a7e, "");
SYMBOL_CRC(rfc1042_header, 0x69b18f43, "");
SYMBOL_CRC(bridge_tunnel_header, 0x1879fcbd, "");
SYMBOL_CRC(cfg80211_send_layer2_update, 0xd835deb8, "");
SYMBOL_CRC(ieee80211_get_vht_max_nss, 0x7c3ac925, "");
SYMBOL_CRC(cfg80211_iftype_allowed, 0x30143166, "");
SYMBOL_CRC(cfg80211_get_iftype_ext_capa, 0xeebcd069, "");
SYMBOL_CRC(get_wiphy_regdom, 0x9fd56ce2, "");
SYMBOL_CRC(reg_query_regdb_wmm, 0x1ce2497f, "");
SYMBOL_CRC(freq_reg_info, 0x707d921f, "");
SYMBOL_CRC(reg_initiator_name, 0xdba126c1, "");
SYMBOL_CRC(wiphy_apply_custom_regulatory, 0x7c592253, "");
SYMBOL_CRC(regulatory_hint, 0x98ff2517, "");
SYMBOL_CRC(regulatory_set_wiphy_regd, 0x6671a3ed, "");
SYMBOL_CRC(regulatory_set_wiphy_regd_sync, 0xec54e427, "");
SYMBOL_CRC(regulatory_pre_cac_allowed, 0x40511980, "");
SYMBOL_CRC(cfg80211_is_element_inherited, 0xcc1a7c48, "");
SYMBOL_CRC(cfg80211_scan_done, 0xd102dec2, "");
SYMBOL_CRC(cfg80211_sched_scan_results, 0x1f258bf4, "");
SYMBOL_CRC(cfg80211_sched_scan_stopped_locked, 0x0a513e0b, "");
SYMBOL_CRC(cfg80211_sched_scan_stopped, 0x6dce2310, "");
SYMBOL_CRC(cfg80211_bss_flush, 0xb0991b5a, "");
SYMBOL_CRC(cfg80211_find_elem_match, 0x9d6cba30, "");
SYMBOL_CRC(cfg80211_find_vendor_elem, 0x79b82a71, "");
SYMBOL_CRC(cfg80211_get_bss, 0x61caff11, "");
SYMBOL_CRC(cfg80211_get_ies_channel_number, 0x275c97f0, "");
SYMBOL_CRC(cfg80211_merge_profile, 0x117aca91, "");
SYMBOL_CRC(cfg80211_inform_bss_data, 0x6121104b, "");
SYMBOL_CRC(cfg80211_inform_bss_frame_data, 0xb7634998, "");
SYMBOL_CRC(cfg80211_ref_bss, 0x210c3af6, "");
SYMBOL_CRC(cfg80211_put_bss, 0x6c9a4a22, "");
SYMBOL_CRC(cfg80211_unlink_bss, 0x25272091, "");
SYMBOL_CRC(cfg80211_bss_iter, 0xbb08ee94, "");
SYMBOL_CRC(cfg80211_check_station_change, 0x0be39b3a, "");
SYMBOL_CRC(__cfg80211_alloc_event_skb, 0xfda68b32, "");
SYMBOL_CRC(__cfg80211_send_event_skb, 0xf6790faa, "");
SYMBOL_CRC(cfg80211_nan_match, 0x2c1ca817, "");
SYMBOL_CRC(cfg80211_nan_func_terminated, 0x7104c101, "");
SYMBOL_CRC(__cfg80211_alloc_reply_skb, 0x209f749c, "");
SYMBOL_CRC(cfg80211_vendor_cmd_reply, 0x4b4a4ba2, "_gpl");
SYMBOL_CRC(cfg80211_vendor_cmd_get_sender, 0xc6f8e35e, "_gpl");
SYMBOL_CRC(cfg80211_rx_unprot_mlme_mgmt, 0xf6abaabd, "");
SYMBOL_CRC(cfg80211_notify_new_peer_candidate, 0xe570394e, "");
SYMBOL_CRC(cfg80211_assoc_comeback, 0x9ac4c1f4, "");
SYMBOL_CRC(cfg80211_ready_on_channel, 0x432d1588, "");
SYMBOL_CRC(cfg80211_remain_on_channel_expired, 0x342b626e, "");
SYMBOL_CRC(cfg80211_tx_mgmt_expired, 0x1fcf1645, "");
SYMBOL_CRC(cfg80211_new_sta, 0x77734a0f, "");
SYMBOL_CRC(cfg80211_del_sta_sinfo, 0x1d0f24a3, "");
SYMBOL_CRC(cfg80211_conn_failed, 0x793856eb, "");
SYMBOL_CRC(cfg80211_rx_spurious_frame, 0x307e5d51, "");
SYMBOL_CRC(cfg80211_rx_unexpected_4addr_frame, 0x776ed2c3, "");
SYMBOL_CRC(cfg80211_control_port_tx_status, 0xe7115be3, "");
SYMBOL_CRC(cfg80211_mgmt_tx_status_ext, 0x7d45a939, "");
SYMBOL_CRC(cfg80211_rx_control_port, 0x7064cf35, "");
SYMBOL_CRC(cfg80211_cqm_rssi_notify, 0x71d552ca, "");
SYMBOL_CRC(cfg80211_cqm_txe_notify, 0x0f2d9e1e, "");
SYMBOL_CRC(cfg80211_cqm_pktloss_notify, 0xd5cffb09, "");
SYMBOL_CRC(cfg80211_cqm_beacon_loss_notify, 0xa171ebdd, "");
SYMBOL_CRC(cfg80211_gtk_rekey_notify, 0x6174ce71, "");
SYMBOL_CRC(cfg80211_pmksa_candidate_notify, 0xb8cc49f8, "");
SYMBOL_CRC(cfg80211_ch_switch_notify, 0xb7d8120c, "");
SYMBOL_CRC(cfg80211_ch_switch_started_notify, 0xe4531c36, "");
SYMBOL_CRC(cfg80211_bss_color_notify, 0x63d56fe9, "");
SYMBOL_CRC(cfg80211_sta_opmode_change_notify, 0xfab9e269, "");
SYMBOL_CRC(cfg80211_probe_status, 0x3f9c76ee, "");
SYMBOL_CRC(cfg80211_report_obss_beacon_khz, 0x5e723f1c, "");
SYMBOL_CRC(cfg80211_report_wowlan_wakeup, 0x99e91096, "");
SYMBOL_CRC(cfg80211_tdls_oper_request, 0x95d109f0, "");
SYMBOL_CRC(cfg80211_ft_event, 0x461d4aca, "");
SYMBOL_CRC(cfg80211_crit_proto_stopped, 0x4bfdbce7, "");
SYMBOL_CRC(cfg80211_external_auth_request, 0x535b6671, "");
SYMBOL_CRC(cfg80211_update_owe_info_event, 0xa16f9901, "");
SYMBOL_CRC(cfg80211_rx_assoc_resp, 0x58028d6b, "");
SYMBOL_CRC(cfg80211_rx_mlme_mgmt, 0x4e26c243, "");
SYMBOL_CRC(cfg80211_auth_timeout, 0x17ac047b, "");
SYMBOL_CRC(cfg80211_assoc_failure, 0x257acadf, "");
SYMBOL_CRC(cfg80211_tx_mlme_mgmt, 0x2bd9ec92, "");
SYMBOL_CRC(cfg80211_michael_mic_failure, 0x53222b18, "");
SYMBOL_CRC(cfg80211_rx_mgmt_ext, 0xafa88d4c, "");
SYMBOL_CRC(__cfg80211_radar_event, 0xa43c3d5d, "");
SYMBOL_CRC(cfg80211_cac_event, 0x2248d4c8, "");
SYMBOL_CRC(cfg80211_background_cac_abort, 0xab465b2d, "");
SYMBOL_CRC(cfg80211_ibss_joined, 0x11132c7a, "");
SYMBOL_CRC(cfg80211_connect_done, 0xa2db0b1a, "");
SYMBOL_CRC(cfg80211_roamed, 0xbf293c89, "");
SYMBOL_CRC(cfg80211_port_authorized, 0x2d3dc664, "");
SYMBOL_CRC(cfg80211_disconnected, 0x342c795a, "");
SYMBOL_CRC(cfg80211_chandef_create, 0x06ca71fd, "");
SYMBOL_CRC(cfg80211_chandef_valid, 0xc4b4fc27, "");
SYMBOL_CRC(cfg80211_chandef_compatible, 0xd97eaad4, "");
SYMBOL_CRC(cfg80211_chandef_dfs_required, 0x2d11db92, "");
SYMBOL_CRC(cfg80211_chandef_usable, 0xa5fb1172, "");
SYMBOL_CRC(cfg80211_reg_can_beacon, 0x575ad6b5, "");
SYMBOL_CRC(cfg80211_reg_can_beacon_relax, 0x5c018e3c, "");
SYMBOL_CRC(cfg80211_any_usable_channels, 0x627e2216, "");
SYMBOL_CRC(wdev_chandef, 0x4e310694, "");
SYMBOL_CRC(cfg80211_get_drvinfo, 0x9d5eadfa, "");
SYMBOL_CRC(cfg80211_pmsr_complete, 0xe65c8f19, "_gpl");
SYMBOL_CRC(cfg80211_pmsr_report, 0x2cff6aeb, "_gpl");
SYMBOL_CRC(wiphy_read_of_freq_limits, 0xed815740, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0xc3bc72ad, "trace_print_array_seq" },
	{ 0xce3de5, "__sock_create" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x76bc28cd, "verify_pkcs7_signature" },
	{ 0x3f26f22e, "bpf_trace_run4" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x972a3723, "consume_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x933dc050, "__nla_validate" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xec6d9454, "nla_reserve" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0xd45306e5, "bpf_trace_run6" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x74a05018, "request_firmware" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x86adafd6, "skb_add_rx_frag" },
	{ 0x942352e7, "genlmsg_put" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe72ee14f, "genlmsg_multicast_allns" },
	{ 0xe2964344, "__wake_up" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0x41810ca2, "bpf_trace_run8" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x504d52da, "keyring_alloc" },
	{ 0x85a552e, "netdev_err" },
	{ 0xcc044ad, "device_rename" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x1e8fac8e, "wireless_nlevent_flush" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xfe1d2e94, "key_create_or_update" },
	{ 0x606b7e51, "put_device" },
	{ 0xe739bb49, "netlink_broadcast" },
	{ 0xacf20b97, "net_ns_type_operations" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xa6cccc4f, "sysfs_create_link" },
	{ 0xc781bd9f, "rfkill_resume_polling" },
	{ 0x93559c31, "inet_csk_get_port" },
	{ 0xde31500c, "key_put" },
	{ 0xec7546ac, "kobject_uevent_env" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xd9ff8e23, "__dev_get_by_index" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xdcced5f2, "__class_register" },
	{ 0x459e03b6, "init_net" },
	{ 0x72a217ee, "request_firmware_nowait" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7bbe500c, "device_add" },
	{ 0x111e0ce2, "sysfs_remove_link" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9177debf, "init_uts_ns" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x41f9298d, "dev_get_by_index" },
	{ 0xb5902108, "bpf_trace_run5" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x1cdbdf56, "dev_close" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x5792f848, "strlcpy" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x91e3fbf7, "wireless_send_event" },
	{ 0xb310efd8, "nla_put" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xcd279169, "nla_find" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc4435de7, "rfkill_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x27e4ffed, "bpf_trace_run1" },
	{ 0x402beac3, "device_del" },
	{ 0xcdce87c, "rfkill_set_hw_state_reason" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x41d1a870, "bpf_trace_run10" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc711578e, "of_prop_next_u32" },
	{ 0x7de4bde7, "bpf_trace_run3" },
	{ 0x5285ddb1, "__put_net" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf9e847de, "get_net_ns_by_pid" },
	{ 0x4945e24b, "debugfs_rename" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5561da8a, "platform_device_register_full" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0xff282521, "rfkill_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xacaa2c9e, "sock_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xfc2bbbe6, "genl_unregister_family" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xea124bd1, "gcd" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc76905ff, "bpf_trace_run7" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xa67cd91b, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3834de27, "__dev_change_net_namespace" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x73820201, "register_pernet_device" },
	{ 0x6324a994, "get_net_ns_by_fd" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "rfkill");


MODULE_INFO(srcversion, "A9EB255A67B3D3D4E92B6D5");
