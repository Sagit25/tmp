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
	{ 0x1c149c2e, "__hid_register_driver" },
	{ 0x441916ec, "input_event" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x48bbac97, "input_mt_get_slot_by_key" },
	{ 0xeba70710, "input_mt_report_slot_state" },
	{ 0x86d9791, "input_mt_sync_frame" },
	{ 0x614ff0d5, "sysfs_remove_group" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa5a1fe62, "hid_hw_open" },
	{ 0x87ee74ed, "hid_hw_close" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5495392, "hid_debug" },
	{ 0xdcb764ad, "memset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb3870713, "hid_hw_output_report" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c300bdc, "hid_hw_raw_request" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1373d0ec, "power_supply_get_drvdata" },
	{ 0x5a921311, "strncmp" },
	{ 0x96848186, "scnprintf" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x37a0cba, "kfree" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0xc310b981, "strnstr" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0x423b6e98, "input_alloc_absinfo" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0xd34af60c, "input_mt_init_slots" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb85b636f, "power_supply_changed" },
	{ 0xdbc91211, "hid_report_raw_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x7cab8323, "hid_field_extract" },
	{ 0x8b13a8b8, "hid_snto32" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x4829a47e, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0x89198190, "hid_hw_start" },
	{ 0xcf2a6966, "up" },
	{ 0x30faa048, "usb_hid_driver" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0x6626afca, "down" },
	{ 0x91dd57eb, "input_ff_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0x7ea31e0c, "devm_kmemdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe8c6fb24, "devm_power_supply_register" },
	{ 0xce38be48, "power_supply_powers" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0xf1564295, "input_register_device" },
	{ 0x2345d009, "input_free_device" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g0102v0000046Dp00004011");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004101");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B00C");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00001017");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000402D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004024");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004002");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B305");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B309");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B30B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp*");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000049");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000057");
MODULE_ALIAS("hid:b0003g0104v0000046Dp0000005C");
MODULE_ALIAS("hid:b0003g0104v0000046Dp000000FE");
MODULE_ALIAS("hid:b0003g0104v0000046Dp*");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C082");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C087");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C090");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C081");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C086");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C091");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C343");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C262");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C088");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B305");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B309");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B30B");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B35F");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B008");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B012");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B015");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B01D");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B01E");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B023");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B034");

MODULE_INFO(srcversion, "104EDFC439CE0B4B17F23C3");
