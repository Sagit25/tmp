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
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1c149c2e, "__hid_register_driver" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7c300bdc, "hid_hw_raw_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0x1373d0ec, "power_supply_get_drvdata" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x30faa048, "usb_hid_driver" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0xe8c6fb24, "devm_power_supply_register" },
	{ 0xce38be48, "power_supply_powers" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0x89198190, "hid_hw_start" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0x441916ec, "input_event" },
	{ 0xb85b636f, "power_supply_changed" },
	{ 0xeba70710, "input_mt_report_slot_state" },
	{ 0x86d9791, "input_mt_sync_frame" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0x423b6e98, "input_alloc_absinfo" },
	{ 0xd34af60c, "input_mt_init_slots" },
	{ 0x15b1c8fc, "devm_led_classdev_register_ext" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0018g*v00000B05p00008585");
MODULE_ALIAS("hid:b0018g*v00000B05p00000101");
MODULE_ALIAS("hid:b0003g*v00000B05p00001854");
MODULE_ALIAS("hid:b0003g*v00000B05p00001837");
MODULE_ALIAS("hid:b0003g*v00000B05p00001822");
MODULE_ALIAS("hid:b0003g*v00000B05p00001869");
MODULE_ALIAS("hid:b0003g*v00000B05p00001866");
MODULE_ALIAS("hid:b0003g*v00000B05p000019B6");
MODULE_ALIAS("hid:b0003g*v00000B05p0000196B");
MODULE_ALIAS("hid:b0003g*v00000B05p000017E0");
MODULE_ALIAS("hid:b0003g*v00000B05p00001807");
MODULE_ALIAS("hid:b0003g*v000004F2p00001125");
MODULE_ALIAS("hid:b0003g*v0000062Ap00005110");
MODULE_ALIAS("hid:b0003g*v00000C45p00005112");
MODULE_ALIAS("hid:b0005g*v00000B05p00008502");
MODULE_ALIAS("hid:b0003g*v0000048Dp0000CE50");
MODULE_ALIAS("hid:b0003g0001v00000B05p0000183D");

MODULE_INFO(srcversion, "060A7ECF42995BC457C8809");
