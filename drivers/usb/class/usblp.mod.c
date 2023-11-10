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
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xffad1d54, "usb_anchor_urb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x3c683526, "usb_unanchor_urb" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xe2964344, "__wake_up" },
	{ 0x92997ed8, "_printk" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x219ec1bf, "usb_put_intf" },
	{ 0xa326414f, "usb_deregister_dev" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x141b8c4e, "usb_autopm_put_interface" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdecc3667, "usb_find_interface" },
	{ 0xd68e2560, "usb_autopm_get_interface" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x878e81de, "usb_get_intf" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x46232528, "usb_register_dev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc07dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp02ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp03ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip03in*");
MODULE_ALIAS("usb:v04B8p0202d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EFA4AEE65DA637CC5975DD9");
