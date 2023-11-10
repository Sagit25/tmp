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

SYMBOL_CRC(rfkill_get_led_trigger_name, 0xaa6f23ad, "");
SYMBOL_CRC(rfkill_set_led_trigger_name, 0x9cab34a6, "");
SYMBOL_CRC(rfkill_set_hw_state_reason, 0x0cdce87c, "");
SYMBOL_CRC(rfkill_set_sw_state, 0x8a490c90, "");
SYMBOL_CRC(rfkill_init_sw_state, 0xaad6d92f, "");
SYMBOL_CRC(rfkill_set_states, 0x85b5e625, "");
SYMBOL_CRC(rfkill_find_type, 0x50b73ce2, "");
SYMBOL_CRC(rfkill_pause_polling, 0x3939f8f0, "");
SYMBOL_CRC(rfkill_resume_polling, 0xc781bd9f, "");
SYMBOL_CRC(rfkill_blocked, 0xc0763484, "");
SYMBOL_CRC(rfkill_soft_blocked, 0xd24108d4, "");
SYMBOL_CRC(rfkill_alloc, 0xc4435de7, "");
SYMBOL_CRC(rfkill_register, 0xff282521, "");
SYMBOL_CRC(rfkill_unregister, 0x083eb21c, "");
SYMBOL_CRC(rfkill_destroy, 0xdb68bbad, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xe914e41e, "strcpy" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa9581528, "input_register_handle" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd9f49540, "compat_ptr_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdcced5f2, "__class_register" },
	{ 0x7bbe500c, "device_add" },
	{ 0x8257ed93, "input_open_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0x29c30ba8, "led_trigger_unregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4d1d0965, "input_close_device" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x402beac3, "device_del" },
	{ 0x60c3845f, "input_unregister_handler" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x96601bbe, "misc_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5e99e42c, "input_register_handler" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x125569ad, "led_trigger_register" },
	{ 0xcabbe4d5, "input_unregister_handle" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x52427fe4, "kobject_uevent" },
	{ 0xdc9d5e93, "stream_open" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x2f92afac, "led_trigger_event" },
	{ 0x98cf60b3, "strlen" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A491BFB663845C58F623F93");
