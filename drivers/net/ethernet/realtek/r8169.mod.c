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
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe133f829, "phy_set_max_speed" },
	{ 0xf5ce0a22, "__skb_pad" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0x46056fdc, "pcim_set_mwi" },
	{ 0xc17e15fe, "pci_wake_from_d3" },
	{ 0x7eee524d, "skb_tstamp_tx" },
	{ 0xd2bb16c7, "__napi_alloc_skb" },
	{ 0xc8140cb7, "netdev_update_features" },
	{ 0xa719442, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc9251010, "dmam_alloc_attrs" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0xa951a544, "dma_unmap_page_attrs" },
	{ 0x74a05018, "request_firmware" },
	{ 0xf7370f56, "system_state" },
	{ 0x90e0ae9a, "__pci_register_driver" },
	{ 0xa2bad0ff, "phy_ethtool_set_eee" },
	{ 0x14af91f5, "pci_dev_run_wake" },
	{ 0x631baa5b, "dma_sync_single_for_device" },
	{ 0x77e3f80d, "phy_attached_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9c253124, "phy_ethtool_set_link_ksettings" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xadc2874, "pci_set_power_state" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5b5481ae, "pci_irq_vector" },
	{ 0xd72f43b6, "phy_write_mmd" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x6ff183d, "pci_unregister_driver" },
	{ 0x85a552e, "netdev_err" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xb084dbf7, "phy_read_paged" },
	{ 0x8cd7ff64, "phy_restore_page" },
	{ 0x8fa5a6ee, "dev_fetch_sw_netstats" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0xc8149da5, "genphy_soft_reset" },
	{ 0x2a306880, "napi_complete_done" },
	{ 0xe21a3b69, "__mdiobus_write" },
	{ 0xf6d24d3, "__devm_alloc_percpu" },
	{ 0x6d92ca66, "pm_schedule_suspend" },
	{ 0x579227c3, "devm_clk_get_optional_enabled" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9ad6d6cb, "pci_status_get_and_clear_errors" },
	{ 0x3189dcbe, "phy_speed_up" },
	{ 0x2000433a, "phy_connect_direct" },
	{ 0x61c4754b, "__napi_schedule" },
	{ 0x3cefa539, "netif_device_detach" },
	{ 0xb719c8e8, "pci_disable_link_state" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x215cc29c, "napi_gro_receive" },
	{ 0xe065ce9d, "netif_device_attach" },
	{ 0xa6795db1, "pci_select_bars" },
	{ 0x14dfe0cb, "phy_ethtool_get_link_ksettings" },
	{ 0xb46b3a9f, "devm_alloc_etherdev_mqs" },
	{ 0xa8a4db07, "pcim_iomap_regions" },
	{ 0x880bc3f8, "pci_clear_master" },
	{ 0x6d64fc06, "__phy_modify" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x806f7faf, "softnet_data" },
	{ 0xa08a64fb, "phy_suspend" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x71322468, "netdev_printk" },
	{ 0xb39e57a4, "phy_modify_paged" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x17c7c8b7, "pcie_capability_clear_and_set_word_locked" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0xe8d55945, "phy_speed_down" },
	{ 0x9d64f128, "pci_read_config_word" },
	{ 0x52238ddf, "napi_enable" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x30202801, "mdiobus_read" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x8932f5b, "ethtool_op_get_link" },
	{ 0x5642dade, "eth_platform_get_mac_address" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x152b21a2, "phy_start" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x271438e, "dma_sync_single_for_cpu" },
	{ 0x3292fc6f, "phy_modify" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x3fc60d52, "phy_mac_interrupt" },
	{ 0xbe85254, "pci_alloc_irq_vectors_affinity" },
	{ 0x16164d7f, "netif_schedule_queue" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0xe5f5e507, "pci_set_master" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6e3803b2, "phy_print_status" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xebdba1e1, "phy_start_aneg" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xb10f64c5, "phy_set_asym_pause" },
	{ 0xc85d6387, "phy_ethtool_get_eee" },
	{ 0xd531ae02, "devm_mdiobus_alloc_size" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0xdd64e639, "strscpy" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x74f5ffde, "phy_support_asym_pause" },
	{ 0xf22c121d, "pci_write_config_byte" },
	{ 0x5359237b, "phy_get_pause" },
	{ 0x95fcd233, "mdiobus_write" },
	{ 0x72fb33f0, "phy_select_page" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd7b1874c, "phy_write_paged" },
	{ 0x33c8cc41, "mdiobus_get_phy" },
	{ 0x7ba01658, "phy_ethtool_nway_reset" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x95c9eed8, "phy_read_mmd" },
	{ 0x3ccb9773, "phy_init_hw" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x2eb4bbc4, "pcie_set_readrq" },
	{ 0xa1f6f55a, "__devm_mdiobus_register" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x51e2dac4, "netif_set_tso_max_size" },
	{ 0xf3a3e7e9, "phy_resume" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x477f777b, "pcim_iomap_table" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x62f52652, "napi_schedule_prep" },
	{ 0x715e50b, "napi_consume_skb" },
	{ 0x1777343a, "napi_disable" },
	{ 0x24ccdf71, "phy_stop" },
	{ 0xcc3fcd09, "phy_do_ioctl_running" },
	{ 0xdb6bea24, "netif_set_tso_max_segs" },
	{ 0xcf3b69b3, "netdev_stats_to_stats64" },
	{ 0x787a7e9e, "pcim_enable_device" },
	{ 0x82d27d3f, "skb_clone_tx_timestamp" },
	{ 0x395a4562, "phy_disconnect" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6a528adb, "ethtool_op_get_ts_info" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008167sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010FFd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008169sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000C107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00000116sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000024bc*sc*i*");
MODULE_ALIAS("pci:v00000001d00008168sv*sd00002410bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008125sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00003000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "457577D8B7438B86FC84885");
