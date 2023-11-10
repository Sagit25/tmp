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
	{ 0x96601bbe, "misc_register" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xf5de3713, "hci_unregister_dev" },
	{ 0xfc1279d3, "hci_free_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46c724e, "hci_suspend_dev" },
	{ 0x3f14a929, "hci_resume_dev" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2964344, "__wake_up" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x336b6aaa, "hci_alloc_dev_priv" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6c90c0b, "hci_register_dev" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x48471741, "skb_put" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde77a6be, "nonseekable_open" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0x121445a5, "skb_pull" },
	{ 0xbec65b85, "hci_recv_frame" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0x683b9cce, "default_llseek" },
	{ 0x394f4efd, "simple_open" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "CAB09AD718B446BEA68F277");
