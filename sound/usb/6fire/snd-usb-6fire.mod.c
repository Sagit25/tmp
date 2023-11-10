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
	{ 0x635c6b0b, "snd_rawmidi_receive" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x1dc09e9b, "usb_control_msg_send" },
	{ 0x3a18ddba, "snd_rawmidi_transmit" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0xf25f39f5, "snd_pcm_new" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0xd78c45f2, "usb_control_msg_recv" },
	{ 0x510abc69, "snd_card_free" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x74a05018, "request_firmware" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4c7a4d79, "usb_interrupt_msg" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0x92997ed8, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x25761cc4, "snd_ctl_make_virtual_master" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xcf12e895, "snd_card_new" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbc825a83, "snd_ctl_boolean_mono_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfd48fb29, "usb_poison_urb" },
	{ 0xe5cfa168, "snd_card_free_when_closed" },
	{ 0xdb7acd4c, "snd_ctl_boolean_stereo_info" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x10c6cb91, "snd_pcm_set_ops" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdf2a8f08, "_snd_ctl_add_follower" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x143d675d, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xebc992b1, "snd_rawmidi_new" },
	{ 0xf45fb4de, "snd_card_disconnect" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x803eac35, "snd_rawmidi_set_ops" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x1c04ae7c, "snd_pcm_stop_xrun" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x5d440637, "usb_init_urb" },
	{ 0xb1b572d5, "snd_pcm_period_elapsed" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd,snd-pcm");

MODULE_ALIAS("usb:v0CCDp0080d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "15C0369C27C11532A06F275");
