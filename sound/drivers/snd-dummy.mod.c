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
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0xf25f39f5, "snd_pcm_new" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0x468e478d, "snd_pcm_hw_constraint_minmax" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x37230f5c, "snd_ctl_notify" },
	{ 0xdb7acd4c, "snd_ctl_boolean_stereo_info" },
	{ 0x10c6cb91, "snd_pcm_set_ops" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x143d675d, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xfef3df9c, "snd_pcm_hw_constraint_integer" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5561da8a, "platform_device_register_full" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xb7cdc83d, "snd_devm_card_new" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xb1b572d5, "snd_pcm_period_elapsed" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-pcm");


MODULE_INFO(srcversion, "FE34C8309F6DD08B2C9D90A");
