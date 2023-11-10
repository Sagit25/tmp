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
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3201cc5e, "usb_sg_cancel" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa063ea85, "usb_sg_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3a0f8693, "usb_sg_wait" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xdcb764ad, "memset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa6257a2f, "complete" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3c92d652, "usb_get_status" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdc6e08d5, "usb_clear_halt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb6f28144, "usb_get_descriptor" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xd9653b2f, "param_ops_ushort" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B3AB7D80A3376517FC594B0");
