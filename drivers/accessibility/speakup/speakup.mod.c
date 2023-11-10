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

SYMBOL_CRC(speakup_start_ttys, 0xbbd15a51, "_gpl");
SYMBOL_CRC(synth_buffer_empty, 0x41a160e5, "_gpl");
SYMBOL_CRC(synth_buffer_getc, 0x84dad068, "_gpl");
SYMBOL_CRC(synth_buffer_peek, 0xaadb0612, "_gpl");
SYMBOL_CRC(synth_buffer_skip_nonlatin1, 0x76d40046, "_gpl");
SYMBOL_CRC(synth_buffer_clear, 0x4449e1dd, "_gpl");
SYMBOL_CRC(spk_var_show, 0x88aeaec4, "_gpl");
SYMBOL_CRC(spk_var_store, 0xc38f733a, "_gpl");
SYMBOL_CRC(spk_ttyio_ops, 0x885fcbb0, "_gpl");
SYMBOL_CRC(spk_ttyio_synth_probe, 0x9358ed10, "_gpl");
SYMBOL_CRC(spk_ttyio_release, 0x627f9d02, "_gpl");
SYMBOL_CRC(spk_ttyio_synth_immediate, 0x9c1ac5da, "_gpl");
SYMBOL_CRC(speakup_info, 0xd93829dd, "_gpl");
SYMBOL_CRC(spk_do_catch_up, 0xe74f55cd, "_gpl");
SYMBOL_CRC(spk_do_catch_up_unicode, 0xfdf41fe3, "_gpl");
SYMBOL_CRC(spk_synth_flush, 0x4ff04257, "_gpl");
SYMBOL_CRC(spk_synth_get_index, 0x7da828b0, "_gpl");
SYMBOL_CRC(spk_synth_is_alive_nop, 0x9a126a6b, "_gpl");
SYMBOL_CRC(spk_synth_is_alive_restart, 0xa92d7faf, "_gpl");
SYMBOL_CRC(synth_printf, 0xe194d0ef, "_gpl");
SYMBOL_CRC(synth_putwc, 0x466f5eb7, "_gpl");
SYMBOL_CRC(synth_putwc_s, 0x8fe0db01, "_gpl");
SYMBOL_CRC(synth_putws, 0x1e39eb14, "_gpl");
SYMBOL_CRC(synth_putws_s, 0xc319c604, "_gpl");
SYMBOL_CRC(synth_request_region, 0x8c82dfca, "_gpl");
SYMBOL_CRC(synth_release_region, 0xd8fd86cf, "_gpl");
SYMBOL_CRC(synth_add, 0x3d7e3110, "_gpl");
SYMBOL_CRC(synth_remove, 0x81a13d39, "_gpl");
SYMBOL_CRC(synth_current, 0xa58f0069, "_gpl");
SYMBOL_CRC(speakup_event, 0xb734cb9d, "_gpl");
SYMBOL_CRC(spk_get_var_header, 0xd5f5af93, "_gpl");
SYMBOL_CRC(spk_get_var, 0xc6a06d16, "_gpl");
SYMBOL_CRC(spk_set_num_var, 0x287366b3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefabe1da, "input_allocate_device" },
	{ 0x81d29043, "paste_selection" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc13e7ab1, "tty_set_termios" },
	{ 0xbf041102, "register_vt_notifier" },
	{ 0xf68aeb4d, "tty_lock" },
	{ 0x13110126, "request_resource" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xd7f744b8, "tty_register_ldisc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xca454a34, "vt_get_leds" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x196350b0, "tty_kopen_exclusive" },
	{ 0xaeb00205, "tty_flip_buffer_push" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x11862777, "inverse_translate" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5b1c34e9, "tty_kref_put" },
	{ 0x96848186, "scnprintf" },
	{ 0x6a0f82b4, "set_user_nice" },
	{ 0x4e6e8ea7, "fg_console" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xd22bddcb, "tty_kclose" },
	{ 0xe2964344, "__wake_up" },
	{ 0x148653, "vsnprintf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x146ffae8, "tty_write_room" },
	{ 0x4b1fa124, "stop_tty" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x2345d009, "input_free_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x64bbc288, "string_unescape" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x9166fada, "strncpy" },
	{ 0x13c2be27, "tty_ldisc_flush" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x9ed554b3, "unregister_keyboard_notifier" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xdcb764ad, "memset" },
	{ 0xb11d9000, "tty_dev_name_to_number" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x96601bbe, "misc_register" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0x441916ec, "input_event" },
	{ 0xc631580a, "console_unlock" },
	{ 0x22b325d5, "kd_mksound" },
	{ 0x16d233c0, "vc_cons" },
	{ 0x99009758, "kobject_create_and_add" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4dcdd9c8, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x614ff0d5, "sysfs_remove_group" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x55417264, "unregister_vt_notifier" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x96554810, "register_keyboard_notifier" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x38374815, "clear_selection" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x581e2fde, "set_selection_kernel" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41dece99, "tty_set_ldisc" },
	{ 0xf8f5ada5, "screen_pos" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xc5e74216, "release_resource" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x349cba85, "strchr" },
	{ 0xaa90317e, "start_tty" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0xca210e47, "tty_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd39ca817, "kobject_put" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3E38F17AF9548395CA434A9");
