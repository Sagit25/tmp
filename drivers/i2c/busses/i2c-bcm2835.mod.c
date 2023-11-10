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
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xacb4d88c, "clk_rate_exclusive_put" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0x92997ed8, "_printk" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x23912872, "platform_get_resource" },
	{ 0xce23f8ca, "devm_ioremap_resource" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0xc5c070b0, "clk_hw_register_clkdev" },
	{ 0xa92a150c, "devm_clk_register" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xc5604800, "clk_set_rate_exclusive" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xa6257a2f, "complete" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-i2cC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2cC*");

MODULE_INFO(srcversion, "3B622ED2AA4BCE70F03DDA9");
