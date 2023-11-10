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
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x48471741, "skb_put" },
	{ 0xa6257a2f, "complete" },
	{ 0x44c5b3fa, "st_unregister" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x74a05018, "request_firmware" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xb5a1ac53, "param_ops_byte" },
	{ 0xc6c70dea, "st_register" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x121445a5, "skb_pull" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x390eb7ec, "v4l2_ctrl_new_std_menu" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,st_drv");


MODULE_INFO(srcversion, "D9AB826CEC334FBE04500DB");
