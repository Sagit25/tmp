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

SYMBOL_CRC(iscsi_conn_queue_xmit, 0xb52fad11, "_gpl");
SYMBOL_CRC(iscsi_conn_queue_recv, 0xfbcc41cb, "_gpl");
SYMBOL_CRC(iscsi_update_cmdsn, 0x07b63305, "_gpl");
SYMBOL_CRC(iscsi_prep_data_out_pdu, 0x8ba41c41, "_gpl");
SYMBOL_CRC(iscsi_get_task, 0x1cf1d52d, "_gpl");
SYMBOL_CRC(__iscsi_put_task, 0x5d5ed83b, "_gpl");
SYMBOL_CRC(iscsi_put_task, 0x46e335db, "_gpl");
SYMBOL_CRC(iscsi_complete_scsi_task, 0x86b2fa82, "_gpl");
SYMBOL_CRC(iscsi_conn_send_pdu, 0x5152ae22, "_gpl");
SYMBOL_CRC(iscsi_itt_to_task, 0x1f57d6e3, "_gpl");
SYMBOL_CRC(__iscsi_complete_pdu, 0x41af0bfa, "_gpl");
SYMBOL_CRC(iscsi_complete_pdu, 0x3496a3d3, "_gpl");
SYMBOL_CRC(iscsi_verify_itt, 0x7adbb6bd, "_gpl");
SYMBOL_CRC(iscsi_itt_to_ctask, 0x156261d1, "_gpl");
SYMBOL_CRC(iscsi_session_failure, 0xf4fa702b, "_gpl");
SYMBOL_CRC(iscsi_conn_failure, 0xc95553f6, "_gpl");
SYMBOL_CRC(iscsi_requeue_task, 0x687f2692, "_gpl");
SYMBOL_CRC(iscsi_queuecommand, 0x72e895be, "_gpl");
SYMBOL_CRC(iscsi_target_alloc, 0x0a0a4164, "_gpl");
SYMBOL_CRC(iscsi_suspend_queue, 0xa8b5d793, "_gpl");
SYMBOL_CRC(iscsi_suspend_tx, 0xe302828a, "_gpl");
SYMBOL_CRC(iscsi_suspend_rx, 0x5e9f4c60, "_gpl");
SYMBOL_CRC(iscsi_eh_cmd_timed_out, 0xf382aecb, "_gpl");
SYMBOL_CRC(iscsi_conn_unbind, 0x3b44fff6, "_gpl");
SYMBOL_CRC(iscsi_eh_abort, 0x0707779d, "_gpl");
SYMBOL_CRC(iscsi_eh_device_reset, 0x719f6125, "_gpl");
SYMBOL_CRC(iscsi_session_recovery_timedout, 0x44f29f83, "_gpl");
SYMBOL_CRC(iscsi_eh_session_reset, 0x3f92a07f, "_gpl");
SYMBOL_CRC(iscsi_eh_recover_target, 0xc9ad6a1a, "_gpl");
SYMBOL_CRC(iscsi_pool_init, 0x3bef2f73, "_gpl");
SYMBOL_CRC(iscsi_pool_free, 0x8d303b1b, "_gpl");
SYMBOL_CRC(iscsi_host_get_max_scsi_cmds, 0x5ec201b3, "_gpl");
SYMBOL_CRC(iscsi_host_add, 0x11270dca, "_gpl");
SYMBOL_CRC(iscsi_host_alloc, 0x5b4a7647, "_gpl");
SYMBOL_CRC(iscsi_host_remove, 0x780d6bed, "_gpl");
SYMBOL_CRC(iscsi_host_free, 0x0e398550, "_gpl");
SYMBOL_CRC(iscsi_session_setup, 0xdedf3510, "_gpl");
SYMBOL_CRC(iscsi_session_remove, 0xd1939cfc, "_gpl");
SYMBOL_CRC(iscsi_session_free, 0xfdb5abf8, "_gpl");
SYMBOL_CRC(iscsi_session_teardown, 0x20ccdabd, "_gpl");
SYMBOL_CRC(iscsi_conn_setup, 0xe3f23b78, "_gpl");
SYMBOL_CRC(iscsi_conn_teardown, 0xe45f9947, "_gpl");
SYMBOL_CRC(iscsi_conn_start, 0x783075ba, "_gpl");
SYMBOL_CRC(iscsi_conn_stop, 0x0b1d4072, "_gpl");
SYMBOL_CRC(iscsi_conn_bind, 0xaae047de, "_gpl");
SYMBOL_CRC(iscsi_switch_str_param, 0x12b2ad06, "_gpl");
SYMBOL_CRC(iscsi_set_param, 0x3b180572, "_gpl");
SYMBOL_CRC(iscsi_session_get_param, 0xd91d95b7, "_gpl");
SYMBOL_CRC(iscsi_conn_get_addr_param, 0xeab9cbd5, "_gpl");
SYMBOL_CRC(iscsi_conn_get_param, 0xf7c4379e, "_gpl");
SYMBOL_CRC(iscsi_host_get_param, 0x16d6c972, "_gpl");
SYMBOL_CRC(iscsi_host_set_param, 0xf8e96115, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x97f91466, "_dev_printk" },
	{ 0x1d01bb3e, "iscsi_dbg_trace" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xf79cb173, "scsi_done" },
	{ 0xe2964344, "__wake_up" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1d43adb8, "iscsi_conn_error_event" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x92997ed8, "_printk" },
	{ 0x8f6ad855, "scsi_add_host_with_dma" },
	{ 0x980e5e81, "scsi_host_alloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3fcf048, "scsi_host_put" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x887a2d57, "scsi_host_get" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3ec1078f, "iscsi_remove_session" },
	{ 0x216f3164, "iscsi_alloc_conn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xc8b808b5, "iscsi_add_conn" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x2059883b, "iscsi_put_conn" },
	{ 0x2cd247d7, "iscsi_remove_conn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40351200, "iscsi_unblock_session" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xdcb764ad, "memset" },
	{ 0x736dd10, "__tracepoint_iscsi_dbg_eh" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x237039f2, "__traceiter_iscsi_dbg_eh" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3cb0a93e, "iscsi_host_for_each_session" },
	{ 0x28bccfd7, "flush_signals" },
	{ 0xfd0c7c76, "scsi_remove_host" },
	{ 0xaf3d0fc2, "iscsi_force_destroy_session" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x24d273d1, "add_timer" },
	{ 0xcf9a2aa, "iscsi_recv_pdu" },
	{ 0xe48b251c, "scsi_build_sense" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0xbb7a83fb, "iscsi_free_session" },
	{ 0xcc793c4a, "module_put" },
	{ 0x5bfaa2c3, "__tracepoint_iscsi_dbg_conn" },
	{ 0xc8862c8d, "__traceiter_iscsi_dbg_conn" },
	{ 0x3785e561, "__tracepoint_iscsi_dbg_session" },
	{ 0x8a44f90d, "__traceiter_iscsi_dbg_session" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x437a2619, "iscsi_block_session" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb439e4cf, "iscsi_session_chkready" },
	{ 0xf7370f56, "system_state" },
	{ 0x9568317, "iscsi_alloc_session" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1425e33, "try_module_get" },
	{ 0xaa7d7af7, "iscsi_add_session" },
	{ 0xea5934db, "iscsi_get_conn" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4ED6FD3164E284D3DE46F16");
