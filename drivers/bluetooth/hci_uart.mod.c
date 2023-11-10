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

SYMBOL_CRC(hci_uart_tx_wakeup, 0x7d7a542d, "_gpl");
SYMBOL_CRC(hci_uart_register_device, 0xb8f29109, "_gpl");
SYMBOL_CRC(hci_uart_unregister_device, 0x17f52660, "_gpl");
SYMBOL_CRC(h4_recv_buf, 0x6f48fae0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x79ee3811, "percpu_free_rwsem" },
	{ 0xc13e7ab1, "tty_set_termios" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x13e16a35, "percpu_down_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x48471741, "skb_put" },
	{ 0xd7f744b8, "tty_register_ldisc" },
	{ 0xf22cc0cc, "serdev_device_set_baudrate" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xfc1279d3, "hci_free_dev" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0x6a8cf97c, "btbcm_finalize" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0xd47ccf38, "pm_runtime_set_autosuspend_delay" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xd644fdd8, "btbcm_initialize" },
	{ 0x23e2d31a, "serdev_device_set_flow_control" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0x4829a47e, "memcpy" },
	{ 0x336b6aaa, "hci_alloc_dev_priv" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c02350c, "serdev_device_open" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7a9ab03e, "devm_free_irq" },
	{ 0x9b60945e, "tty_driver_flush_buffer" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xfb45afdf, "btbcm_read_pcm_int_params" },
	{ 0xcf93b6f7, "percpu_up_write" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x23359264, "device_property_read_u8_array" },
	{ 0x5cbf2d75, "devm_clk_put" },
	{ 0x73c437ae, "serdev_device_write_flush" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x72e8b87d, "irq_get_irq_data" },
	{ 0x96267f10, "__dev_kfree_skb_irq" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xb41b8837, "n_tty_ioctl_helper" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x13c2be27, "tty_ldisc_flush" },
	{ 0xd3659ba8, "__percpu_init_rwsem" },
	{ 0x76b8c307, "__serdev_device_driver_register" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdb36c48b, "serdev_device_set_tiocm" },
	{ 0x718b8b7, "bt_info" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xc55175c, "serdev_device_write_buf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dcdd9c8, "tty_unregister_ldisc" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xf5de3713, "hci_unregister_dev" },
	{ 0x38aa1397, "gpiod_add_lookup_table" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0xbec65b85, "hci_recv_frame" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2f041d07, "of_irq_get_byname" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa956648d, "serdev_device_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x23e9b725, "__percpu_down_read" },
	{ 0xff81487d, "gpiod_remove_lookup_table" },
	{ 0x76313a49, "btbcm_write_pcm_int_params" },
	{ 0xa2a62774, "btbcm_set_bdaddr" },
	{ 0xe5525cbb, "tty_unthrottle" },
	{ 0x1ad93b01, "hci_reset_dev" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x65960bf7, "btbcm_check_bdaddr" },
	{ 0xfc7dbed4, "rcuwait_wake_up" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0x6c90c0b, "hci_register_dev" },
	{ 0xe44c1728, "__pm_runtime_use_autosuspend" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xd8141f65, "__hci_cmd_sync" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x789c9ca3, "hci_recv_diag" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bluetooth,btbcm");

MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1");
MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4329-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4329-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4334-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4334-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43430a0-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43430a0-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43430a1-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43430a1-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4349-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4349-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0C*");
MODULE_ALIAS("of:N*T*Ccypress,cyw4373a0-bt");
MODULE_ALIAS("of:N*T*Ccypress,cyw4373a0-btC*");
MODULE_ALIAS("of:N*T*Cinfineon,cyw55572-bt");
MODULE_ALIAS("of:N*T*Cinfineon,cyw55572-btC*");

MODULE_INFO(srcversion, "3FE54522B9AABB527A788C3");
