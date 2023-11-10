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

SYMBOL_CRC(cec_allocate_adapter, 0x908ea4d6, "_gpl");
SYMBOL_CRC(cec_register_adapter, 0x4967e77b, "_gpl");
SYMBOL_CRC(cec_unregister_adapter, 0xd7889a07, "_gpl");
SYMBOL_CRC(cec_delete_adapter, 0x558f4d16, "_gpl");
SYMBOL_CRC(cec_get_edid_phys_addr, 0xbe4de675, "_gpl");
SYMBOL_CRC(cec_fill_conn_info_from_drm, 0xbd217e6c, "_gpl");
SYMBOL_CRC(cec_queue_pin_cec_event, 0x739406f3, "_gpl");
SYMBOL_CRC(cec_queue_pin_hpd_event, 0x4a472a6b, "_gpl");
SYMBOL_CRC(cec_queue_pin_5v_event, 0x6e0afd44, "_gpl");
SYMBOL_CRC(cec_transmit_done_ts, 0x55e09df4, "_gpl");
SYMBOL_CRC(cec_transmit_attempt_done_ts, 0x6ec1e24c, "_gpl");
SYMBOL_CRC(cec_transmit_msg, 0xc29d41ef, "_gpl");
SYMBOL_CRC(cec_received_msg_ts, 0x268d6039, "_gpl");
SYMBOL_CRC(cec_s_phys_addr, 0x7bccd8df, "_gpl");
SYMBOL_CRC(cec_s_phys_addr_from_edid, 0x1a89f9ff, "_gpl");
SYMBOL_CRC(cec_s_conn_info, 0xd4e22b6d, "_gpl");
SYMBOL_CRC(cec_s_log_addrs, 0xadbfda5e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x2a6a869d, "cdev_device_del" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0xf7dca34a, "get_device" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x92997ed8, "_printk" },
	{ 0x13575562, "cdev_device_add" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9108a880, "debugfs_create_devm_seqfile" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0xc6cbbc89, "capable" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3454fbcb, "rc_keyup" },
	{ 0x314dd00c, "bus_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x27af3192, "rc_register_device" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0xdce846aa, "rc_keydown" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x20463df4, "wait_for_completion_killable" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x39e67c3f, "rc_free_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x4b2e21d9, "rc_allocate_device" },
	{ 0xae7a9a01, "seq_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xef2a3de4, "kobject_set_name" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xb3c6f341, "single_open" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x2d6f269d, "rc_unregister_device" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xeb280106, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8623B5BE31EF35A5B06B65A");
