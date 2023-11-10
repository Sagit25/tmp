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
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xc6ab5bd4, "em28xx_audio_analog_set" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0xf25f39f5, "snd_pcm_new" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcb319d8, "usb_ifnum_to_if" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0x510abc69, "snd_card_free" },
	{ 0x468e478d, "snd_pcm_hw_constraint_minmax" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xcf12e895, "snd_card_new" },
	{ 0xbc825a83, "snd_ctl_boolean_mono_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0x8b02f66d, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4f975cb8, "em28xx_unregister_extension" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x10c6cb91, "snd_pcm_set_ops" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf7482c5, "em28xx_write_ac97" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x143d675d, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0xdd5fff70, "em28xx_read_ac97" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xf45fb4de, "snd_card_disconnect" },
	{ 0xfef3df9c, "snd_pcm_hw_constraint_integer" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x164d65e0, "em28xx_register_extension" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xbaea8afb, "_snd_pcm_stream_lock_irqsave" },
	{ 0xb1b572d5, "snd_pcm_period_elapsed" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x97f91466, "_dev_printk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "em28xx,snd,snd-pcm");


MODULE_INFO(srcversion, "AC0E766732171D16A0336A2");
