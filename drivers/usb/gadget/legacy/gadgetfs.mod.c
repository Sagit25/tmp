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
	{ 0xbcacd7f6, "_copy_to_iter" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xf6762c97, "simple_dir_inode_operations" },
	{ 0xd90d784, "usb_ep_fifo_flush" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe9668d19, "new_inode" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x49758fc7, "unregister_filesystem" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd144f4bf, "d_alloc_name" },
	{ 0x12ec485a, "simple_statfs" },
	{ 0x5570945b, "kill_fasync" },
	{ 0x84dd752b, "d_make_root" },
	{ 0x809a8e2e, "current_time" },
	{ 0x37a0cba, "kfree" },
	{ 0x49d9f030, "usb_ep_fifo_status" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xb8413079, "register_filesystem" },
	{ 0xe9c8e77d, "kiocb_set_cancel_fn" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x1a510479, "kthread_use_mm" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x893abd4a, "make_kuid" },
	{ 0xb8ea7253, "simple_dir_operations" },
	{ 0x3680a5e, "usb_gadget_vbus_draw" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x5fc294ef, "usb_ep_clear_halt" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x83d5b943, "fasync_helper" },
	{ 0x9166fada, "strncpy" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x7cd948ed, "kill_litter_super" },
	{ 0xdcb764ad, "memset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6300f56, "make_kgid" },
	{ 0x72b23fe6, "d_delete" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x99839e92, "usb_gadget_set_state" },
	{ 0x50b88f41, "usb_get_gadget_udc_name" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x7204ebbd, "usb_gadget_unregister_driver" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0x1e9bcf6b, "d_add" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0x8626ed82, "dup_iter" },
	{ 0x7617fdac, "dput" },
	{ 0xeaf44a21, "generic_delete_inode" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xa777a04c, "usb_gadget_register_driver_owner" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x4e65cd50, "kthread_unuse_mm" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x7cf79c43, "get_tree_single" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C6BA6789E1CADB4287E216A");
