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

SYMBOL_CRC(iio_bus_type, 0xa14afd3e, "");
SYMBOL_CRC(iio_device_id, 0x894a8938, "_gpl");
SYMBOL_CRC(iio_buffer_enabled, 0x1c3c257c, "_gpl");
SYMBOL_CRC(iio_get_debugfs_dentry, 0xa14bb7b8, "_gpl");
SYMBOL_CRC(iio_read_const_attr, 0x7246f0f1, "");
SYMBOL_CRC(iio_device_set_clock, 0xc1552cde, "");
SYMBOL_CRC(iio_device_get_clock, 0xd1b32a94, "");
SYMBOL_CRC(iio_get_time_ns, 0xfe70805b, "");
SYMBOL_CRC(iio_enum_available_read, 0x9122d383, "_gpl");
SYMBOL_CRC(iio_enum_read, 0x5f42fa74, "_gpl");
SYMBOL_CRC(iio_enum_write, 0x608f4f8a, "_gpl");
SYMBOL_CRC(iio_show_mount_matrix, 0x9eee3730, "_gpl");
SYMBOL_CRC(iio_read_mount_matrix, 0xa531c586, "");
SYMBOL_CRC(iio_format_value, 0x4dce7dd4, "_gpl");
SYMBOL_CRC(iio_str_to_fixpoint, 0x26f6b499, "_gpl");
SYMBOL_CRC(iio_device_alloc, 0x9f720c3f, "");
SYMBOL_CRC(iio_device_free, 0xa43620d3, "");
SYMBOL_CRC(devm_iio_device_alloc, 0x156d71c9, "_gpl");
SYMBOL_CRC(__iio_device_register, 0x695daad2, "");
SYMBOL_CRC(iio_device_unregister, 0xa207ec7d, "");
SYMBOL_CRC(__devm_iio_device_register, 0xb43d639b, "_gpl");
SYMBOL_CRC(iio_device_claim_direct_mode, 0xdd4a7853, "_gpl");
SYMBOL_CRC(iio_device_release_direct_mode, 0x6a225370, "_gpl");
SYMBOL_CRC(iio_device_claim_buffer_mode, 0x5a0871c8, "_gpl");
SYMBOL_CRC(iio_device_release_buffer_mode, 0xed605aeb, "_gpl");
SYMBOL_CRC(iio_device_get_current_mode, 0x75064973, "_gpl");
SYMBOL_CRC(iio_push_event, 0xb235aaee, "");
SYMBOL_CRC(iio_map_array_register, 0x810cd090, "_gpl");
SYMBOL_CRC(iio_map_array_unregister, 0x83302f18, "_gpl");
SYMBOL_CRC(devm_iio_map_array_register, 0x45a4717a, "_gpl");
SYMBOL_CRC(fwnode_iio_channel_get_by_name, 0x59c3e3f2, "_gpl");
SYMBOL_CRC(iio_channel_get, 0x6f36ba25, "_gpl");
SYMBOL_CRC(iio_channel_release, 0x290f2047, "_gpl");
SYMBOL_CRC(devm_iio_channel_get, 0xe291cdb9, "_gpl");
SYMBOL_CRC(devm_fwnode_iio_channel_get_by_name, 0x2f397bd5, "_gpl");
SYMBOL_CRC(iio_channel_get_all, 0xa59da4e4, "_gpl");
SYMBOL_CRC(iio_channel_release_all, 0x4269f3e8, "_gpl");
SYMBOL_CRC(devm_iio_channel_get_all, 0x8308bb6b, "_gpl");
SYMBOL_CRC(iio_read_channel_raw, 0xf73614bb, "_gpl");
SYMBOL_CRC(iio_read_channel_average_raw, 0x771ae85e, "_gpl");
SYMBOL_CRC(iio_convert_raw_to_processed, 0x9d0c73e2, "_gpl");
SYMBOL_CRC(iio_read_channel_attribute, 0x2a6d076f, "_gpl");
SYMBOL_CRC(iio_read_channel_offset, 0x91e40a39, "_gpl");
SYMBOL_CRC(iio_read_channel_processed_scale, 0xccd4006d, "_gpl");
SYMBOL_CRC(iio_read_channel_processed, 0x2429b35f, "_gpl");
SYMBOL_CRC(iio_read_channel_scale, 0x02264cdc, "_gpl");
SYMBOL_CRC(iio_read_avail_channel_attribute, 0xc20304b4, "_gpl");
SYMBOL_CRC(iio_read_avail_channel_raw, 0x3ff5ee1a, "_gpl");
SYMBOL_CRC(iio_read_max_channel_raw, 0xea95dbb8, "_gpl");
SYMBOL_CRC(iio_get_channel_type, 0x25629ff0, "_gpl");
SYMBOL_CRC(iio_write_channel_attribute, 0xde040cfc, "_gpl");
SYMBOL_CRC(iio_write_channel_raw, 0x0c79bde8, "_gpl");
SYMBOL_CRC(iio_get_channel_ext_info_count, 0x358892e0, "_gpl");
SYMBOL_CRC(iio_read_channel_ext_info, 0x1e5fd5ca, "_gpl");
SYMBOL_CRC(iio_write_channel_ext_info, 0x712b5442, "_gpl");
SYMBOL_CRC(iio_pop_from_buffer, 0xb6601634, "_gpl");
SYMBOL_CRC(iio_buffer_init, 0xb01f9066, "");
SYMBOL_CRC(iio_update_buffers, 0x20fec40e, "_gpl");
SYMBOL_CRC(iio_validate_scan_mask_onehot, 0xde7e45e2, "_gpl");
SYMBOL_CRC(iio_push_to_buffers, 0xb29f2933, "_gpl");
SYMBOL_CRC(iio_push_to_buffers_with_ts_unaligned, 0x261c65c2, "_gpl");
SYMBOL_CRC(iio_buffer_get, 0x1ceadd45, "_gpl");
SYMBOL_CRC(iio_buffer_put, 0xbae1f931, "_gpl");
SYMBOL_CRC(iio_device_attach_buffer, 0x53254e36, "_gpl");
SYMBOL_CRC(iio_trigger_register, 0x68e05d9e, "");
SYMBOL_CRC(iio_trigger_unregister, 0x815a2078, "");
SYMBOL_CRC(iio_trigger_set_immutable, 0x8e9bf59e, "");
SYMBOL_CRC(iio_trigger_poll, 0x6e140a34, "");
SYMBOL_CRC(iio_trigger_generic_data_rdy_poll, 0x2d6bcdcb, "");
SYMBOL_CRC(iio_trigger_poll_chained, 0x17705842, "");
SYMBOL_CRC(iio_trigger_notify_done, 0x8247207e, "");
SYMBOL_CRC(iio_pollfunc_store_time, 0xdf76bbeb, "");
SYMBOL_CRC(iio_alloc_pollfunc, 0x803cdcad, "_gpl");
SYMBOL_CRC(iio_dealloc_pollfunc, 0x01ae147c, "_gpl");
SYMBOL_CRC(__iio_trigger_alloc, 0x5714d6f1, "");
SYMBOL_CRC(iio_trigger_free, 0xe3a84828, "");
SYMBOL_CRC(__devm_iio_trigger_alloc, 0xfdf6c71a, "_gpl");
SYMBOL_CRC(devm_iio_trigger_register, 0x3cc89633, "_gpl");
SYMBOL_CRC(iio_trigger_using_own, 0x9f45316a, "");
SYMBOL_CRC(iio_trigger_validate_own_device, 0xc1e47ff8, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc1514a3b, "free_irq" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x2a6a869d, "cdev_device_del" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x40a59af4, "fwnode_property_get_reference_args" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9303f7be, "__module_get" },
	{ 0xf7dca34a, "get_device" },
	{ 0x13a42f12, "fwnode_property_match_string" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xf124bd15, "fwnode_get_parent" },
	{ 0x28eced4f, "devres_add" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x6d11488, "__bitmap_equal" },
	{ 0x3a884074, "device_match_fwnode" },
	{ 0xa510e5d3, "device_set_node" },
	{ 0x92997ed8, "_printk" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x13575562, "cdev_device_add" },
	{ 0x1000e51, "schedule" },
	{ 0xefbf9d3, "anon_inode_getfd" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0x1c5b1f28, "irq_free_descs" },
	{ 0xb4b7ee3e, "handle_simple_irq" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xcc793c4a, "module_put" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0xd9f49540, "compat_ptr_ioctl" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x314dd00c, "bus_unregister" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x394f4efd, "simple_open" },
	{ 0xd4084a9a, "bus_find_device" },
	{ 0x7bbe500c, "device_add" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x587b0954, "kvasprintf" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0xafeaad74, "device_property_read_string_array" },
	{ 0xdc510a8f, "__devres_alloc_node" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3221df67, "__bitmap_subset" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x402beac3, "device_del" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x48315c1c, "__irq_alloc_descs" },
	{ 0xc116761e, "fwnode_property_read_string" },
	{ 0x135ff00b, "fwnode_property_present" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe4f7eef7, "fwnode_get_next_parent" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb9f9ea8a, "devm_krealloc" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x177a77a6, "__irq_set_handler" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x1d877bf, "fwnode_handle_put" },
	{ 0x7e482df9, "irq_set_chip" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xeb280106, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "58CA181168B25835194A66E");
