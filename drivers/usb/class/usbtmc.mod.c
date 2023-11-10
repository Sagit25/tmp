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
	{ 0x63230d82, "usb_register_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xe2964344, "__wake_up" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x83d5b943, "fasync_helper" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdc6e08d5, "usb_clear_halt" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xffad1d54, "usb_anchor_urb" },
	{ 0xcf2a6966, "up" },
	{ 0x7e8d8619, "usb_anchor_empty" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5570945b, "kill_fasync" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x46232528, "usb_register_dev" },
	{ 0xa326414f, "usb_deregister_dev" },
	{ 0xdecc3667, "usb_find_interface" },
	{ 0xdcb764ad, "memset" },
	{ 0x92997ed8, "_printk" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x3c683526, "usb_unanchor_urb" },
	{ 0x6973d8b2, "usb_get_from_anchor" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x683b9cce, "default_llseek" },
	{ 0xd9f49540, "compat_ptr_ioctl" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip01in*");

MODULE_INFO(srcversion, "EB775216AE2BC55407A6F2A");
