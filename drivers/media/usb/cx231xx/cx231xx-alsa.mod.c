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
	{ 0x694b2a9a, "cx231xx_unregister_extension" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xf25f39f5, "snd_pcm_new" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0x510abc69, "snd_card_free" },
	{ 0x95225005, "cx231xx_set_alt_setting" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x39fe6647, "cx231xx_capture_start" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xcf12e895, "snd_card_new" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8b02f66d, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe5cfa168, "snd_card_free_when_closed" },
	{ 0x10c6cb91, "snd_pcm_set_ops" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x143d675d, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0xa80bbe00, "cx231xx_register_extension" },
	{ 0xfef3df9c, "snd_pcm_hw_constraint_integer" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xbaea8afb, "_snd_pcm_stream_lock_irqsave" },
	{ 0xf30730d, "v4l2_subdev_call_wrappers" },
	{ 0xb1b572d5, "snd_pcm_period_elapsed" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xddf5bc48, "is_fw_load" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cx231xx,snd-pcm,snd,videodev");


MODULE_INFO(srcversion, "0C14BF5DE2AD350512AFC6A");
