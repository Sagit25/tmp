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
	{ 0x82b1aee1, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6184781e, "pci_request_selected_regions" },
	{ 0xbbb770d0, "pci_release_selected_regions" },
	{ 0x48471741, "skb_put" },
	{ 0x7eee524d, "skb_tstamp_tx" },
	{ 0xd917d815, "pci_enable_device_mem" },
	{ 0x972a3723, "consume_skb" },
	{ 0xa719442, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfcfea476, "phy_mii_ioctl" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa951a544, "dma_unmap_page_attrs" },
	{ 0x90e0ae9a, "__pci_register_driver" },
	{ 0xa2bad0ff, "phy_ethtool_set_eee" },
	{ 0x21e6b37b, "devm_ioremap" },
	{ 0xeab1db24, "pci_disable_msi" },
	{ 0xbf1778dd, "ptp_clock_index" },
	{ 0x77e3f80d, "phy_attached_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9c253124, "phy_ethtool_set_link_ksettings" },
	{ 0x6238902c, "phy_ethtool_set_wol" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xe2964344, "__wake_up" },
	{ 0x216dab, "__netif_napi_del" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6ff183d, "pci_unregister_driver" },
	{ 0x85a552e, "netdev_err" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0xacf0a739, "ptp_find_pin" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0x2a306880, "napi_complete_done" },
	{ 0x92997ed8, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x2000433a, "phy_connect_direct" },
	{ 0x61c4754b, "__napi_schedule" },
	{ 0xece7bddc, "eth_prepare_mac_addr_change" },
	{ 0x22f8523b, "pci_enable_msix_range" },
	{ 0x3cefa539, "netif_device_detach" },
	{ 0x215cc29c, "napi_gro_receive" },
	{ 0x5b81004c, "of_get_mac_address" },
	{ 0xa6795db1, "pci_select_bars" },
	{ 0x14dfe0cb, "phy_ethtool_get_link_ksettings" },
	{ 0xfeee7de, "phy_init_eee" },
	{ 0xb46b3a9f, "devm_alloc_etherdev_mqs" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6b48c83c, "pci_enable_msi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdd363939, "ptp_clock_register" },
	{ 0x96267f10, "__dev_kfree_skb_irq" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0x52238ddf, "napi_enable" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x8932f5b, "ethtool_op_get_link" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x21647c14, "phy_find_first" },
	{ 0x152b21a2, "phy_start" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x271438e, "dma_sync_single_for_cpu" },
	{ 0x3ddf4cfb, "phy_remove_link_mode" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x8d352448, "ptp_clock_event" },
	{ 0xe5f5e507, "pci_set_master" },
	{ 0x6e3803b2, "phy_print_status" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc13e41c4, "ptp_clock_unregister" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xebdba1e1, "phy_start_aneg" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0xc85d6387, "phy_ethtool_get_eee" },
	{ 0xd531ae02, "devm_mdiobus_alloc_size" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0x5b68cf1f, "mdiobus_unregister" },
	{ 0xdd64e639, "strscpy" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x74f5ffde, "phy_support_asym_pause" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x289f6df3, "phy_ethtool_get_wol" },
	{ 0x406d727a, "of_phy_get_and_connect" },
	{ 0xd8cffaaf, "__mdiobus_register" },
	{ 0x19831f28, "pci_disable_msix" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe82d68c3, "pci_disable_device" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x62f52652, "napi_schedule_prep" },
	{ 0x1777343a, "napi_disable" },
	{ 0x24ccdf71, "phy_stop" },
	{ 0xf6af6fd5, "ptp_schedule_worker" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x395a4562, "phy_disconnect" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001055d00007430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001055d00007431sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001055d0000A011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001055d0000A041sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "15D9B75E31263BFA7D570E8");
