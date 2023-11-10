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
	{ 0x50b5daa4, "i2c_mux_del_adapters" },
	{ 0x74291057, "i2c_put_adapter" },
	{ 0x797f7937, "pinctrl_select_state" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xf1852056, "of_property_read_string_helper" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0x22e18bf, "of_get_i2c_adapter_by_node" },
	{ 0xb882b19b, "of_node_put" },
	{ 0xa6a300de, "i2c_mux_alloc" },
	{ 0x547c53c3, "devm_pinctrl_get" },
	{ 0x9dedb40d, "pinctrl_lookup_state" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8d437639, "i2c_root_adapter" },
	{ 0xce5496ea, "i2c_mux_add_adapter" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Ci2c-mux-pinctrl");
MODULE_ALIAS("of:N*T*Ci2c-mux-pinctrlC*");

MODULE_INFO(srcversion, "0007FB914A551577192845F");
