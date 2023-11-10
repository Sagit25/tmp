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
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x48471741, "skb_put" },
	{ 0xb1e6fe42, "lbtf_bcn_sent" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x74a05018, "request_firmware" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0xec80a4a6, "usb_reset_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2349550e, "lbtf_rx" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xcd80461f, "kernel_param_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x121445a5, "skb_pull" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x96267f10, "__dev_kfree_skb_irq" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89b800fd, "kernel_param_unlock" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x8fe5ba89, "lbtf_remove_card" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xcc787f77, "lbtf_add_card" },
	{ 0xd9b9bc4, "lbtf_send_tx_feedback" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x31b1e25, "lbtf_cmd_response_rx" },
	{ 0x618d2623, "lbtf_cmd_copyback" },
	{ 0xe2adb60, "__lbtf_cmd" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libertas_tf");

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "06B16BF430AAAF7D1C69CE4");
