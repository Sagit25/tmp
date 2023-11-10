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
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x92997ed8, "_printk" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xa6257a2f, "complete" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x98cf60b3, "strlen" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x441916ec, "input_event" },
	{ 0xdecc3667, "usb_find_interface" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xcb319d8, "usb_ifnum_to_if" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xefabe1da, "input_allocate_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0xf1564295, "input_register_device" },
	{ 0x2345d009, "input_free_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4b2e21d9, "rc_allocate_device" },
	{ 0x27af3192, "rc_register_device" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0x46232528, "usb_register_dev" },
	{ 0x39e67c3f, "rc_free_device" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbac903a7, "rc_g_keycode_from_table" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3454fbcb, "rc_keyup" },
	{ 0xdce846aa, "rc_keydown" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x614ff0d5, "sysfs_remove_group" },
	{ 0x2d6f269d, "rc_unregister_device" },
	{ 0xa326414f, "usb_deregister_dev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v15C2pFFDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0046d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BEDC0E857A87095FD1C834E");
