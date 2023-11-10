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
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xf5ce0a22, "__skb_pad" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x275ae254, "simple_attr_open" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x3f26f22e, "bpf_trace_run4" },
	{ 0x8dad64f7, "debugfs_attr_write" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0x972a3723, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xa6257a2f, "complete" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0x6b8bf149, "netif_receive_skb_list" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x6603d2cc, "ieee80211_free_hw" },
	{ 0x74a05018, "request_firmware" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x86adafd6, "skb_add_rx_frag" },
	{ 0x1305adc9, "ieee80211_tx_status_ext" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xef9abb20, "ieee80211_register_hw" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0xa71c2ada, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf3039661, "ieee80211_wake_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x293f231f, "ieee80211_get_tx_rates" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x7f5370c6, "ieee80211_send_bar" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0xec80a4a6, "usb_reset_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x35c3640f, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x57827ec9, "debugfs_attr_read" },
	{ 0x7996285a, "ieee80211_queue_delayed_work" },
	{ 0x7ea31e0c, "devm_kmemdup" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0xea15f280, "simple_attr_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xab93c2ef, "seq_putc" },
	{ 0xfd48fb29, "usb_poison_urb" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xac6775d6, "ieee80211_wake_queues" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x61685b5a, "ieee80211_free_txskb" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x69c1efbc, "ieee80211_alloc_hw_nm" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xef2e213f, "bpf_trace_run9" },
	{ 0x999e462e, "ieee80211_rx_list" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x1fa115ba, "debugfs_create_u32" },
	{ 0xae021234, "ieee80211_tx_status" },
	{ 0x30259cac, "ieee80211_stop_queue" },
	{ 0x2ca5657c, "ieee80211_stop_queues" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x7de4bde7, "bpf_trace_run3" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd6e7ca0b, "ieee80211_unregister_hw" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe2820e8, "firmware_request_cache" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xb696a3e3, "debugfs_create_u8" },
	{ 0xb3c6f341, "single_open" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "59958773F681B87AFA1FC21");
