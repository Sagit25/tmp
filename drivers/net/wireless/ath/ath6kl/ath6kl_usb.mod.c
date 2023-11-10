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
	{ 0xffad1d54, "usb_anchor_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x48471741, "skb_put" },
	{ 0x972a3723, "consume_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0xf8392f83, "ath6kl_core_tx_complete" },
	{ 0x4829a47e, "memcpy" },
	{ 0xae8ed765, "ath6kl_core_rx_complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x4894e3b4, "ath6kl_core_init" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xb22732d5, "ath6kl_stop_txrx" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x1354043d, "ath6kl_warn" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xb9a689dd, "ath6kl_err" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x3c683526, "usb_unanchor_urb" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x817005e, "ath6kl_core_create" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x759f1c81, "ath6kl_core_cleanup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x28630ecd, "ath6kl_core_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ath6kl_core");

MODULE_ALIAS("usb:v0CF3p9375d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p9374d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp390Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "319B893918F602E7F9E6E9E");
