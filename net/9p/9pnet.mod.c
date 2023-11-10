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

SYMBOL_CRC(v9fs_register_trans, 0xcee71989, "");
SYMBOL_CRC(v9fs_unregister_trans, 0x5d1af383, "");
SYMBOL_CRC(v9fs_get_trans_by_name, 0xddd0f7c0, "");
SYMBOL_CRC(v9fs_get_default_trans, 0x2ef44080, "");
SYMBOL_CRC(p9_is_proto_dotl, 0x8e153691, "");
SYMBOL_CRC(p9_is_proto_dotu, 0x63dceee3, "");
SYMBOL_CRC(p9_show_client_options, 0x1e45131d, "");
SYMBOL_CRC(p9_fcall_fini, 0x984c5e73, "");
SYMBOL_CRC(p9_tag_lookup, 0x40b532a9, "");
SYMBOL_CRC(p9_req_put, 0x0c0c4c4f, "");
SYMBOL_CRC(p9_client_cb, 0x3a1f223b, "");
SYMBOL_CRC(p9_parse_header, 0xb79f25fd, "");
SYMBOL_CRC(__tracepoint_9p_fid_ref, 0x2e70f4bb, "");
SYMBOL_CRC(__traceiter_9p_fid_ref, 0xa732c122, "");
SYMBOL_CRC(__SCK__tp_func_9p_fid_ref, 0xb55ae777, "");
SYMBOL_CRC(do_trace_9p_fid_get, 0x15df3dab, "");
SYMBOL_CRC(do_trace_9p_fid_put, 0xbaadc44f, "");
SYMBOL_CRC(p9_client_create, 0xa479d3f7, "");
SYMBOL_CRC(p9_client_destroy, 0x8cc484e8, "");
SYMBOL_CRC(p9_client_disconnect, 0xff4596d0, "");
SYMBOL_CRC(p9_client_begin_disconnect, 0x11c8f40b, "");
SYMBOL_CRC(p9_client_attach, 0x20ba90d6, "");
SYMBOL_CRC(p9_client_walk, 0xb26a2d85, "");
SYMBOL_CRC(p9_client_open, 0x68f4a0de, "");
SYMBOL_CRC(p9_client_create_dotl, 0x49517255, "");
SYMBOL_CRC(p9_client_fcreate, 0x1b9812bc, "");
SYMBOL_CRC(p9_client_symlink, 0x52d2f9f7, "");
SYMBOL_CRC(p9_client_link, 0xa1f557e1, "");
SYMBOL_CRC(p9_client_fsync, 0x0846d754, "");
SYMBOL_CRC(p9_client_clunk, 0x92fbf6a1, "");
SYMBOL_CRC(p9_client_remove, 0x59fa5b99, "");
SYMBOL_CRC(p9_client_unlinkat, 0xab0e4bbe, "");
SYMBOL_CRC(p9_client_read, 0x145da905, "");
SYMBOL_CRC(p9_client_read_once, 0xb56842d3, "");
SYMBOL_CRC(p9_client_write, 0x9e371900, "");
SYMBOL_CRC(p9_client_stat, 0xae7ef98f, "");
SYMBOL_CRC(p9_client_getattr_dotl, 0xcc2f01b3, "");
SYMBOL_CRC(p9_client_wstat, 0xe6b1623b, "");
SYMBOL_CRC(p9_client_setattr, 0x0a4a2bc0, "");
SYMBOL_CRC(p9_client_statfs, 0x3b7ec773, "");
SYMBOL_CRC(p9_client_rename, 0x928834bb, "");
SYMBOL_CRC(p9_client_renameat, 0x298c6abc, "");
SYMBOL_CRC(p9_client_xattrwalk, 0xbf94a5ca, "_gpl");
SYMBOL_CRC(p9_client_xattrcreate, 0x042c4795, "_gpl");
SYMBOL_CRC(p9_client_readdir, 0x909640d2, "");
SYMBOL_CRC(p9_client_mknod_dotl, 0x05fd6dfb, "");
SYMBOL_CRC(p9_client_mkdir_dotl, 0x4d443fbf, "");
SYMBOL_CRC(p9_client_lock_dotl, 0xb588040d, "");
SYMBOL_CRC(p9_client_getlock_dotl, 0x22971572, "");
SYMBOL_CRC(p9_client_readlink, 0xdd04bff4, "");
SYMBOL_CRC(p9_error_init, 0xe58a3360, "");
SYMBOL_CRC(p9_errstr2errno, 0x3d73a797, "");
SYMBOL_CRC(p9stat_free, 0xd384c683, "");
SYMBOL_CRC(p9stat_read, 0x41ce9823, "");
SYMBOL_CRC(p9dirent_read, 0x95bd8f96, "");
SYMBOL_CRC(p9_release_pages, 0x504b4387, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1425e33, "try_module_get" },
	{ 0xbcacd7f6, "_copy_to_iter" },
	{ 0x3f26f22e, "bpf_trace_run4" },
	{ 0x20978fb9, "idr_find" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x893abd4a, "make_kuid" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0xcc793c4a, "module_put" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x4e3567f7, "match_int" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xb90f544f, "kmem_cache_create_usercopy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x954f099c, "idr_preload" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x253d3ad8, "from_kgid" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x9055cb3a, "iov_iter_kvec" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xca85377c, "from_kuid" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6300f56, "make_kgid" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x7de4bde7, "bpf_trace_run3" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x85df9b6c, "strsep" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0x44e9a829, "match_token" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F91EC9CD381A552AF50EA21");
