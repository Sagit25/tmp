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

SYMBOL_CRC(iscsi_tcp_segment_unmap, 0xef819ceb, "_gpl");
SYMBOL_CRC(iscsi_tcp_segment_done, 0x7d251e55, "_gpl");
SYMBOL_CRC(iscsi_tcp_dgst_header, 0x2199abb5, "_gpl");
SYMBOL_CRC(iscsi_segment_init_linear, 0x3b65990e, "_gpl");
SYMBOL_CRC(iscsi_segment_seek_sg, 0xc90bb419, "_gpl");
SYMBOL_CRC(iscsi_tcp_hdr_recv_prep, 0xfd0eb4c7, "_gpl");
SYMBOL_CRC(iscsi_tcp_cleanup_task, 0x2a57ca90, "_gpl");
SYMBOL_CRC(iscsi_tcp_recv_segment_is_hdr, 0x6e7e5ec0, "_gpl");
SYMBOL_CRC(iscsi_tcp_recv_skb, 0x24ba9017, "_gpl");
SYMBOL_CRC(iscsi_tcp_task_init, 0x1a0c30b6, "_gpl");
SYMBOL_CRC(iscsi_tcp_task_xmit, 0x94e2807b, "_gpl");
SYMBOL_CRC(iscsi_tcp_conn_setup, 0xe1a4da2a, "_gpl");
SYMBOL_CRC(iscsi_tcp_conn_teardown, 0xe857e944, "_gpl");
SYMBOL_CRC(iscsi_tcp_r2tpool_alloc, 0x9dcbd79b, "_gpl");
SYMBOL_CRC(iscsi_tcp_r2tpool_free, 0xcf5f280e, "_gpl");
SYMBOL_CRC(iscsi_tcp_set_max_r2t, 0x45c7caaa, "_gpl");
SYMBOL_CRC(iscsi_tcp_conn_get_stats, 0x20a09244, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1d01bb3e, "iscsi_dbg_trace" },
	{ 0x97f91466, "_dev_printk" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xb94e81a1, "crypto_ahash_digest" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8ba41c41, "iscsi_prep_data_out_pdu" },
	{ 0x46e335db, "iscsi_put_task" },
	{ 0xc95553f6, "iscsi_conn_failure" },
	{ 0xe3f23b78, "iscsi_conn_setup" },
	{ 0xe45f9947, "iscsi_conn_teardown" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0xaa976bb3, "__tracepoint_iscsi_dbg_tcp" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xf43e802b, "__traceiter_iscsi_dbg_tcp" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xdcb764ad, "memset" },
	{ 0x87b8798d, "sg_next" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x252da672, "crypto_ahash_final" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x89e6c62e, "skb_prepare_seq_read" },
	{ 0x6c84c69, "skb_seq_read" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9a79ee91, "skb_abort_seq_read" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3496a3d3, "iscsi_complete_pdu" },
	{ 0x7adbb6bd, "iscsi_verify_itt" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x156261d1, "iscsi_itt_to_ctask" },
	{ 0x1cf1d52d, "iscsi_get_task" },
	{ 0x7b63305, "iscsi_update_cmdsn" },
	{ 0x41af0bfa, "__iscsi_complete_pdu" },
	{ 0x687f2692, "iscsi_requeue_task" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libiscsi");


MODULE_INFO(srcversion, "996C9DADF87E43446B7A223");
