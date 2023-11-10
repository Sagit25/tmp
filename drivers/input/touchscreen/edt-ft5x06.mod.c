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
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x275ae254, "simple_attr_open" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x441916ec, "input_event" },
	{ 0xeba70710, "input_mt_report_slot_state" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x87c99dc1, "input_mt_report_pointer_emulation" },
	{ 0xf0f52d0a, "touchscreen_report_pos" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x96848186, "scnprintf" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0xe52de225, "regulator_enable" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x349cba85, "strchr" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0x31065e62, "touchscreen_parse_properties" },
	{ 0xd34af60c, "input_mt_init_slots" },
	{ 0x72e8b87d, "irq_get_irq_data" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x3f0fe375, "devm_device_add_group" },
	{ 0xf1564295, "input_register_device" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xb67f3193, "debugfs_create_u16" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x24d273d1, "add_timer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0x364a8fb9, "simple_attr_read" },
	{ 0xf7f56695, "simple_attr_write" },
	{ 0xea15f280, "simple_attr_release" },
	{ 0x394f4efd, "simple_open" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ev-ft5726");
MODULE_ALIAS("i2c:ft6236");

MODULE_INFO(srcversion, "5C6C75E3CDD6A242E878185");
