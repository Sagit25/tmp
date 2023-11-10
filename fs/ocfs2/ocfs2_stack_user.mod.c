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
	{ 0x329d1b4, "misc_deregister" },
	{ 0xa6257a2f, "complete" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcd224e1d, "dlm_new_lockspace" },
	{ 0x4b62826c, "dlm_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xcf9f3328, "dlm_release_lockspace" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x971d3862, "dlm_posix_unlock" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0x4f63d13b, "ocfs2_stack_glue_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x13250cf0, "ocfs2_stack_glue_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5a921311, "strncmp" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x683b9cce, "default_llseek" },
	{ 0xdcb764ad, "memset" },
	{ 0x96601bbe, "misc_register" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x46687873, "dlm_posix_get" },
	{ 0x8a6c5f1b, "dlm_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc43a3062, "dlm_posix_lock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dlm,ocfs2_stackglue");


MODULE_INFO(srcversion, "9C403EF804F056350DE4F4F");
