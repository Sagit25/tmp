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
	{ 0x5495392, "hid_debug" },
	{ 0x92997ed8, "_printk" },
	{ 0x1c149c2e, "__hid_register_driver" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb3870713, "hid_hw_output_report" },
	{ 0x7c300bdc, "hid_hw_raw_request" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcb764ad, "memset" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0x98cf60b3, "strlen" },
	{ 0xf1564295, "input_register_device" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0x423b6e98, "input_alloc_absinfo" },
	{ 0x1373d0ec, "power_supply_get_drvdata" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0x89198190, "hid_hw_start" },
	{ 0x30faa048, "usb_hid_driver" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xd34af60c, "input_mt_init_slots" },
	{ 0x441916ec, "input_event" },
	{ 0xeba70710, "input_mt_report_slot_state" },
	{ 0x86d9791, "input_mt_sync_frame" },
	{ 0x87ee74ed, "hid_hw_close" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa73a99e, "hid_hw_request" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0x40441910, "input_ff_create_memless" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0xe8c6fb24, "devm_power_supply_register" },
	{ 0xce38be48, "power_supply_powers" },
	{ 0xa5a1fe62, "hid_hw_open" },
	{ 0x7b65ec7d, "hid_validate_values" },
	{ 0x15b1c8fc, "devm_led_classdev_register_ext" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
MODULE_ALIAS("hid:b0005g*v00000609p00000368");
MODULE_ALIAS("hid:b0005g*v00000609p00000369");
MODULE_ALIAS("hid:b0003g*v000012BAp0000074B");
MODULE_ALIAS("hid:b0003g*v00001430p0000474C");
MODULE_ALIAS("hid:b0003g*v000012BAp00000100");
MODULE_ALIAS("hid:b0003g*v00001430p000007BB");

MODULE_INFO(srcversion, "5312E0BFB0B50EE144B9E3C");
