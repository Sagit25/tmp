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
	{ 0x7c300bdc, "hid_hw_raw_request" },
	{ 0xc3acf18e, "hid_alloc_report_buf" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1c149c2e, "__hid_register_driver" },
	{ 0x99ab0cdc, "hid_parse_report" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5495392, "hid_debug" },
	{ 0xefabe1da, "input_allocate_device" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0x423b6e98, "input_alloc_absinfo" },
	{ 0xf1564295, "input_register_device" },
	{ 0x2345d009, "input_free_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x1373d0ec, "power_supply_get_drvdata" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8b5626a3, "power_supply_unregister" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x78b34fa8, "hid_destroy_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x87ee74ed, "hid_hw_close" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0x441916ec, "input_event" },
	{ 0xc8c45145, "hid_input_report" },
	{ 0xb85b636f, "power_supply_changed" },
	{ 0x389daaef, "param_set_bool" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0xaf8e19e, "power_supply_register" },
	{ 0xce38be48, "power_supply_powers" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd96a3ad0, "hid_allocate_device" },
	{ 0x89198190, "hid_hw_start" },
	{ 0x1a9f20b5, "hid_add_device" },
	{ 0xa5a1fe62, "hid_hw_open" },
	{ 0x3aa7d5eb, "param_get_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000028DEp00001102");
MODULE_ALIAS("hid:b0003g*v000028DEp00001142");

MODULE_INFO(srcversion, "45C6258392E27EE56B1731C");
