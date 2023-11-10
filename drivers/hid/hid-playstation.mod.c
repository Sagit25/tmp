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
	{ 0xe783e261, "sysfs_emit" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0x1373d0ec, "power_supply_get_drvdata" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xdcb764ad, "memset" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xb3870713, "hid_hw_output_report" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xffb7c514, "ida_free" },
	{ 0x87ee74ed, "hid_hw_close" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0x7c300bdc, "hid_hw_raw_request" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dc60a6f, "led_mc_calc_color_components" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x441916ec, "input_event" },
	{ 0xeba70710, "input_mt_report_slot_state" },
	{ 0x86d9791, "input_mt_sync_frame" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0x89198190, "hid_hw_start" },
	{ 0xa5a1fe62, "hid_hw_open" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0x40441910, "input_ff_create_memless" },
	{ 0xf1564295, "input_register_device" },
	{ 0x423b6e98, "input_alloc_absinfo" },
	{ 0xd34af60c, "input_mt_init_slots" },
	{ 0xe8c6fb24, "devm_power_supply_register" },
	{ 0xce38be48, "power_supply_powers" },
	{ 0xb743dff5, "devm_led_classdev_multicolor_register_ext" },
	{ 0x15b1c8fc, "devm_led_classdev_register_ext" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "led-class-multicolor,ff-memless");

MODULE_ALIAS("hid:b0005g*v0000054Cp00000CE6");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000CE6");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000DF2");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000DF2");

MODULE_INFO(srcversion, "202A0EE06B60EB0937887F4");
