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

SYMBOL_CRC(sata_port_ops, 0x4ff5dc22, "_gpl");
SYMBOL_CRC(ata_link_next, 0x7a62ec56, "_gpl");
SYMBOL_CRC(ata_dev_next, 0x4a8eb787, "_gpl");
SYMBOL_CRC(atapi_cmd_type, 0x8462cb62, "_gpl");
SYMBOL_CRC(ata_pack_xfermask, 0x3a15013b, "_gpl");
SYMBOL_CRC(ata_xfer_mask2mode, 0xc2368ea5, "_gpl");
SYMBOL_CRC(ata_xfer_mode2mask, 0xe77d5ef3, "_gpl");
SYMBOL_CRC(ata_xfer_mode2shift, 0x58db1176, "_gpl");
SYMBOL_CRC(ata_mode_string, 0x6a9e90af, "_gpl");
SYMBOL_CRC(ata_dev_classify, 0x5bcc0df7, "_gpl");
SYMBOL_CRC(ata_id_string, 0xccd86806, "_gpl");
SYMBOL_CRC(ata_id_c_string, 0xafddd545, "_gpl");
SYMBOL_CRC(ata_id_xfermask, 0x030cbca2, "_gpl");
SYMBOL_CRC(ata_pio_need_iordy, 0x9d18f2a7, "_gpl");
SYMBOL_CRC(ata_do_dev_read_id, 0x53f45b86, "_gpl");
SYMBOL_CRC(ata_cable_40wire, 0xaf6d4bfb, "_gpl");
SYMBOL_CRC(ata_cable_80wire, 0x0357866c, "_gpl");
SYMBOL_CRC(ata_cable_unknown, 0x72dc51e9, "_gpl");
SYMBOL_CRC(ata_cable_ignore, 0x62b1ef18, "_gpl");
SYMBOL_CRC(ata_cable_sata, 0x1ac84b98, "_gpl");
SYMBOL_CRC(ata_dev_pair, 0x13fd8b8f, "_gpl");
SYMBOL_CRC(ata_do_set_mode, 0xd6b4772a, "_gpl");
SYMBOL_CRC(ata_wait_after_reset, 0x2efb7987, "_gpl");
SYMBOL_CRC(ata_std_prereset, 0x173c87e7, "_gpl");
SYMBOL_CRC(sata_std_hardreset, 0x28f94bc6, "_gpl");
SYMBOL_CRC(ata_std_postreset, 0x2bbf7f43, "_gpl");
SYMBOL_CRC(ata_dev_set_feature, 0x9e22533c, "_gpl");
SYMBOL_CRC(ata_std_qc_defer, 0x6d63fdfa, "_gpl");
SYMBOL_CRC(ata_noop_qc_prep, 0xe8ea0632, "_gpl");
SYMBOL_CRC(ata_qc_complete, 0x5c5a7ae7, "_gpl");
SYMBOL_CRC(ata_qc_get_active, 0xc704686a, "_gpl");
SYMBOL_CRC(ata_link_online, 0xb1583732, "_gpl");
SYMBOL_CRC(ata_link_offline, 0x03412630, "_gpl");
SYMBOL_CRC(ata_sas_port_suspend, 0xb5c718dc, "_gpl");
SYMBOL_CRC(ata_sas_port_resume, 0x006c3de3, "_gpl");
SYMBOL_CRC(ata_host_suspend, 0x52fd2a61, "_gpl");
SYMBOL_CRC(ata_host_resume, 0xa3cd1533, "_gpl");
SYMBOL_CRC(ata_host_put, 0x1c84e7ac, "_gpl");
SYMBOL_CRC(ata_host_alloc, 0x079c451a, "_gpl");
SYMBOL_CRC(ata_host_alloc_pinfo, 0x331ae50a, "_gpl");
SYMBOL_CRC(ata_host_start, 0x411805d4, "_gpl");
SYMBOL_CRC(ata_host_init, 0xde8e86ca, "_gpl");
SYMBOL_CRC(ata_host_register, 0xaa7e90dc, "_gpl");
SYMBOL_CRC(ata_host_activate, 0x0a96b92c, "_gpl");
SYMBOL_CRC(ata_host_detach, 0x85ea7787, "_gpl");
SYMBOL_CRC(ata_pci_remove_one, 0x6a5055cb, "_gpl");
SYMBOL_CRC(ata_pci_shutdown_one, 0x8d753e34, "_gpl");
SYMBOL_CRC(pci_test_config_bits, 0x38debca0, "_gpl");
SYMBOL_CRC(ata_pci_device_do_suspend, 0xab914f31, "_gpl");
SYMBOL_CRC(ata_pci_device_do_resume, 0xa2a092fc, "_gpl");
SYMBOL_CRC(ata_pci_device_suspend, 0xac920d1f, "_gpl");
SYMBOL_CRC(ata_pci_device_resume, 0xd3bdc5df, "_gpl");
SYMBOL_CRC(ata_platform_remove_one, 0x0df02f37, "_gpl");
SYMBOL_CRC(ata_ratelimit, 0xf8f3a0fb, "_gpl");
SYMBOL_CRC(ata_msleep, 0x4a9a9a36, "_gpl");
SYMBOL_CRC(ata_wait_register, 0x8e96a8ff, "_gpl");
SYMBOL_CRC(ata_dummy_port_ops, 0xe21d706d, "_gpl");
SYMBOL_CRC(ata_dummy_port_info, 0xa36c7be7, "_gpl");
SYMBOL_CRC(ata_print_version, 0xadf81dad, "");
SYMBOL_CRC(__tracepoint_ata_tf_load, 0x9ae12e17, "_gpl");
SYMBOL_CRC(__traceiter_ata_tf_load, 0x4f02bdd9, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_tf_load, 0x08a88a9f, "_gpl");
SYMBOL_CRC(__tracepoint_ata_exec_command, 0x87ac7411, "_gpl");
SYMBOL_CRC(__traceiter_ata_exec_command, 0xff5e2fd0, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_exec_command, 0xf80f5fc7, "_gpl");
SYMBOL_CRC(__tracepoint_ata_bmdma_setup, 0x0faa2c9a, "_gpl");
SYMBOL_CRC(__traceiter_ata_bmdma_setup, 0xc6a62e8c, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_bmdma_setup, 0xc68c41d6, "_gpl");
SYMBOL_CRC(__tracepoint_ata_bmdma_start, 0x54cee684, "_gpl");
SYMBOL_CRC(__traceiter_ata_bmdma_start, 0x32a424d1, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_bmdma_start, 0x9de88bc8, "_gpl");
SYMBOL_CRC(__tracepoint_ata_bmdma_status, 0xb6d27de6, "_gpl");
SYMBOL_CRC(__traceiter_ata_bmdma_status, 0x9549a306, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_bmdma_status, 0xc9715630, "_gpl");
SYMBOL_CRC(dev_attr_unload_heads, 0x70333012, "_gpl");
SYMBOL_CRC(ata_common_sdev_groups, 0x54312341, "_gpl");
SYMBOL_CRC(ata_std_bios_param, 0x8098920c, "_gpl");
SYMBOL_CRC(ata_scsi_unlock_native_capacity, 0xcc65eb56, "_gpl");
SYMBOL_CRC(ata_sas_scsi_ioctl, 0xefa824a5, "_gpl");
SYMBOL_CRC(ata_scsi_ioctl, 0xa408b6ea, "_gpl");
SYMBOL_CRC(ata_scsi_dma_need_drain, 0x43d4f30e, "_gpl");
SYMBOL_CRC(ata_scsi_slave_alloc, 0xcf304d83, "_gpl");
SYMBOL_CRC(ata_scsi_slave_config, 0x667520f6, "_gpl");
SYMBOL_CRC(ata_scsi_slave_destroy, 0x0e6ee2b6, "_gpl");
SYMBOL_CRC(ata_scsi_queuecmd, 0xb733db56, "_gpl");
SYMBOL_CRC(__ata_ehi_push_desc, 0x7de338ff, "_gpl");
SYMBOL_CRC(ata_ehi_push_desc, 0xf6260339, "_gpl");
SYMBOL_CRC(ata_ehi_clear_desc, 0xb532b30b, "_gpl");
SYMBOL_CRC(ata_port_desc, 0x2a0c7e30, "_gpl");
SYMBOL_CRC(ata_port_pbar_desc, 0x81d86326, "_gpl");
SYMBOL_CRC(ata_scsi_cmd_error_handler, 0x063307d6, "");
SYMBOL_CRC(ata_scsi_port_error_handler, 0x2f2e33fd, "_gpl");
SYMBOL_CRC(ata_port_wait_eh, 0x49bc4250, "_gpl");
SYMBOL_CRC(ata_std_sched_eh, 0xefc29f4e, "_gpl");
SYMBOL_CRC(ata_std_end_eh, 0xf09d6443, "");
SYMBOL_CRC(ata_port_schedule_eh, 0x9d267c25, "_gpl");
SYMBOL_CRC(ata_link_abort, 0xfb53bb92, "_gpl");
SYMBOL_CRC(ata_port_abort, 0x0ce9af5a, "_gpl");
SYMBOL_CRC(ata_port_freeze, 0x68940ec0, "_gpl");
SYMBOL_CRC(ata_eh_freeze_port, 0xbcd8eb95, "_gpl");
SYMBOL_CRC(ata_dev_disable, 0x850bbac3, "_gpl");
SYMBOL_CRC(ata_get_cmd_name, 0xbd06f3a9, "_gpl");
SYMBOL_CRC(ata_std_error_handler, 0x43bfabc2, "_gpl");
SYMBOL_CRC(ata_port_classify, 0xd5beaa70, "_gpl");
SYMBOL_CRC(sata_deb_timing_normal, 0x4fdc945d, "_gpl");
SYMBOL_CRC(sata_deb_timing_hotplug, 0xcccfb2fa, "_gpl");
SYMBOL_CRC(sata_deb_timing_long, 0xc428068d, "_gpl");
SYMBOL_CRC(sata_scr_valid, 0xafddf359, "_gpl");
SYMBOL_CRC(sata_scr_read, 0x1c52a402, "_gpl");
SYMBOL_CRC(sata_scr_write, 0xe25a4071, "_gpl");
SYMBOL_CRC(sata_scr_write_flush, 0x3b5ba62c, "_gpl");
SYMBOL_CRC(ata_tf_to_fis, 0xdf0c757f, "_gpl");
SYMBOL_CRC(ata_tf_from_fis, 0xa4c085f8, "_gpl");
SYMBOL_CRC(sata_link_debounce, 0x1c9ec80a, "_gpl");
SYMBOL_CRC(sata_link_resume, 0xcaee0d58, "_gpl");
SYMBOL_CRC(sata_link_scr_lpm, 0xb8bfbdd2, "_gpl");
SYMBOL_CRC(sata_set_spd, 0xfbab1ea8, "_gpl");
SYMBOL_CRC(sata_link_hardreset, 0x4f956861, "_gpl");
SYMBOL_CRC(ata_qc_complete_multiple, 0xc7206177, "_gpl");
SYMBOL_CRC(ata_slave_link_init, 0xc0daed75, "_gpl");
SYMBOL_CRC(sata_lpm_ignore_phy_events, 0xdac9d476, "_gpl");
SYMBOL_CRC(dev_attr_link_power_management_policy, 0xb51b8a22, "_gpl");
SYMBOL_CRC(dev_attr_ncq_prio_supported, 0xc2351dd5, "_gpl");
SYMBOL_CRC(dev_attr_ncq_prio_enable, 0xf0caba4d, "_gpl");
SYMBOL_CRC(ata_ncq_sdev_groups, 0x411f4858, "_gpl");
SYMBOL_CRC(dev_attr_em_message, 0xeb531bb1, "_gpl");
SYMBOL_CRC(dev_attr_em_message_type, 0x28e97d9e, "_gpl");
SYMBOL_CRC(dev_attr_sw_activity, 0xf9ae3d0c, "_gpl");
SYMBOL_CRC(ata_change_queue_depth, 0x2ddeb7e2, "_gpl");
SYMBOL_CRC(ata_scsi_change_queue_depth, 0x0bc1ab89, "_gpl");
SYMBOL_CRC(ata_sas_port_alloc, 0xa720170b, "_gpl");
SYMBOL_CRC(ata_sas_port_start, 0xd4768075, "_gpl");
SYMBOL_CRC(ata_sas_port_stop, 0x7632a6b0, "_gpl");
SYMBOL_CRC(ata_sas_async_probe, 0x4415cd8a, "_gpl");
SYMBOL_CRC(ata_sas_sync_probe, 0x309a76de, "_gpl");
SYMBOL_CRC(ata_sas_port_init, 0x9a2e9dc3, "_gpl");
SYMBOL_CRC(ata_sas_tport_add, 0x90cd42c3, "_gpl");
SYMBOL_CRC(ata_sas_tport_delete, 0x57c9d0f0, "_gpl");
SYMBOL_CRC(ata_sas_port_destroy, 0x034d33b0, "_gpl");
SYMBOL_CRC(ata_sas_slave_configure, 0x1b8cd0f1, "_gpl");
SYMBOL_CRC(ata_sas_queuecmd, 0xb79d345f, "_gpl");
SYMBOL_CRC(sata_async_notification, 0xd17ac8d0, "_gpl");
SYMBOL_CRC(ata_eh_analyze_ncq_error, 0x8bc86f1a, "_gpl");
SYMBOL_CRC(ata_sff_port_ops, 0x1c856180, "_gpl");
SYMBOL_CRC(ata_sff_check_status, 0x8fc2d621, "_gpl");
SYMBOL_CRC(ata_sff_pause, 0xddea15c8, "_gpl");
SYMBOL_CRC(ata_sff_dma_pause, 0x0185afc0, "_gpl");
SYMBOL_CRC(ata_sff_busy_sleep, 0x33f04344, "_gpl");
SYMBOL_CRC(ata_sff_wait_ready, 0xc3924987, "_gpl");
SYMBOL_CRC(ata_sff_dev_select, 0x06a45501, "_gpl");
SYMBOL_CRC(ata_sff_irq_on, 0x283885a1, "_gpl");
SYMBOL_CRC(ata_sff_tf_load, 0x35fc2079, "_gpl");
SYMBOL_CRC(ata_sff_tf_read, 0x45fbe9a6, "_gpl");
SYMBOL_CRC(ata_sff_exec_command, 0xf8d6eda4, "_gpl");
SYMBOL_CRC(ata_sff_data_xfer, 0x6df8ce9d, "_gpl");
SYMBOL_CRC(ata_sff_data_xfer32, 0x8d727452, "_gpl");
SYMBOL_CRC(ata_sff_hsm_move, 0x11884688, "_gpl");
SYMBOL_CRC(ata_sff_queue_work, 0xa6b06f65, "_gpl");
SYMBOL_CRC(ata_sff_queue_delayed_work, 0x4e17c613, "_gpl");
SYMBOL_CRC(ata_sff_queue_pio_task, 0x81fa361e, "_gpl");
SYMBOL_CRC(ata_sff_qc_issue, 0xf46ca5a1, "_gpl");
SYMBOL_CRC(ata_sff_qc_fill_rtf, 0x5fa3935c, "_gpl");
SYMBOL_CRC(ata_sff_port_intr, 0x632a4b1f, "_gpl");
SYMBOL_CRC(ata_sff_interrupt, 0x3a4f6a32, "_gpl");
SYMBOL_CRC(ata_sff_lost_interrupt, 0xd0072362, "_gpl");
SYMBOL_CRC(ata_sff_freeze, 0x9cd56c0c, "_gpl");
SYMBOL_CRC(ata_sff_thaw, 0x0097e8c1, "_gpl");
SYMBOL_CRC(ata_sff_prereset, 0xc637fef2, "_gpl");
SYMBOL_CRC(ata_sff_dev_classify, 0x755507e5, "_gpl");
SYMBOL_CRC(ata_sff_wait_after_reset, 0x65ae6693, "_gpl");
SYMBOL_CRC(ata_sff_softreset, 0xb9e00abd, "_gpl");
SYMBOL_CRC(sata_sff_hardreset, 0xe584e529, "_gpl");
SYMBOL_CRC(ata_sff_postreset, 0x9ecdfc59, "_gpl");
SYMBOL_CRC(ata_sff_drain_fifo, 0xc131574a, "_gpl");
SYMBOL_CRC(ata_sff_error_handler, 0x1c0b8e4c, "_gpl");
SYMBOL_CRC(ata_sff_std_ports, 0x73a48b4a, "_gpl");
SYMBOL_CRC(ata_pci_sff_init_host, 0xe59ea513, "_gpl");
SYMBOL_CRC(ata_pci_sff_prepare_host, 0x5283b2d4, "_gpl");
SYMBOL_CRC(ata_pci_sff_activate_host, 0x3f8caa54, "_gpl");
SYMBOL_CRC(ata_pci_sff_init_one, 0x08936a2f, "_gpl");
SYMBOL_CRC(ata_bmdma_port_ops, 0xaf49e716, "_gpl");
SYMBOL_CRC(ata_bmdma32_port_ops, 0x6a62a765, "_gpl");
SYMBOL_CRC(ata_bmdma_qc_prep, 0x16e013ed, "_gpl");
SYMBOL_CRC(ata_bmdma_dumb_qc_prep, 0x30e03d9b, "_gpl");
SYMBOL_CRC(ata_bmdma_qc_issue, 0x360c9934, "_gpl");
SYMBOL_CRC(ata_bmdma_port_intr, 0xc4ece2ee, "_gpl");
SYMBOL_CRC(ata_bmdma_interrupt, 0xe818b32b, "_gpl");
SYMBOL_CRC(ata_bmdma_error_handler, 0xbb48162f, "_gpl");
SYMBOL_CRC(ata_bmdma_post_internal_cmd, 0xfc255087, "_gpl");
SYMBOL_CRC(ata_bmdma_irq_clear, 0x4cad83bf, "_gpl");
SYMBOL_CRC(ata_bmdma_setup, 0x50c11077, "_gpl");
SYMBOL_CRC(ata_bmdma_start, 0xec76a6ae, "_gpl");
SYMBOL_CRC(ata_bmdma_stop, 0x8c3eb4e4, "_gpl");
SYMBOL_CRC(ata_bmdma_status, 0x2feed3f8, "_gpl");
SYMBOL_CRC(ata_bmdma_port_start, 0x2c5127f2, "_gpl");
SYMBOL_CRC(ata_bmdma_port_start32, 0x5b0f6164, "_gpl");
SYMBOL_CRC(ata_pci_bmdma_clear_simplex, 0xe4a0ba4d, "_gpl");
SYMBOL_CRC(ata_pci_bmdma_init, 0x5908ed13, "_gpl");
SYMBOL_CRC(ata_pci_bmdma_prepare_host, 0x3f78349c, "_gpl");
SYMBOL_CRC(ata_pci_bmdma_init_one, 0xb7941fd9, "_gpl");
SYMBOL_CRC(sata_pmp_port_ops, 0x2d6186e9, "_gpl");
SYMBOL_CRC(sata_pmp_qc_defer_cmd_switch, 0x5ff532a4, "_gpl");
SYMBOL_CRC(sata_pmp_error_handler, 0x96df956b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x82b1aee1, "pci_save_state" },
	{ 0x7a81541b, "async_synchronize_cookie" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0x691ec44b, "flush_dcache_page" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8aade537, "devres_release_group" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xfc5977fa, "scsi_device_get" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x77bc13a0, "strim" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x75356cbc, "devres_remove_group" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc9251010, "dmam_alloc_attrs" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xfd0c7c76, "scsi_remove_host" },
	{ 0xb9a19db1, "transport_remove_device" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe48b251c, "scsi_build_sense" },
	{ 0xe6b494de, "scsi_schedule_eh" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0xf7370f56, "system_state" },
	{ 0xfc9c2987, "scsi_check_sense" },
	{ 0x6eb983df, "device_initialize" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x39879eae, "sdev_evt_send_simple" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0xadc2874, "pci_set_power_state" },
	{ 0xe2964344, "__wake_up" },
	{ 0x7f34aad4, "of_get_next_available_child" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x28eced4f, "devres_add" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xb24c5195, "scsi_device_set_state" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x3ab7b1cc, "scsi_set_sense_field_pointer" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x7b2eadf1, "pci_read_config_dword" },
	{ 0xb10da1b2, "transport_setup_device" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0x1b5f4377, "trace_seq_putc" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x7a9ab03e, "devm_free_irq" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0x5009c71d, "glob_match" },
	{ 0xa916b694, "strnlen" },
	{ 0x6da268cd, "scsi_eh_finish_cmd" },
	{ 0xc6cbbc89, "capable" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x7e33fbb9, "scsi_device_put" },
	{ 0xf811e69d, "scsi_eh_flush_done_q" },
	{ 0xa8a4db07, "pcim_iomap_regions" },
	{ 0x3c879db3, "sg_miter_next" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x5cb11342, "blk_queue_update_dma_alignment" },
	{ 0x3fcf048, "scsi_host_put" },
	{ 0xcbc709f4, "transport_class_unregister" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x7bbe500c, "device_add" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b2f260c, "attribute_container_register" },
	{ 0x9d64f128, "pci_read_config_word" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xdc510a8f, "__devres_alloc_node" },
	{ 0x728a1ce5, "sg_miter_stop" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xfbad067, "device_link_remove" },
	{ 0x9b5e99ab, "transport_configure_device" },
	{ 0x9d3c094e, "blk_queue_update_dma_pad" },
	{ 0xa4fd4e5c, "devres_open_group" },
	{ 0xf6adf2ea, "__scsi_execute" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x6aabd150, "pcim_pin_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x130ea9db, "transport_add_device" },
	{ 0x5f9239e9, "sg_miter_start" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x93022ba6, "__scsi_format_command" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xa3d72d74, "pci_restore_state" },
	{ 0x27e4ffed, "bpf_trace_run1" },
	{ 0x402beac3, "device_del" },
	{ 0xb1aa89b3, "scsi_rescan_device" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe5f5e507, "pci_set_master" },
	{ 0x4d7e8052, "blk_queue_max_segments" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdc58f5d4, "param_ops_string" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x7de4bde7, "bpf_trace_run3" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe1bed8dd, "pm_runtime_forbid" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc07fe6e8, "attribute_container_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa466f487, "transport_destroy_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe82d68c3, "pci_disable_device" },
	{ 0xf79cb173, "scsi_done" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xa71a044a, "dma_unmap_sg_attrs" },
	{ 0x477f777b, "pcim_iomap_table" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xf3d2ea76, "scsi_remove_device" },
	{ 0x97ddd9b3, "blk_queue_max_hw_sectors" },
	{ 0xe3958b89, "blk_abort_request" },
	{ 0x8f6ad855, "scsi_add_host_with_dma" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x7f5a34d8, "pci_read_config_byte" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x97f91466, "_dev_printk" },
	{ 0x787a7e9e, "pcim_enable_device" },
	{ 0x980e5e81, "scsi_host_alloc" },
	{ 0x349cba85, "strchr" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x5ac9c8c0, "__scsi_add_device" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x72291754, "device_link_add" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xaeea3814, "scsi_change_queue_depth" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6cba88c1, "pci_bus_type" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x5f3d34f4, "dma_map_sg_attrs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2b151fd6, "transport_class_register" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4AF13E914E2D303B159FACB");
