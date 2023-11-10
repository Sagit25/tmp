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
	{ 0xe52de225, "regulator_enable" },
	{ 0x1c497e, "input_copy_abs" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x86d9791, "input_mt_sync_frame" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x74a05018, "request_firmware" },
	{ 0xeba70710, "input_mt_report_slot_state" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x72a217ee, "request_firmware_nowait" },
	{ 0x5f0265b, "gpiod_direction_output_raw" },
	{ 0x24d273d1, "add_timer" },
	{ 0xd34af60c, "input_mt_init_slots" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x604f36d6, "gpiod_direction_input" },
	{ 0x93426ecd, "device_property_read_string" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0xdcb764ad, "memset" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x441916ec, "input_event" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf0f52d0a, "touchscreen_report_pos" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x423b6e98, "input_alloc_absinfo" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x31065e62, "touchscreen_parse_properties" },
	{ 0x796376c1, "gpiod_direction_output" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgoodix,gt1151");
MODULE_ALIAS("of:N*T*Cgoodix,gt1151C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt1158");
MODULE_ALIAS("of:N*T*Cgoodix,gt1158C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt5663");
MODULE_ALIAS("of:N*T*Cgoodix,gt5663C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt5688");
MODULE_ALIAS("of:N*T*Cgoodix,gt5688C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt911");
MODULE_ALIAS("of:N*T*Cgoodix,gt911C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt912");
MODULE_ALIAS("of:N*T*Cgoodix,gt912C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9147");
MODULE_ALIAS("of:N*T*Cgoodix,gt9147C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt917s");
MODULE_ALIAS("of:N*T*Cgoodix,gt917sC*");
MODULE_ALIAS("of:N*T*Cgoodix,gt927");
MODULE_ALIAS("of:N*T*Cgoodix,gt927C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt928");
MODULE_ALIAS("of:N*T*Cgoodix,gt928C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9286");
MODULE_ALIAS("of:N*T*Cgoodix,gt9286C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt967");
MODULE_ALIAS("of:N*T*Cgoodix,gt967C*");
MODULE_ALIAS("i2c:GDIX1001:00");

MODULE_INFO(srcversion, "87B805DEF080DEF77FBD645");
