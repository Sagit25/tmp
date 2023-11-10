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

SYMBOL_CRC(mux_chip_alloc, 0x6a8bc9c5, "_gpl");
SYMBOL_CRC(mux_chip_register, 0xfe9ccd86, "_gpl");
SYMBOL_CRC(mux_chip_unregister, 0x94c875f8, "_gpl");
SYMBOL_CRC(mux_chip_free, 0x0e05878e, "_gpl");
SYMBOL_CRC(devm_mux_chip_alloc, 0x922e2d55, "_gpl");
SYMBOL_CRC(devm_mux_chip_register, 0xb07083c4, "_gpl");
SYMBOL_CRC(mux_control_states, 0xea264858, "_gpl");
SYMBOL_CRC(mux_control_select_delay, 0xfa64ff97, "_gpl");
SYMBOL_CRC(mux_state_select_delay, 0xfa76e911, "_gpl");
SYMBOL_CRC(mux_control_try_select_delay, 0x0bc57e8d, "_gpl");
SYMBOL_CRC(mux_state_try_select_delay, 0x0a65c89f, "_gpl");
SYMBOL_CRC(mux_control_deselect, 0x52211bbb, "_gpl");
SYMBOL_CRC(mux_state_deselect, 0x7cf08396, "_gpl");
SYMBOL_CRC(mux_control_get, 0xddafe34a, "_gpl");
SYMBOL_CRC(mux_control_put, 0xcce2add6, "_gpl");
SYMBOL_CRC(devm_mux_control_get, 0xd03fb01b, "_gpl");
SYMBOL_CRC(devm_mux_state_get, 0xda70d81f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0xf7208367, "of_property_match_string" },
	{ 0x3db8aa37, "device_match_of_node" },
	{ 0xcf2a6966, "up" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x28eced4f, "devres_add" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x606b7e51, "put_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xdcced5f2, "__class_register" },
	{ 0x7bbe500c, "device_add" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0xdc510a8f, "__devres_alloc_node" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x402beac3, "device_del" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x36b6ebbf, "down_killable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x7d26ecfe, "class_find_device" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A78BB6D2C28B016C676EBBA");
