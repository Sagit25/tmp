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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(btmrvl_interrupt, 0x9da78e02, "_gpl");
SYMBOL_CRC(btmrvl_check_evtpkt, 0xe6e3fae0, "_gpl");
SYMBOL_CRC(btmrvl_process_event, 0xc0ebb3a6, "_gpl");
SYMBOL_CRC(btmrvl_send_module_cfg_cmd, 0xccba8538, "_gpl");
SYMBOL_CRC(btmrvl_pscan_window_reporting, 0x9c7a75d5, "_gpl");
SYMBOL_CRC(btmrvl_send_hscfg_cmd, 0xbb980582, "_gpl");
SYMBOL_CRC(btmrvl_enable_ps, 0xbd3cbb5d, "_gpl");
SYMBOL_CRC(btmrvl_enable_hs, 0x57c559a8, "_gpl");
SYMBOL_CRC(btmrvl_register_hdev, 0x1b96a0bc, "_gpl");
SYMBOL_CRC(btmrvl_add_card, 0xc54fd5c3, "_gpl");
SYMBOL_CRC(btmrvl_remove_card, 0x92f143b5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x48471741, "skb_put" },
	{ 0xfc1279d3, "hci_free_dev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x336b6aaa, "hci_alloc_dev_priv" },
	{ 0x37a0cba, "kfree" },
	{ 0xac2d9473, "of_property_read_variable_u16_array" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x394f4efd, "simple_open" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x683b9cce, "default_llseek" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x2505bf18, "kstrtol_from_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1196dca3, "of_property_read_variable_u8_array" },
	{ 0xe9afaf24, "debugfs_create_x16" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xf5de3713, "hci_unregister_dev" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x6c90c0b, "hci_register_dev" },
	{ 0xd8141f65, "__hci_cmd_sync" },
	{ 0xb696a3e3, "debugfs_create_u8" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "1F76DFB6F84EE546EA26F89");
