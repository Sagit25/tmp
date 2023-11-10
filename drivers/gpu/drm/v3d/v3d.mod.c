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
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0x9f1b1ccb, "drm_open" },
	{ 0xa0c4cf2b, "rpi_firmware_clk_get_max_rate" },
	{ 0x5f7d2236, "drm_sched_entity_push_job" },
	{ 0x770d1ae6, "drm_poll" },
	{ 0x7840b35c, "drm_gem_shmem_vmap" },
	{ 0x7960e089, "drm_gem_shmem_get_sg_table" },
	{ 0x6b3e7cdd, "drm_syncobj_find" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x20978fb9, "idr_find" },
	{ 0x1190bf7a, "dma_resv_reserve_fences" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xb882b19b, "of_node_put" },
	{ 0xeda8a08d, "drm_sched_entity_init" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0xba852468, "drm_syncobj_find_fence" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0x3c919a3d, "drm_gem_prime_mmap" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0xcd81d07e, "drm_gem_shmem_create" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x55007ad8, "drm_gem_lock_reservations" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x87e643fb, "drm_gem_shmem_unpin" },
	{ 0xb42843f6, "drm_sched_job_cleanup" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x53481983, "dma_resv_add_fence" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x5307a1b6, "drm_sched_job_init" },
	{ 0x5e0aae07, "drm_sched_job_add_dependency" },
	{ 0xadda69dd, "rpi_firmware_get" },
	{ 0x605deb95, "drm_gem_prime_handle_to_fd" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x36e7a85a, "drm_gem_object_lookup" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x2b6fa4f5, "drm_sched_start" },
	{ 0x45cb22c6, "drm_syncobj_replace_fence" },
	{ 0xdfbd0314, "drm_gem_mmap" },
	{ 0x6ad1dbf8, "drm_ioctl" },
	{ 0x3d14056, "drm_dev_printk" },
	{ 0xe4c592bf, "drm_gem_prime_fd_to_handle" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x2fe8bb9, "drm_gem_shmem_vm_ops" },
	{ 0x537347b9, "drm_gem_shmem_vunmap" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x59fe3d8, "drm_sched_entity_destroy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0xe8d25f2c, "drm_debugfs_create_files" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x97359c8a, "drm_sched_job_add_implicit_dependencies" },
	{ 0x63e9296, "rpi_firmware_put" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x9843f4f0, "drm_read" },
	{ 0xb5902108, "bpf_trace_run5" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0xf765487f, "drm_sched_init" },
	{ 0x4d27fc42, "drm_sched_job_arm" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x99e2be48, "drm_sched_fini" },
	{ 0xd3379b7a, "rpi_firmware_find_node" },
	{ 0x250f80ed, "drm_gem_handle_create" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0xfd899ad9, "drm_gem_dma_resv_wait" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x36a2d760, "drm_dev_unregister" },
	{ 0x27e4ffed, "bpf_trace_run1" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x3dc2c100, "drm_sched_stop" },
	{ 0x4ac5ff1d, "__devm_drm_dev_alloc" },
	{ 0x4f99c64a, "drm_gem_shmem_print_info" },
	{ 0x33100e51, "drm_gem_shmem_prime_import_sg_table" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0x7364857d, "drm_gem_shmem_pin" },
	{ 0xbad0f1d8, "devm_platform_ioremap_resource_byname" },
	{ 0xfa699a2e, "drm_sched_increase_karma" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0x7261cab4, "__devm_reset_control_get" },
	{ 0x7de4bde7, "bpf_trace_run3" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0xe8f7a07c, "drm_gem_unlock_reservations" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x94b31dac, "drm_gem_shmem_get_pages_sgt" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8982520b, "platform_get_irq_optional" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8cd51191, "drm_sched_resubmit_jobs" },
	{ 0x22cb5fd5, "drm_gem_shmem_mmap" },
	{ 0x25379e73, "clk_set_min_rate" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0xd74de65a, "drm_gem_shmem_free" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x775ac972, "drm_compat_ioctl" },
	{ 0x926a1184, "drm_dev_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x900eb2e2, "drm_release" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm,gpu-sched,drm_shmem_helper");

MODULE_ALIAS("of:N*T*Cbrcm,2712-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,2712-v3dC*");
MODULE_ALIAS("of:N*T*Cbrcm,2711-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,2711-v3dC*");
MODULE_ALIAS("of:N*T*Cbrcm,7268-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,7268-v3dC*");
MODULE_ALIAS("of:N*T*Cbrcm,7278-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,7278-v3dC*");

MODULE_INFO(srcversion, "F8575C5EFE900BA1448BD39");
