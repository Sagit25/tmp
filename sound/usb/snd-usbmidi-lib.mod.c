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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(snd_usbmidi_disconnect, 0xd9d2bb03, "");
SYMBOL_CRC(snd_usbmidi_input_stop, 0x63343b1d, "");
SYMBOL_CRC(snd_usbmidi_input_start, 0x16756dc0, "");
SYMBOL_CRC(snd_usbmidi_suspend, 0xbed43a41, "");
SYMBOL_CRC(snd_usbmidi_resume, 0xb2af19e1, "");
SYMBOL_CRC(__snd_usbmidi_create, 0x03b4806b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x635c6b0b, "snd_rawmidi_receive" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x3a18ddba, "snd_rawmidi_transmit" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf7c91fce, "usb_autopm_get_interface_no_resume" },
	{ 0xe2964344, "__wake_up" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x932d368d, "snd_rawmidi_transmit_ack" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xce23c857, "usb_urb_ep_type_check" },
	{ 0x57bc19d2, "down_write" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa5a6cdea, "snd_rawmidi_transmit_peek" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x37230f5c, "snd_ctl_notify" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5a7bab55, "usb_string" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x668b19a1, "down_read" },
	{ 0xebc992b1, "snd_rawmidi_new" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x803eac35, "snd_rawmidi_set_ops" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x3ac044bd, "snd_rawmidi_proceed" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");


MODULE_INFO(srcversion, "F8558A3A443A231E3D544CC");
