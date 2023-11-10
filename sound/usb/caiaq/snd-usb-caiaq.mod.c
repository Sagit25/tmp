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
	{ 0xefabe1da, "input_allocate_device" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x635c6b0b, "snd_rawmidi_receive" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x69255f54, "snd_pcm_hw_limit_rates" },
	{ 0x3a18ddba, "snd_rawmidi_transmit" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0xf25f39f5, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0x510abc69, "snd_card_free" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x2345d009, "input_free_device" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0xf1564295, "input_register_device" },
	{ 0xec80a4a6, "usb_reset_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xcf12e895, "snd_card_new" },
	{ 0xce23c857, "usb_urb_ep_type_check" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9e67059c, "snd_card_set_id" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x10c6cb91, "snd_pcm_set_ops" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5a7bab55, "usb_string" },
	{ 0x143d675d, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x441916ec, "input_event" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0xebc992b1, "snd_rawmidi_new" },
	{ 0xf45fb4de, "snd_card_disconnect" },
	{ 0xdd64e639, "strscpy" },
	{ 0x803eac35, "snd_rawmidi_set_ops" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x5d440637, "usb_init_urb" },
	{ 0xb1b572d5, "snd_pcm_period_elapsed" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-pcm,snd");

MODULE_ALIAS("usb:v17CCp1969d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1978d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1915d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0D8Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp2305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCpBAFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0808d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DB42534C44C061BAB772F92");
