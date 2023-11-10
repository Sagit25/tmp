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
	{ 0x46ff300c, "ieee80211_get_response_rate" },
	{ 0x1cf75d45, "ieee80211_get_tkip_p1k_iv" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xada36cc7, "bcma_core_disable" },
	{ 0xc385c121, "ssb_device_is_enabled" },
	{ 0x48471741, "skb_put" },
	{ 0xd0fd7085, "hwrng_unregister" },
	{ 0x1e55d28f, "ssb_pmu_set_ldo_paref" },
	{ 0x972a3723, "consume_skb" },
	{ 0x921de0a7, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x602135ad, "ssb_bus_may_powerdown" },
	{ 0x6603d2cc, "ieee80211_free_hw" },
	{ 0xa951a544, "dma_unmap_page_attrs" },
	{ 0x74a05018, "request_firmware" },
	{ 0x631baa5b, "dma_sync_single_for_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x771d5acf, "led_classdev_unregister" },
	{ 0xef9abb20, "ieee80211_register_hw" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3c7c3b9d, "__ieee80211_get_radio_led_name" },
	{ 0x589bd81c, "ieee80211_generic_frame_duration" },
	{ 0xf3039661, "ieee80211_wake_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x52ba7a01, "ssb_set_devtypedata" },
	{ 0x3ee625a5, "__ieee80211_get_tx_led_name" },
	{ 0xe0c4e14d, "hwrng_register" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9cb64679, "bcma_core_pll_ctl" },
	{ 0x5a33c86b, "bcma_driver_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc0c60127, "bcma_core_enable" },
	{ 0x74cb3e67, "ssb_device_disable" },
	{ 0x5ea4ab58, "ssb_pmu_set_ldo_voltage" },
	{ 0x9fbd2905, "bcma_core_is_enabled" },
	{ 0xb9155f06, "__ieee80211_get_rx_led_name" },
	{ 0x454f280c, "bcma_chipco_gpio_control" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x9a575e71, "bcma_host_pci_irq_ctl" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0x7996285a, "ieee80211_queue_delayed_work" },
	{ 0x72a217ee, "request_firmware_nowait" },
	{ 0xc27ad2f3, "ieee80211_ctstoself_get" },
	{ 0x121445a5, "skb_pull" },
	{ 0x1b01880, "__bcma_driver_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x25fa67bf, "bcma_core_set_clockmode" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x537f8d09, "ssb_device_enable" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xac6775d6, "ieee80211_wake_queues" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x61685b5a, "ieee80211_free_txskb" },
	{ 0x2e077701, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca430af1, "bcma_core_dma_translation" },
	{ 0x69c1efbc, "ieee80211_alloc_hw_nm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb62bf178, "ssb_driver_unregister" },
	{ 0x271438e, "dma_sync_single_for_cpu" },
	{ 0xdcb764ad, "memset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xae021234, "ieee80211_tx_status" },
	{ 0x30259cac, "ieee80211_stop_queue" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0xdc58f5d4, "param_ops_string" },
	{ 0xc0657ae9, "__ssb_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0xdfd6c09f, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x9ac598cb, "__ieee80211_get_assoc_led_name" },
	{ 0xdd64e639, "strscpy" },
	{ 0x121cad58, "wiphy_rfkill_start_polling" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0x60b94959, "bcma_host_pci_up" },
	{ 0x965f9791, "ssb_bus_powerup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xd6e7ca0b, "ieee80211_unregister_hw" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9a099bc2, "ieee80211_beacon_get_tim" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x6c3b3999, "ssb_commit_settings" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x49c5acae, "ieee80211_rts_get" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xf3d1aabb, "bcma_host_pci_down" },
	{ 0xc673cb62, "ieee80211_queue_work" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xca4f3081, "bcma_pmu_spuravoid_pllupdate" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0xb4a4589b, "ssb_dma_translation" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0xafecdfd, "ieee80211_rx_napi" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cfg80211,mac80211,bcma,ssb");

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "872367D6B8BFCBB3FBCE06E");
