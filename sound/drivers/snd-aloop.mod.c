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
	{ 0x4609b16d, "snd_timer_stop" },
	{ 0x77bc13a0, "strim" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf25f39f5, "snd_pcm_new" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0xd927147d, "snd_pcm_stop" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0xf4ce8324, "snd_timer_close" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0xa4829776, "snd_card_rw_proc_new" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4ea05f50, "snd_timer_open" },
	{ 0xc48a83dc, "devm_kstrdup" },
	{ 0xbeff3891, "snd_card_ref" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x606b7e51, "put_device" },
	{ 0x853da64, "snd_pcm_hw_rule_add" },
	{ 0xfec8d099, "snd_timer_start" },
	{ 0xbc825a83, "snd_ctl_boolean_mono_info" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x37230f5c, "snd_ctl_notify" },
	{ 0x10c6cb91, "snd_pcm_set_ops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe508478a, "snd_timer_instance_new" },
	{ 0x143d675d, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0x51f7aae0, "snd_timer_instance_free" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xfef3df9c, "snd_pcm_hw_constraint_integer" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5561da8a, "platform_device_register_full" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xb7cdc83d, "snd_devm_card_new" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x1c04ae7c, "snd_pcm_stop_xrun" },
	{ 0xb1b572d5, "snd_pcm_period_elapsed" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-timer,snd,snd-pcm");


MODULE_INFO(srcversion, "D8544F9DADCEA79A5D01CE9");
