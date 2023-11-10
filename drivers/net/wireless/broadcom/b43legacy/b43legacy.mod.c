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
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc385c121, "ssb_device_is_enabled" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x48471741, "skb_put" },
	{ 0xd0fd7085, "hwrng_unregister" },
	{ 0x77dc5d0d, "debugfs_real_fops" },
	{ 0x972a3723, "consume_skb" },
	{ 0x921de0a7, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x602135ad, "ssb_bus_may_powerdown" },
	{ 0x6603d2cc, "ieee80211_free_hw" },
	{ 0xa951a544, "dma_unmap_page_attrs" },
	{ 0x74a05018, "request_firmware" },
	{ 0x96848186, "scnprintf" },
	{ 0x631baa5b, "dma_sync_single_for_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x771d5acf, "led_classdev_unregister" },
	{ 0xef9abb20, "ieee80211_register_hw" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3c7c3b9d, "__ieee80211_get_radio_led_name" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x589bd81c, "ieee80211_generic_frame_duration" },
	{ 0xf3039661, "ieee80211_wake_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x52ba7a01, "ssb_set_devtypedata" },
	{ 0x3ee625a5, "__ieee80211_get_tx_led_name" },
	{ 0xe0c4e14d, "hwrng_register" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xd5ddc6e6, "ieee80211_tx_status_irqsafe" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x74cb3e67, "ssb_device_disable" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xb9155f06, "__ieee80211_get_rx_led_name" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7996285a, "ieee80211_queue_delayed_work" },
	{ 0x72a217ee, "request_firmware_nowait" },
	{ 0x49e3a4b, "debugfs_create_bool" },
	{ 0x394f4efd, "simple_open" },
	{ 0xc27ad2f3, "ieee80211_ctstoself_get" },
	{ 0x121445a5, "skb_pull" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x96267f10, "__dev_kfree_skb_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x537f8d09, "ssb_device_enable" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xac6775d6, "ieee80211_wake_queues" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x2e077701, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x69c1efbc, "ieee80211_alloc_hw_nm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xb62bf178, "ssb_driver_unregister" },
	{ 0x271438e, "dma_sync_single_for_cpu" },
	{ 0xdcb764ad, "memset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x30259cac, "ieee80211_stop_queue" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0xdc58f5d4, "param_ops_string" },
	{ 0xc0657ae9, "__ssb_driver_register" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xdfd6c09f, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x9ac598cb, "__ieee80211_get_assoc_led_name" },
	{ 0xdd64e639, "strscpy" },
	{ 0x121cad58, "wiphy_rfkill_start_polling" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0x965f9791, "ssb_bus_powerup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xd6e7ca0b, "ieee80211_unregister_hw" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9a099bc2, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x49c5acae, "ieee80211_rts_get" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xc673cb62, "ieee80211_queue_work" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0xb4a4589b, "ssb_dma_translation" },
	{ 0x9060fc6c, "ieee80211_rx_irqsafe" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cfg80211,ssb,mac80211");

MODULE_ALIAS("ssb:v4243id0812rev02*");
MODULE_ALIAS("ssb:v4243id0812rev04*");

MODULE_INFO(srcversion, "A61C2503883EE91CA40A792");
