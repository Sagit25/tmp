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

SYMBOL_CRC(ffs_lock, 0x6c825859, "_gpl");
SYMBOL_CRC(ffs_name_dev, 0x59fe4d02, "_gpl");
SYMBOL_CRC(ffs_single_dev, 0x12d8324a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbcacd7f6, "_copy_to_iter" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa1e209dc, "usb_string_ids_n" },
	{ 0xf6762c97, "simple_dir_inode_operations" },
	{ 0xd90d784, "usb_ep_fifo_flush" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x76f0cd8e, "vmalloc_to_page" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0xe9668d19, "new_inode" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x49758fc7, "unregister_filesystem" },
	{ 0x14050dae, "usb_interface_id" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd144f4bf, "d_alloc_name" },
	{ 0x12ec485a, "simple_statfs" },
	{ 0x84dd752b, "d_make_root" },
	{ 0x809a8e2e, "current_time" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x49d9f030, "usb_ep_fifo_status" },
	{ 0x1d79c8e1, "logfc" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x95d849eb, "fs_param_is_bool" },
	{ 0xe2964344, "__wake_up" },
	{ 0xb8413079, "register_filesystem" },
	{ 0xe9c8e77d, "kiocb_set_cancel_fn" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x1a510479, "kthread_use_mm" },
	{ 0x32127f5b, "get_tree_nodev" },
	{ 0xb313877b, "config_ep_by_speed" },
	{ 0xb07e8f9e, "fs_param_is_u32" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x893abd4a, "make_kuid" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xb8ea7253, "simple_dir_operations" },
	{ 0xa916b694, "strnlen" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xd9f49540, "compat_ptr_ioctl" },
	{ 0x829925fd, "usb_function_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5fc294ef, "usb_ep_clear_halt" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0x5102a30b, "do_wait_intr_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x3389d953, "usb_ep_autoconfig" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8cc39adf, "unregister_gadget_item" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x68e6942f, "usb_put_function_instance" },
	{ 0x7cd948ed, "kill_litter_super" },
	{ 0xd2ba40a8, "sg_alloc_table_from_pages_segment" },
	{ 0xdcb764ad, "memset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6300f56, "make_kgid" },
	{ 0x72b23fe6, "d_delete" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x4125292c, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0xdd64e639, "strscpy" },
	{ 0x999e8297, "vfree" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0x1e9bcf6b, "d_add" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8626ed82, "dup_iter" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7617fdac, "dput" },
	{ 0xeaf44a21, "generic_delete_inode" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xdc9d5e93, "stream_open" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x49a2986d, "__fs_parse" },
	{ 0x4e65cd50, "kthread_unuse_mm" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "1FB4B33D53FE1966C62C3FA");
