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

SYMBOL_CRC(snd_pcm_format_name, 0xa286a234, "_gpl");
SYMBOL_CRC(snd_pcm_new_stream, 0x70ed96e2, "");
SYMBOL_CRC(snd_pcm_new, 0xf25f39f5, "");
SYMBOL_CRC(snd_pcm_new_internal, 0x0f6e769a, "");
SYMBOL_CRC(snd_pcm_notify, 0x7d4cbf7e, "");
SYMBOL_CRC(snd_pcm_stream_lock, 0x40fc74e1, "_gpl");
SYMBOL_CRC(snd_pcm_stream_unlock, 0xfa00ebcb, "_gpl");
SYMBOL_CRC(snd_pcm_stream_lock_irq, 0xd0d695bf, "_gpl");
SYMBOL_CRC(snd_pcm_stream_unlock_irq, 0x7aabd10b, "_gpl");
SYMBOL_CRC(_snd_pcm_stream_lock_irqsave, 0xbaea8afb, "_gpl");
SYMBOL_CRC(_snd_pcm_stream_lock_irqsave_nested, 0x7bc670ab, "_gpl");
SYMBOL_CRC(snd_pcm_stream_unlock_irqrestore, 0x8b02f66d, "_gpl");
SYMBOL_CRC(snd_pcm_hw_refine, 0x68c644bd, "");
SYMBOL_CRC(snd_pcm_stop, 0xd927147d, "");
SYMBOL_CRC(snd_pcm_stop_xrun, 0x1c04ae7c, "_gpl");
SYMBOL_CRC(snd_pcm_suspend_all, 0x6fc0e4b6, "");
SYMBOL_CRC(snd_pcm_release_substream, 0xbcb1943c, "");
SYMBOL_CRC(snd_pcm_open_substream, 0x26029627, "");
SYMBOL_CRC(snd_pcm_kernel_ioctl, 0x1eed5f14, "");
SYMBOL_CRC(snd_pcm_lib_default_mmap, 0xe1641ce4, "_gpl");
SYMBOL_CRC(snd_pcm_mmap_data, 0x9576a7f0, "");
SYMBOL_CRC(snd_pcm_set_ops, 0x10c6cb91, "");
SYMBOL_CRC(snd_pcm_set_sync, 0xfd1681bc, "");
SYMBOL_CRC(snd_interval_refine, 0x04cda566, "");
SYMBOL_CRC(snd_interval_ratnum, 0xac437f7b, "");
SYMBOL_CRC(snd_interval_list, 0x94098ff8, "");
SYMBOL_CRC(snd_interval_ranges, 0x503bd137, "");
SYMBOL_CRC(snd_pcm_hw_rule_add, 0x0853da64, "");
SYMBOL_CRC(snd_pcm_hw_constraint_mask64, 0x4e2698a4, "");
SYMBOL_CRC(snd_pcm_hw_constraint_integer, 0xfef3df9c, "");
SYMBOL_CRC(snd_pcm_hw_constraint_minmax, 0x468e478d, "");
SYMBOL_CRC(snd_pcm_hw_constraint_list, 0xb413832c, "");
SYMBOL_CRC(snd_pcm_hw_constraint_ranges, 0x3bdcc907, "");
SYMBOL_CRC(snd_pcm_hw_constraint_ratnums, 0xb98a6b0b, "");
SYMBOL_CRC(snd_pcm_hw_constraint_ratdens, 0x91f16a42, "");
SYMBOL_CRC(snd_pcm_hw_constraint_msbits, 0x1f0870c0, "");
SYMBOL_CRC(snd_pcm_hw_constraint_step, 0x2462b1a9, "");
SYMBOL_CRC(snd_pcm_hw_constraint_pow2, 0x3b2b07d5, "");
SYMBOL_CRC(snd_pcm_hw_rule_noresample, 0x9f6baa9f, "");
SYMBOL_CRC(_snd_pcm_hw_params_any, 0x0283dfe3, "");
SYMBOL_CRC(snd_pcm_hw_param_value, 0x52e3e4a5, "");
SYMBOL_CRC(_snd_pcm_hw_param_setempty, 0x39bf9301, "");
SYMBOL_CRC(snd_pcm_hw_param_first, 0xf1f45acc, "");
SYMBOL_CRC(snd_pcm_hw_param_last, 0xfc9335f3, "");
SYMBOL_CRC(snd_pcm_lib_ioctl, 0x4c1a8cca, "");
SYMBOL_CRC(snd_pcm_period_elapsed_under_stream_lock, 0xb107baf9, "");
SYMBOL_CRC(snd_pcm_period_elapsed, 0xb1b572d5, "");
SYMBOL_CRC(__snd_pcm_lib_xfer, 0x81be380e, "");
SYMBOL_CRC(snd_pcm_std_chmaps, 0x04e1b99f, "_gpl");
SYMBOL_CRC(snd_pcm_alt_chmaps, 0x09e913c1, "_gpl");
SYMBOL_CRC(snd_pcm_add_chmap_ctls, 0xd2e5e313, "_gpl");
SYMBOL_CRC(snd_pcm_format_signed, 0x1d027e4b, "");
SYMBOL_CRC(snd_pcm_format_unsigned, 0xa61aa028, "");
SYMBOL_CRC(snd_pcm_format_linear, 0x6ef8fcd8, "");
SYMBOL_CRC(snd_pcm_format_little_endian, 0x3796bdcc, "");
SYMBOL_CRC(snd_pcm_format_big_endian, 0x4f816e9b, "");
SYMBOL_CRC(snd_pcm_format_width, 0xe56a9336, "");
SYMBOL_CRC(snd_pcm_format_physical_width, 0x68a24153, "");
SYMBOL_CRC(snd_pcm_format_size, 0x834dc955, "");
SYMBOL_CRC(snd_pcm_format_silence_64, 0x650f8603, "");
SYMBOL_CRC(snd_pcm_format_set_silence, 0x5e7f4920, "");
SYMBOL_CRC(snd_pcm_hw_limit_rates, 0x69255f54, "");
SYMBOL_CRC(snd_pcm_rate_to_rate_bit, 0xb9638db4, "");
SYMBOL_CRC(snd_pcm_rate_bit_to_rate, 0xff6104d0, "");
SYMBOL_CRC(snd_pcm_rate_mask_intersect, 0xab8bc1a2, "_gpl");
SYMBOL_CRC(snd_pcm_rate_range_to_bits, 0x8d864069, "_gpl");
SYMBOL_CRC(snd_pcm_lib_preallocate_free_for_all, 0x3222e294, "");
SYMBOL_CRC(snd_pcm_lib_preallocate_pages, 0xf3762523, "");
SYMBOL_CRC(snd_pcm_lib_preallocate_pages_for_all, 0x55851e9b, "");
SYMBOL_CRC(snd_pcm_set_managed_buffer, 0xabb897e6, "");
SYMBOL_CRC(snd_pcm_set_managed_buffer_all, 0x143d675d, "");
SYMBOL_CRC(snd_pcm_lib_malloc_pages, 0x056d7964, "");
SYMBOL_CRC(snd_pcm_lib_free_pages, 0xa9a6ad41, "");
SYMBOL_CRC(_snd_pcm_lib_alloc_vmalloc_buffer, 0xfd99c902, "");
SYMBOL_CRC(snd_pcm_lib_free_vmalloc_buffer, 0x01ff904e, "");
SYMBOL_CRC(snd_pcm_lib_get_vmalloc_page, 0x8eb6c22f, "");
SYMBOL_CRC(snd_dma_alloc_dir_pages, 0x23537ce5, "");
SYMBOL_CRC(snd_dma_alloc_pages_fallback, 0x4a8408f5, "");
SYMBOL_CRC(snd_dma_free_pages, 0x20ed8a68, "");
SYMBOL_CRC(snd_devm_alloc_dir_pages, 0x2923fb2f, "_gpl");
SYMBOL_CRC(snd_dma_buffer_mmap, 0x8f25ccce, "");
SYMBOL_CRC(snd_dma_buffer_sync, 0x98cc8e82, "_gpl");
SYMBOL_CRC(snd_sgbuf_get_addr, 0x1561f00a, "");
SYMBOL_CRC(snd_sgbuf_get_page, 0x1d88c015, "");
SYMBOL_CRC(snd_sgbuf_get_chunk_size, 0xaefc2f3e, "");
SYMBOL_CRC(snd_pcm_hw_constraint_eld, 0xfa38d847, "_gpl");
SYMBOL_CRC(snd_pcm_create_iec958_consumer_default, 0x649892e8, "_gpl");
SYMBOL_CRC(snd_pcm_fill_iec958_consumer, 0x5cd65165, "_gpl");
SYMBOL_CRC(snd_pcm_fill_iec958_consumer_hw_params, 0x5c407196, "_gpl");
SYMBOL_CRC(snd_pcm_create_iec958_consumer, 0xeeb6bf8c, "");
SYMBOL_CRC(snd_pcm_create_iec958_consumer_hw_params, 0x11eba48e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x4754bded, "dma_can_mmap" },
	{ 0x1425e33, "try_module_get" },
	{ 0xe9182752, "snd_info_register" },
	{ 0xa9f96f2, "snd_info_create_module_entry" },
	{ 0xf854d979, "snd_ctl_unregister_ioctl_compat" },
	{ 0x991da2cb, "param_ops_ulong" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0x76f0cd8e, "vmalloc_to_page" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x2c91e17c, "vm_get_page_prot" },
	{ 0x36869dff, "snd_timer_notify" },
	{ 0x721ba658, "snd_ctl_get_preferred_subdevice" },
	{ 0x682547e2, "dma_vunmap_noncontiguous" },
	{ 0xada31e57, "gen_pool_dma_alloc_align" },
	{ 0x9657046b, "dma_mmap_pages" },
	{ 0x1809de45, "dma_sync_sg_for_cpu" },
	{ 0xf5aa4962, "dma_free_pages" },
	{ 0x631baa5b, "dma_sync_single_for_device" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xdc4aa97a, "snd_timer_interrupt" },
	{ 0x8360c53b, "snd_info_free_entry" },
	{ 0x4829a47e, "memcpy" },
	{ 0x819df5d2, "remap_pfn_range" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x37a0cba, "kfree" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0xdf0ca3f4, "cpu_latency_qos_request_active" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x9fb11fac, "snd_fasync_helper" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xfd5957ab, "snd_ctl_remove" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x28eced4f, "devres_add" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf30d2e44, "dma_alloc_pages" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x4a5512d2, "snd_ctl_register_ioctl" },
	{ 0x5157fceb, "snd_card_file_add" },
	{ 0xcc793c4a, "module_put" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe2bce892, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x3b64bfce, "dma_vmap_noncontiguous" },
	{ 0x7c9ca58f, "__sg_page_iter_next" },
	{ 0x8f595b11, "snd_major" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xdc510a8f, "__devres_alloc_node" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xfb0ebc24, "dma_need_sync" },
	{ 0x8c31bb98, "snd_unregister_device" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x17efdd24, "snd_timer_new" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x21f8804, "snd_device_new" },
	{ 0x271438e, "dma_sync_single_for_cpu" },
	{ 0x58dc77b9, "dma_sync_sg_for_device" },
	{ 0xdcb764ad, "memset" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x775feec3, "snd_ctl_unregister_ioctl" },
	{ 0x668b19a1, "down_read" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xde77a6be, "nonseekable_open" },
	{ 0x5af762f1, "snd_fasync_free" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x60a6f476, "dma_free_noncontiguous" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7b0a4aa6, "dma_alloc_noncontiguous" },
	{ 0x87d3a01f, "dma_mmap_noncontiguous" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x87354e26, "of_gen_pool_get" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x135cafbc, "snd_ctl_register_ioctl_compat" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc5964c3, "snd_info_create_card_entry" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x3521c5ef, "snd_device_initialize" },
	{ 0xff41f733, "snd_power_wait" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x9fc8ccf4, "dma_mmap_attrs" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf5f0f3fa, "pid_vnr" },
	{ 0x9abd5901, "snd_device_free" },
	{ 0x75f40f00, "snd_card_file_remove" },
	{ 0xf8f2a4eb, "snd_kill_fasync" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xea124bd1, "gcd" },
	{ 0x7602a4e, "remap_vmalloc_range" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x58afcfe4, "snd_device_register" },
	{ 0x564b4d47, "snd_register_device" },
	{ 0x53b954a2, "up_read" },
	{ 0xf32f0db2, "put_pid" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-timer");


MODULE_INFO(srcversion, "FAE4AFD60747FBBC4F4C4AA");
