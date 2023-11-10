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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(__mt76u_vendor_request, 0x312bd16c, "_gpl");
SYMBOL_CRC(mt76u_vendor_request, 0x496aa88c, "_gpl");
SYMBOL_CRC(___mt76u_rr, 0x1cc48e3e, "_gpl");
SYMBOL_CRC(___mt76u_wr, 0x1f6f6685, "_gpl");
SYMBOL_CRC(mt76u_read_copy, 0xc6d7e0dc, "_gpl");
SYMBOL_CRC(mt76u_single_wr, 0xf22bcc8c, "_gpl");
SYMBOL_CRC(mt76u_alloc_mcu_queue, 0x7aa9b0f5, "_gpl");
SYMBOL_CRC(mt76u_stop_rx, 0xdb976afe, "_gpl");
SYMBOL_CRC(mt76u_resume_rx, 0x6588e37c, "_gpl");
SYMBOL_CRC(mt76u_stop_tx, 0x6c06db4e, "_gpl");
SYMBOL_CRC(mt76u_queues_deinit, 0x53cd83f9, "_gpl");
SYMBOL_CRC(mt76u_alloc_queues, 0x2fbf113b, "_gpl");
SYMBOL_CRC(__mt76u_init, 0x8b5ffc61, "_gpl");
SYMBOL_CRC(mt76u_init, 0x8f507f30, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x86adafd6, "skb_add_rx_frag" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa49be482, "mt76_has_tx_pending" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x84b2bed2, "kthread_park" },
	{ 0xa59295f, "sched_set_fifo_low" },
	{ 0x7e19af4a, "mt76_tx_status_check" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x2de125c0, "page_frag_alloc_align" },
	{ 0x517d9b91, "kthread_unpark" },
	{ 0x36fa7fdb, "build_skb" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xfd48fb29, "usb_poison_urb" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x2b7ae74c, "usb_unpoison_urb" },
	{ 0xc6634315, "mt76_ac_to_hwq" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x7847398c, "mt76_queue_tx_complete" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x7de4bde7, "bpf_trace_run3" },
	{ 0x15ab450d, "__page_frag_cache_drain" },
	{ 0xee198fca, "mt76_rx_poll_complete" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1ec57b4f, "__mt76_worker_fn" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x5d440637, "usb_init_urb" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x237b7715, "skb_to_sgvec" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mt76");


MODULE_INFO(srcversion, "AF367BA27120C1ECD0D8DFD");
