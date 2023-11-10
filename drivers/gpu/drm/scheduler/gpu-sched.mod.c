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

SYMBOL_CRC(drm_sched_dependency_optimized, 0xcb67b8f8, "");
SYMBOL_CRC(drm_sched_fault, 0x4fd420ef, "");
SYMBOL_CRC(drm_sched_suspend_timeout, 0x0b48f184, "");
SYMBOL_CRC(drm_sched_resume_timeout, 0xd0a58217, "");
SYMBOL_CRC(drm_sched_increase_karma, 0xfa699a2e, "");
SYMBOL_CRC(drm_sched_reset_karma, 0x9706ff85, "");
SYMBOL_CRC(drm_sched_stop, 0x3dc2c100, "");
SYMBOL_CRC(drm_sched_start, 0x2b6fa4f5, "");
SYMBOL_CRC(drm_sched_resubmit_jobs, 0x8cd51191, "");
SYMBOL_CRC(drm_sched_resubmit_jobs_ext, 0xf75f731e, "");
SYMBOL_CRC(drm_sched_job_init, 0x5307a1b6, "");
SYMBOL_CRC(drm_sched_job_arm, 0x4d27fc42, "");
SYMBOL_CRC(drm_sched_job_add_dependency, 0x5e0aae07, "");
SYMBOL_CRC(drm_sched_job_add_implicit_dependencies, 0x97359c8a, "");
SYMBOL_CRC(drm_sched_job_cleanup, 0xb42843f6, "");
SYMBOL_CRC(drm_sched_pick_best, 0x7d4c585d, "");
SYMBOL_CRC(drm_sched_init, 0xf765487f, "");
SYMBOL_CRC(drm_sched_fini, 0x99e2be48, "");
SYMBOL_CRC(drm_sched_increase_karma_ext, 0x0f5b2dc8, "");
SYMBOL_CRC(to_drm_sched_fence, 0x808ad2ed, "");
SYMBOL_CRC(drm_sched_entity_init, 0xeda8a08d, "");
SYMBOL_CRC(drm_sched_entity_modify_sched, 0xa2e9105c, "");
SYMBOL_CRC(drm_sched_entity_flush, 0x429babbe, "");
SYMBOL_CRC(drm_sched_entity_fini, 0xb0f2e073, "");
SYMBOL_CRC(drm_sched_entity_destroy, 0x059fe3d8, "");
SYMBOL_CRC(drm_sched_entity_set_priority, 0x9daf73fc, "");
SYMBOL_CRC(drm_sched_entity_push_job, 0x5f7d2236, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8e21c9a1, "dma_fence_add_callback" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x84b2bed2, "kthread_park" },
	{ 0xa59295f, "sched_set_fifo_low" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x92997ed8, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdeb36c8b, "dma_resv_iter_next" },
	{ 0x3b20fb95, "dma_fence_remove_callback" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0x3d14056, "drm_dev_printk" },
	{ 0x517d9b91, "kthread_unpark" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x27e4ffed, "bpf_trace_run1" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x745a981, "xa_erase" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfa8bf0be, "dma_resv_iter_first" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "64A3D373BD3B1AA71FE6D34");
