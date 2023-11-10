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
	{ 0x564a7943, "u_audio_set_playback_srate" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14050dae, "usb_interface_id" },
	{ 0x3194eb2f, "usb_assign_descriptors" },
	{ 0x35855e07, "u_audio_set_mute" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c7c232b, "u_audio_set_volume" },
	{ 0x88ebe20, "u_audio_start_playback" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0xb313877b, "config_ep_by_speed" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd3503dce, "u_audio_get_mute" },
	{ 0x6b2dfa01, "u_audio_stop_capture" },
	{ 0x68aeedd1, "u_audio_stop_playback" },
	{ 0x829925fd, "usb_function_register" },
	{ 0xbdbd3e7d, "g_audio_setup" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3389d953, "usb_ep_autoconfig" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x68e6942f, "usb_put_function_instance" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x4125292c, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x360c97fc, "u_audio_suspend" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1d8e0de3, "u_audio_get_volume" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe0419ac4, "kstrtos16" },
	{ 0xfbf0de9e, "u_audio_start_capture" },
	{ 0x9a8cb5cc, "g_audio_cleanup" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xe45739c0, "u_audio_set_capture_srate" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0x8212fa83, "usb_free_all_descriptors" },
	{ 0xd143eaea, "usb_gstrings_attach" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "u_audio,libcomposite");


MODULE_INFO(srcversion, "38958BC4601B3AA2ABF4A5F");
