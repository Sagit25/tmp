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

SYMBOL_CRC(virtio_transport_deliver_tap_pkt, 0x9973f90a, "_gpl");
SYMBOL_CRC(virtio_transport_inc_tx_pkt, 0x586404de, "_gpl");
SYMBOL_CRC(virtio_transport_get_credit, 0x658a7d87, "_gpl");
SYMBOL_CRC(virtio_transport_put_credit, 0xe08a2987, "_gpl");
SYMBOL_CRC(virtio_transport_stream_dequeue, 0xec84b125, "_gpl");
SYMBOL_CRC(virtio_transport_seqpacket_dequeue, 0x10fbd3d1, "_gpl");
SYMBOL_CRC(virtio_transport_seqpacket_enqueue, 0x9d810a4d, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_dequeue, 0xd105accb, "_gpl");
SYMBOL_CRC(virtio_transport_stream_has_data, 0xd8827af6, "_gpl");
SYMBOL_CRC(virtio_transport_seqpacket_has_data, 0x0067e473, "_gpl");
SYMBOL_CRC(virtio_transport_stream_has_space, 0x74841b0f, "_gpl");
SYMBOL_CRC(virtio_transport_do_socket_init, 0xf2386bef, "_gpl");
SYMBOL_CRC(virtio_transport_notify_buffer_size, 0xc92ec731, "_gpl");
SYMBOL_CRC(virtio_transport_notify_poll_in, 0x689ab4bc, "_gpl");
SYMBOL_CRC(virtio_transport_notify_poll_out, 0x82fcdd00, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_init, 0x154e4da3, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_pre_block, 0x1eafa82c, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_pre_dequeue, 0x692832de, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_post_dequeue, 0xcbcfd215, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_init, 0xdd7fa124, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_pre_block, 0xabea3271, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_pre_enqueue, 0x1a3c52b8, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_post_enqueue, 0x27938477, "_gpl");
SYMBOL_CRC(virtio_transport_stream_rcvhiwat, 0x4c5a204b, "_gpl");
SYMBOL_CRC(virtio_transport_stream_is_active, 0x321890ba, "_gpl");
SYMBOL_CRC(virtio_transport_stream_allow, 0x03a81e69, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_bind, 0x588983ae, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_allow, 0xbabd30f5, "_gpl");
SYMBOL_CRC(virtio_transport_connect, 0xa0049b34, "_gpl");
SYMBOL_CRC(virtio_transport_shutdown, 0xffdf1c99, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_enqueue, 0x991dd935, "_gpl");
SYMBOL_CRC(virtio_transport_stream_enqueue, 0xe7671e67, "_gpl");
SYMBOL_CRC(virtio_transport_destruct, 0x72f4f0be, "_gpl");
SYMBOL_CRC(virtio_transport_release, 0x14a6dd35, "_gpl");
SYMBOL_CRC(virtio_transport_recv_pkt, 0xea374882, "_gpl");
SYMBOL_CRC(virtio_transport_free_pkt, 0x29b786a7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83e4a4ec, "vsock_enqueue_accept" },
	{ 0xbcacd7f6, "_copy_to_iter" },
	{ 0x8439735c, "vsock_insert_connected" },
	{ 0x48471741, "skb_put" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0xfe074898, "vsock_remove_sock" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0xcf525855, "vsock_deliver_tap" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x41810ca2, "bpf_trace_run8" },
	{ 0xf09dc05b, "sk_error_report" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0xf5565e32, "vsock_find_bound_socket" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3d4b0fca, "vsock_addr_init" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0xa28fcfcb, "vsock_stream_has_data" },
	{ 0xb8957aee, "vsock_find_connected_socket" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x41d1a870, "bpf_trace_run10" },
	{ 0x5c3ad0ba, "vsock_core_get_transport" },
	{ 0x518c4df6, "vsock_stream_has_space" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x6cbeec2d, "vsock_create_connected" },
	{ 0xc422a4b1, "vsock_assign_transport" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9eeda4a, "vsock_data_ready" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "773770668150E6B076DD903");
