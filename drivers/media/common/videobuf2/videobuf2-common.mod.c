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

SYMBOL_CRC(vb2_buffer_in_use, 0x57952240, "");
SYMBOL_CRC(vb2_core_querybuf, 0x72d5c91e, "_gpl");
SYMBOL_CRC(vb2_verify_memory_type, 0x600e54ef, "");
SYMBOL_CRC(vb2_core_reqbufs, 0x915ba293, "_gpl");
SYMBOL_CRC(vb2_core_create_bufs, 0xd8294515, "_gpl");
SYMBOL_CRC(vb2_plane_vaddr, 0xffada62d, "_gpl");
SYMBOL_CRC(vb2_plane_cookie, 0x9a6a07f1, "_gpl");
SYMBOL_CRC(vb2_buffer_done, 0x2b222be1, "_gpl");
SYMBOL_CRC(vb2_discard_done, 0x58c726b4, "_gpl");
SYMBOL_CRC(vb2_request_object_is_buffer, 0x1ab87598, "_gpl");
SYMBOL_CRC(vb2_request_buffer_cnt, 0xfa5b2749, "_gpl");
SYMBOL_CRC(vb2_core_prepare_buf, 0x6ae2697c, "_gpl");
SYMBOL_CRC(vb2_core_qbuf, 0x82036756, "_gpl");
SYMBOL_CRC(vb2_wait_for_all_buffers, 0xd78d1133, "_gpl");
SYMBOL_CRC(vb2_core_dqbuf, 0x3aeaecbf, "_gpl");
SYMBOL_CRC(vb2_core_streamon, 0x91ed2506, "_gpl");
SYMBOL_CRC(vb2_queue_error, 0x20bcae4a, "_gpl");
SYMBOL_CRC(vb2_core_streamoff, 0xbeab66f0, "_gpl");
SYMBOL_CRC(vb2_core_expbuf_dmabuf, 0xd550a0ee, "_gpl");
SYMBOL_CRC(vb2_core_expbuf, 0xdc90eae2, "_gpl");
SYMBOL_CRC(vb2_mmap, 0x18da83af, "_gpl");
SYMBOL_CRC(vb2_core_queue_init, 0x54ead09e, "_gpl");
SYMBOL_CRC(vb2_core_queue_release, 0x0ade08fe, "_gpl");
SYMBOL_CRC(vb2_core_poll, 0xbd71d515, "_gpl");
SYMBOL_CRC(vb2_read, 0xc160d280, "_gpl");
SYMBOL_CRC(vb2_write, 0x9c37dbad, "_gpl");
SYMBOL_CRC(vb2_thread_start, 0x2d33f06d, "_gpl");
SYMBOL_CRC(vb2_thread_stop, 0xeea0edb0, "_gpl");
SYMBOL_CRC(get_vaddr_frames, 0xc2d9e090, "");
SYMBOL_CRC(put_vaddr_frames, 0x1b700d37, "");
SYMBOL_CRC(frame_vector_to_pages, 0xc5e5573a, "");
SYMBOL_CRC(frame_vector_to_pfns, 0xdffb744b, "");
SYMBOL_CRC(frame_vector_create, 0x065246b8, "");
SYMBOL_CRC(frame_vector_destroy, 0x1d5f9555, "");
SYMBOL_CRC(__tracepoint_vb2_buf_done, 0x24451812, "_gpl");
SYMBOL_CRC(__traceiter_vb2_buf_done, 0x03496ef9, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_buf_done, 0xc7b45aa4, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_buf_queue, 0x2593782f, "_gpl");
SYMBOL_CRC(__traceiter_vb2_buf_queue, 0x656a5aa8, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_buf_queue, 0x07729fd4, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_dqbuf, 0xf703a3f9, "_gpl");
SYMBOL_CRC(__traceiter_vb2_dqbuf, 0xc6349d5f, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_dqbuf, 0xb9d2df39, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_qbuf, 0x630b24d3, "_gpl");
SYMBOL_CRC(__traceiter_vb2_qbuf, 0x21f6b54f, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_qbuf, 0xb6f4b031, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcb5d0615, "pin_user_pages_fast" },
	{ 0x52b42b77, "media_request_object_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0xce496eec, "media_request_object_unbind" },
	{ 0x578b6b67, "unpin_user_pages" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x779068b, "media_request_object_put" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x991c554c, "v4l_vb2q_enable_media_source" },
	{ 0xb00fd319, "media_request_put" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdf48bbcd, "dma_buf_get" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x6b4d7fc, "dma_buf_put" },
	{ 0x3940bfd8, "media_request_object_bind" },
	{ 0xad10f944, "dma_buf_fd" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc8c41a62, "freezing_slow_path" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mc,videodev");


MODULE_INFO(srcversion, "4475D0A745C16187BD5B32F");
