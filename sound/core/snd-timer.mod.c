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

SYMBOL_CRC(snd_timer_instance_new, 0xe508478a, "");
SYMBOL_CRC(snd_timer_instance_free, 0x51f7aae0, "");
SYMBOL_CRC(snd_timer_open, 0x4ea05f50, "");
SYMBOL_CRC(snd_timer_close, 0xf4ce8324, "");
SYMBOL_CRC(snd_timer_resolution, 0xb65b1669, "");
SYMBOL_CRC(snd_timer_start, 0xfec8d099, "");
SYMBOL_CRC(snd_timer_stop, 0x4609b16d, "");
SYMBOL_CRC(snd_timer_continue, 0x20c1f8e6, "");
SYMBOL_CRC(snd_timer_pause, 0x5152260c, "");
SYMBOL_CRC(snd_timer_interrupt, 0xdc4aa97a, "");
SYMBOL_CRC(snd_timer_new, 0x17efdd24, "");
SYMBOL_CRC(snd_timer_notify, 0x36869dff, "");
SYMBOL_CRC(snd_timer_global_new, 0xde0ac9a5, "");
SYMBOL_CRC(snd_timer_global_free, 0xa05a169e, "");
SYMBOL_CRC(snd_timer_global_register, 0x515f4e45, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1425e33, "try_module_get" },
	{ 0xe9182752, "snd_info_register" },
	{ 0xa9f96f2, "snd_info_create_module_entry" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x8360c53b, "snd_info_free_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x9fb11fac, "snd_fasync_helper" },
	{ 0xe2964344, "__wake_up" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xf7dca34a, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0xcc793c4a, "module_put" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x8c31bb98, "snd_unregister_device" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x21f8804, "snd_device_new" },
	{ 0xdcb764ad, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x5af762f1, "snd_fasync_free" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x3521c5ef, "snd_device_initialize" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xdc9d5e93, "stream_open" },
	{ 0xf8f2a4eb, "snd_kill_fasync" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x564b4d47, "snd_register_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "97311D7218B71D0AEA590D6");
