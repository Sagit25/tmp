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

SYMBOL_CRC(u_audio_set_capture_srate, 0xe45739c0, "_gpl");
SYMBOL_CRC(u_audio_get_capture_srate, 0x2a4b3717, "_gpl");
SYMBOL_CRC(u_audio_set_playback_srate, 0x564a7943, "_gpl");
SYMBOL_CRC(u_audio_get_playback_srate, 0xecf4d74e, "_gpl");
SYMBOL_CRC(u_audio_start_capture, 0xfbf0de9e, "_gpl");
SYMBOL_CRC(u_audio_stop_capture, 0x6b2dfa01, "_gpl");
SYMBOL_CRC(u_audio_start_playback, 0x088ebe20, "_gpl");
SYMBOL_CRC(u_audio_stop_playback, 0x68aeedd1, "_gpl");
SYMBOL_CRC(u_audio_suspend, 0x360c97fc, "_gpl");
SYMBOL_CRC(u_audio_get_volume, 0x1d8e0de3, "_gpl");
SYMBOL_CRC(u_audio_set_volume, 0x6c7c232b, "_gpl");
SYMBOL_CRC(u_audio_get_mute, 0xd3503dce, "_gpl");
SYMBOL_CRC(u_audio_set_mute, 0x35855e07, "_gpl");
SYMBOL_CRC(g_audio_setup, 0xbdbd3e7d, "_gpl");
SYMBOL_CRC(g_audio_cleanup, 0x9a8cb5cc, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x40fc74e1, "snd_pcm_stream_lock" },
	{ 0xfa00ebcb, "snd_pcm_stream_unlock" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb1b572d5, "snd_pcm_period_elapsed" },
	{ 0x37230f5c, "snd_ctl_notify" },
	{ 0xb313877b, "config_ep_by_speed" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0xfef3df9c, "snd_pcm_hw_constraint_integer" },
	{ 0xe5cfa168, "snd_card_free_when_closed" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xcf12e895, "snd_card_new" },
	{ 0xf25f39f5, "snd_pcm_new" },
	{ 0xdd64e639, "strscpy" },
	{ 0x10c6cb91, "snd_pcm_set_ops" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x143d675d, "snd_pcm_set_managed_buffer_all" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0x510abc69, "snd_card_free" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd,libcomposite");


MODULE_INFO(srcversion, "66C2F1631EE863C888F701E");
