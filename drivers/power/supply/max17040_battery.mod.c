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
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x1373d0ec, "power_supply_get_drvdata" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x23359264, "device_property_read_u8_array" },
	{ 0xe8c6fb24, "devm_power_supply_register" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xb85b636f, "power_supply_changed" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cmaxim,max17040");
MODULE_ALIAS("of:N*T*Cmaxim,max17040C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17041");
MODULE_ALIAS("of:N*T*Cmaxim,max17041C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17043");
MODULE_ALIAS("of:N*T*Cmaxim,max17043C*");
MODULE_ALIAS("of:N*T*Cmaxim,max77836-battery");
MODULE_ALIAS("of:N*T*Cmaxim,max77836-batteryC*");
MODULE_ALIAS("of:N*T*Cmaxim,max17044");
MODULE_ALIAS("of:N*T*Cmaxim,max17044C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17048");
MODULE_ALIAS("of:N*T*Cmaxim,max17048C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17049");
MODULE_ALIAS("of:N*T*Cmaxim,max17049C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17058");
MODULE_ALIAS("of:N*T*Cmaxim,max17058C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17059");
MODULE_ALIAS("of:N*T*Cmaxim,max17059C*");
MODULE_ALIAS("i2c:max17040");
MODULE_ALIAS("i2c:max17041");
MODULE_ALIAS("i2c:max17043");
MODULE_ALIAS("i2c:max77836-battery");
MODULE_ALIAS("i2c:max17044");
MODULE_ALIAS("i2c:max17048");
MODULE_ALIAS("i2c:max17049");
MODULE_ALIAS("i2c:max17058");
MODULE_ALIAS("i2c:max17059");

MODULE_INFO(srcversion, "18B86EF7854A0174C8BFEA6");
