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
	{ 0x92997ed8, "_printk" },
	{ 0x84c725ff, "iscsi_register_transport" },
	{ 0x1d01bb3e, "iscsi_dbg_trace" },
	{ 0x97f91466, "_dev_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0x3b65990e, "iscsi_segment_init_linear" },
	{ 0xc90bb419, "iscsi_segment_seek_sg" },
	{ 0x2199abb5, "iscsi_tcp_dgst_header" },
	{ 0x7d251e55, "iscsi_tcp_segment_done" },
	{ 0x1e0a2844, "kernel_sendmsg" },
	{ 0xef819ceb, "iscsi_tcp_segment_unmap" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc95553f6, "iscsi_conn_failure" },
	{ 0x20a09244, "iscsi_tcp_conn_get_stats" },
	{ 0xf7c4379e, "iscsi_conn_get_param" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xea5934db, "iscsi_get_conn" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x456b34a9, "kernel_getpeername" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2059883b, "iscsi_put_conn" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x89073d9f, "kernel_getsockname" },
	{ 0x3b180572, "iscsi_set_param" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0x45c7caaa, "iscsi_tcp_set_max_r2t" },
	{ 0xc74ae316, "sockfd_lookup" },
	{ 0xe2bce892, "fput" },
	{ 0xaae047de, "iscsi_conn_bind" },
	{ 0x18ed74b4, "sk_set_memalloc" },
	{ 0xdc3a639b, "sock_no_linger" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xfd0eb4c7, "iscsi_tcp_hdr_recv_prep" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xb52fad11, "iscsi_conn_queue_xmit" },
	{ 0x24ba9017, "iscsi_tcp_recv_skb" },
	{ 0x8e011e85, "scsi_is_host_device" },
	{ 0xd1939cfc, "iscsi_session_remove" },
	{ 0x780d6bed, "iscsi_host_remove" },
	{ 0xcf5f280e, "iscsi_tcp_r2tpool_free" },
	{ 0xfdb5abf8, "iscsi_session_free" },
	{ 0xe398550, "iscsi_host_free" },
	{ 0x5b4a7647, "iscsi_host_alloc" },
	{ 0x5ec201b3, "iscsi_host_get_max_scsi_cmds" },
	{ 0x11270dca, "iscsi_host_add" },
	{ 0xdedf3510, "iscsi_session_setup" },
	{ 0x9dcbd79b, "iscsi_tcp_r2tpool_alloc" },
	{ 0x20ccdabd, "iscsi_session_teardown" },
	{ 0x2bc14e27, "blk_queue_dma_alignment" },
	{ 0x499398d3, "blk_queue_flag_set" },
	{ 0x4e2b6a46, "iscsi_unregister_transport" },
	{ 0xd4e55f1e, "__tracepoint_iscsi_dbg_sw_tcp" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x5ee1c1b7, "__traceiter_iscsi_dbg_sw_tcp" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x16d6c972, "iscsi_host_get_param" },
	{ 0xc5a81d59, "kernel_sock_shutdown" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x5e9f4c60, "iscsi_suspend_rx" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0xe857e944, "iscsi_tcp_conn_teardown" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe302828a, "iscsi_suspend_tx" },
	{ 0xb1d4072, "iscsi_conn_stop" },
	{ 0xb4a900a9, "tcp_read_sock" },
	{ 0xfbcc41cb, "iscsi_conn_queue_recv" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x6b2baf52, "release_sock" },
	{ 0xe1a4da2a, "iscsi_tcp_conn_setup" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x245a6d68, "crypto_alloc_ahash" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x783075ba, "iscsi_conn_start" },
	{ 0xd91d95b7, "iscsi_session_get_param" },
	{ 0xf8e96115, "iscsi_host_set_param" },
	{ 0x5152ae22, "iscsi_conn_send_pdu" },
	{ 0x1a0c30b6, "iscsi_tcp_task_init" },
	{ 0x94e2807b, "iscsi_tcp_task_xmit" },
	{ 0x2a57ca90, "iscsi_tcp_cleanup_task" },
	{ 0x44f29f83, "iscsi_session_recovery_timedout" },
	{ 0x72e895be, "iscsi_queuecommand" },
	{ 0x707779d, "iscsi_eh_abort" },
	{ 0x719f6125, "iscsi_eh_device_reset" },
	{ 0xc9ad6a1a, "iscsi_eh_recover_target" },
	{ 0xaeea3814, "scsi_change_queue_depth" },
	{ 0xf382aecb, "iscsi_eh_cmd_timed_out" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libiscsi_tcp,libiscsi");


MODULE_INFO(srcversion, "2B753023189A373FBBF6AD9");
