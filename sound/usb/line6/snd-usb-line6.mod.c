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

SYMBOL_CRC(line6_midi_id, 0x202a1b1b, "_gpl");
SYMBOL_CRC(line6_send_raw_message, 0xcbd0d38c, "_gpl");
SYMBOL_CRC(line6_send_raw_message_async, 0xdc8037fa, "_gpl");
SYMBOL_CRC(line6_version_request_async, 0x9a6be726, "_gpl");
SYMBOL_CRC(line6_send_sysex_message, 0x200ecb29, "_gpl");
SYMBOL_CRC(line6_alloc_sysex_buffer, 0x7bd40391, "_gpl");
SYMBOL_CRC(line6_read_data, 0xf8c9fec2, "_gpl");
SYMBOL_CRC(line6_write_data, 0x6e48dae2, "_gpl");
SYMBOL_CRC(line6_read_serial_number, 0xaf4cd98e, "_gpl");
SYMBOL_CRC(line6_probe, 0xfd2e612a, "_gpl");
SYMBOL_CRC(line6_disconnect, 0x5cda0b05, "_gpl");
SYMBOL_CRC(line6_suspend, 0x30e3b9c5, "_gpl");
SYMBOL_CRC(line6_resume, 0x155e1737, "_gpl");
SYMBOL_CRC(line6_init_midi, 0xf264c3b7, "_gpl");
SYMBOL_CRC(line6_pcm_acquire, 0x017ade1f, "_gpl");
SYMBOL_CRC(line6_pcm_release, 0x4456e9ad, "_gpl");
SYMBOL_CRC(line6_init_pcm, 0x259c545e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x635c6b0b, "snd_rawmidi_receive" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x1dc09e9b, "usb_control_msg_send" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0xf25f39f5, "snd_pcm_new" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xd78c45f2, "usb_control_msg_recv" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4c7a4d79, "usb_interrupt_msg" },
	{ 0x3955fcf6, "__kfifo_in_r" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x932d368d, "snd_rawmidi_transmit_ack" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x91f16a42, "snd_pcm_hw_constraint_ratdens" },
	{ 0xcf12e895, "snd_card_new" },
	{ 0xce23c857, "usb_urb_ep_type_check" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xf8f91e4, "snd_hwdep_new" },
	{ 0xa5a6cdea, "snd_rawmidi_transmit_peek" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe5cfa168, "snd_card_free_when_closed" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x10c6cb91, "snd_pcm_set_ops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x143d675d, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6cb465a, "__kfifo_max_r" },
	{ 0xebc992b1, "snd_rawmidi_new" },
	{ 0xf45fb4de, "snd_card_disconnect" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x803eac35, "snd_rawmidi_set_ops" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2484adc3, "__kfifo_to_user_r" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb1b572d5, "snd_pcm_period_elapsed" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x7846af3e, "__kfifo_len_r" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd,snd-pcm,snd-hwdep");


MODULE_INFO(srcversion, "C2D52CAA75223828D754B8D");
