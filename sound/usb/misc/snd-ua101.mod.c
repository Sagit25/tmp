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
	{ 0xe914e41e, "strcpy" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0xf25f39f5, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcb319d8, "usb_ifnum_to_if" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0x510abc69, "snd_card_free" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x468e478d, "snd_pcm_hw_constraint_minmax" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5de2d534, "usb_driver_release_interface" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xcf12e895, "snd_card_new" },
	{ 0x3b4806b, "__snd_usbmidi_create" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x81fbeed7, "usb_driver_claim_interface" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xe5cfa168, "snd_card_free_when_closed" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x10c6cb91, "snd_pcm_set_ops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x143d675d, "snd_pcm_set_managed_buffer_all" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf45fb4de, "snd_card_disconnect" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x1c04ae7c, "snd_pcm_stop_xrun" },
	{ 0x1f0870c0, "snd_pcm_hw_constraint_msbits" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x5d440637, "usb_init_urb" },
	{ 0xb1b572d5, "snd_pcm_period_elapsed" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-usbmidi-lib");

MODULE_ALIAS("usb:v0582p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p007Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p008Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "777B7BA42B1924D686404EA");
