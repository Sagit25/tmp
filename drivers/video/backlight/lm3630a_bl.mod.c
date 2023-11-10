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
	{ 0xb26e53b2, "regmap_write" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd7b797db, "devm_backlight_device_register" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9e218444, "device_get_next_child_node" },
	{ 0xff96f8c5, "fwnode_property_read_u32_array" },
	{ 0x135ff00b, "fwnode_property_present" },
	{ 0xc116761e, "fwnode_property_read_string" },
	{ 0x1d877bf, "fwnode_handle_put" },
	{ 0xa1a99e5e, "devm_pwm_get" },
	{ 0xc4ffa827, "pwm_apply_state" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,backlight");

MODULE_ALIAS("of:N*T*Cti,lm3630a");
MODULE_ALIAS("of:N*T*Cti,lm3630aC*");
MODULE_ALIAS("i2c:lm3630a_bl");

MODULE_INFO(srcversion, "8960E71D7EF927AA73A0234");
