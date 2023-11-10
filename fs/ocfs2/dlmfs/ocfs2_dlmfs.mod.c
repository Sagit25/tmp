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
	{ 0x5e64c29b, "inode_init_owner" },
	{ 0x8eb4a783, "setattr_prepare" },
	{ 0xff35d141, "simple_rmdir" },
	{ 0x80765dd0, "d_instantiate" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x874f3fd2, "clear_inode" },
	{ 0xe9668d19, "new_inode" },
	{ 0xcfd3fc5, "ocfs2_cluster_connect_agnostic" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x49758fc7, "unregister_filesystem" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x12ec485a, "simple_statfs" },
	{ 0x84dd752b, "d_make_root" },
	{ 0xcafdd707, "ocfs2_dlm_lock_status" },
	{ 0x809a8e2e, "current_time" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a4864ce, "iput" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xb8413079, "register_filesystem" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xb8ea7253, "simple_dir_operations" },
	{ 0xb92235a6, "simple_unlink" },
	{ 0xd344e4ee, "ocfs2_stack_glue_set_max_proto_version" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0xce6b8493, "simple_getattr" },
	{ 0x95b23208, "inode_init_once" },
	{ 0xaf969565, "ocfs2_dlm_lock" },
	{ 0x1475f64b, "ocfs2_dlm_lvb_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc5196999, "ocfs2_dlm_unlock" },
	{ 0xa5af53e4, "setattr_copy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x5792f848, "strlcpy" },
	{ 0x683b9cce, "default_llseek" },
	{ 0x7cd948ed, "kill_litter_super" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3ac0084c, "mount_nodev" },
	{ 0xca1d24e2, "igrab" },
	{ 0x76f40744, "ocfs2_dlm_lvb" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0xac120953, "inc_nlink" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xeaf44a21, "generic_delete_inode" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbbfab4ee, "simple_lookup" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x9507547f, "ocfs2_cluster_disconnect" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x52d61781, "kmem_cache_alloc_lru" },
	{ 0xeaa9de01, "__mark_inode_dirty" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ocfs2_stackglue,ocfs2_nodemanager");


MODULE_INFO(srcversion, "DA6E06223AD862D6B91FD3A");
