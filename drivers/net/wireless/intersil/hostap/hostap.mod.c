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

SYMBOL_CRC(hostap_80211_rx, 0x4bc1dc90, "");
SYMBOL_CRC(hostap_master_start_xmit, 0x3523f45d, "");
SYMBOL_CRC(hostap_init_data, 0xeeca0d1b, "");
SYMBOL_CRC(hostap_init_ap_proc, 0x804ce2bd, "");
SYMBOL_CRC(hostap_free_data, 0xd3b10019, "");
SYMBOL_CRC(hostap_check_sta_fw_version, 0x151c0ba3, "");
SYMBOL_CRC(hostap_handle_sta_tx_exc, 0xb02f71f8, "");
SYMBOL_CRC(hostap_info_init, 0x79a0d7ab, "");
SYMBOL_CRC(hostap_info_process, 0xf61a4120, "");
SYMBOL_CRC(hostap_80211_ops, 0x0dcb2dbf, "");
SYMBOL_CRC(hostap_set_word, 0x8fe56d62, "");
SYMBOL_CRC(hostap_set_string, 0x2631493d, "");
SYMBOL_CRC(hostap_get_porttype, 0x7dbd4f3b, "");
SYMBOL_CRC(hostap_set_encryption, 0xefa12360, "");
SYMBOL_CRC(hostap_set_antsel, 0xb7cf56eb, "");
SYMBOL_CRC(hostap_set_roaming, 0x89f0e6e8, "");
SYMBOL_CRC(hostap_set_auth_algs, 0xfe5ae7fd, "");
SYMBOL_CRC(hostap_dump_rx_header, 0x7fb75891, "");
SYMBOL_CRC(hostap_dump_tx_header, 0xf91c03e2, "");
SYMBOL_CRC(hostap_80211_get_hdrlen, 0xb4b77c8b, "");
SYMBOL_CRC(hostap_setup_dev, 0x6b2dd5d8, "");
SYMBOL_CRC(hostap_set_multicast_list_queue, 0x75934c58, "");
SYMBOL_CRC(hostap_set_hostapd, 0x03139615, "");
SYMBOL_CRC(hostap_set_hostapd_sta, 0xb44a6b2e, "");
SYMBOL_CRC(hostap_add_interface, 0xf7293aa6, "");
SYMBOL_CRC(hostap_remove_interface, 0xec1cc7b1, "");
SYMBOL_CRC(prism2_update_comms_qual, 0x557db0db, "");
SYMBOL_CRC(hostap_init_proc, 0x83ec650d, "");
SYMBOL_CRC(hostap_remove_proc, 0xd6a02e3e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x20e19a6e, "alloc_etherdev_mqs" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1425e33, "try_module_get" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x5ca1b79, "eth_header" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x48471741, "skb_put" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x972a3723, "consume_skb" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0xb16e3a0c, "eth_header_cache" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x805b6608, "iw_handler_set_spy" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x6612133d, "proc_create_data" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe2964344, "__wake_up" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x56962cfc, "ether_setup" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x92997ed8, "_printk" },
	{ 0x1b7934e, "iw_handler_get_thrspy" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb71eccac, "eth_header_cache_update" },
	{ 0x3cefa539, "netif_device_detach" },
	{ 0xe065ce9d, "netif_device_attach" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x6e4253e7, "lib80211_get_crypto_ops" },
	{ 0xcc793c4a, "module_put" },
	{ 0x916c2e5f, "dev_open" },
	{ 0x459e03b6, "init_net" },
	{ 0x121445a5, "skb_pull" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x1cdbdf56, "dev_close" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x91e3fbf7, "wireless_send_event" },
	{ 0xab93c2ef, "seq_putc" },
	{ 0x9166fada, "strncpy" },
	{ 0x4fffca41, "free_netdev" },
	{ 0xc2c20771, "iw_handler_get_spy" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x683b9cce, "default_llseek" },
	{ 0xa48f9eb7, "proc_mkdir" },
	{ 0xdcb764ad, "memset" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x25a68788, "wireless_spy_update" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x5da0a311, "proc_remove" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x260f4559, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xc9983a6, "lib80211_crypt_delayed_deinit" },
	{ 0x1f1bbd31, "skb_copy" },
	{ 0x461c9d06, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xb7f8c5fb, "proc_create_single_data" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x442817f, "proc_create_seq_private" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xafa2b1d5, "iw_handler_set_thrspy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "935460D05D99B1616D1AD2B");
