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
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x86d9791, "input_mt_sync_frame" },
	{ 0x441916ec, "input_event" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xeba70710, "input_mt_report_slot_state" },
	{ 0xf0f52d0a, "touchscreen_report_pos" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xf9a482f9, "msleep" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0x31065e62, "touchscreen_parse_properties" },
	{ 0xd34af60c, "input_mt_init_slots" },
	{ 0xf1564295, "input_register_device" },
	{ 0xd903f981, "devm_add_action" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x3f0fe375, "devm_device_add_group" },
	{ 0xbc15ad04, "i2c_match_id" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ceeti,exc3000");
MODULE_ALIAS("of:N*T*Ceeti,exc3000C*");
MODULE_ALIAS("of:N*T*Ceeti,exc80h60");
MODULE_ALIAS("of:N*T*Ceeti,exc80h60C*");
MODULE_ALIAS("of:N*T*Ceeti,exc80h84");
MODULE_ALIAS("of:N*T*Ceeti,exc80h84C*");
MODULE_ALIAS("i2c:exc3000");
MODULE_ALIAS("i2c:exc80h60");
MODULE_ALIAS("i2c:exc80h84");

MODULE_INFO(srcversion, "4745A665230A44C0FCD6A3D");
