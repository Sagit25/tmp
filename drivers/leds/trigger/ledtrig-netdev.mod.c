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
	{ 0x125569ad, "led_trigger_register" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x29c30ba8, "led_trigger_unregister" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x37a0cba, "kfree" },
	{ 0xd106b29e, "led_set_brightness" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xc859660a, "dev_get_stats" },
	{ 0x5dd13134, "led_stop_software_blink" },
	{ 0xc8e8a6bf, "led_blink_set_oneshot" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x4829a47e, "memcpy" },
	{ 0x459e03b6, "init_net" },
	{ 0xa8862a9e, "dev_get_by_name" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B4E4CD5F3AA1D80AFB2B55A");
