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

MODULE_INFO(staging, "Y");


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x656a32cd, "tm6000_register_extension" },
	{ 0x4829a47e, "memcpy" },
	{ 0x40fc74e1, "snd_pcm_stream_lock" },
	{ 0xfa00ebcb, "snd_pcm_stream_unlock" },
	{ 0xb1b572d5, "snd_pcm_period_elapsed" },
	{ 0x92997ed8, "_printk" },
	{ 0x510abc69, "snd_card_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b2b07d5, "snd_pcm_hw_constraint_pow2" },
	{ 0xdcb764ad, "memset" },
	{ 0xfef3df9c, "snd_pcm_hw_constraint_integer" },
	{ 0x13dbd0f0, "tm6000_unregister_extension" },
	{ 0xcf12e895, "snd_card_new" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc2935cfa, "snd_component_add" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xf25f39f5, "snd_pcm_new" },
	{ 0x10c6cb91, "snd_pcm_set_ops" },
	{ 0x143d675d, "snd_pcm_set_managed_buffer_all" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x56f41b0a, "tm6000_set_reg_mask" },
	{ 0x20d3d64f, "tm6000_set_audio_bitrate" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "tm6000,snd-pcm,snd");


MODULE_INFO(srcversion, "53C366BD3E0F170C748D0BE");
