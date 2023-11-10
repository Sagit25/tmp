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
	{ 0xf883c540, "charlcd_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xa16de2d2, "gpiod_count" },
	{ 0x79e8e259, "hd44780_common_alloc" },
	{ 0x8b45326c, "charlcd_alloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x137812e9, "devm_gpiod_get_index" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x6fd9cc4a, "charlcd_register" },
	{ 0xebf5cd86, "gpiod_set_array_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36dc00a2, "hd44780_common_print" },
	{ 0x7b26ecc, "hd44780_common_gotoxy" },
	{ 0x3c4c183f, "hd44780_common_home" },
	{ 0x23159a5b, "hd44780_common_clear_display" },
	{ 0x8d4f3fa4, "hd44780_common_init_display" },
	{ 0xc369090d, "hd44780_common_shift_cursor" },
	{ 0x30e85287, "hd44780_common_shift_display" },
	{ 0x64415593, "hd44780_common_display" },
	{ 0xa22afdaa, "hd44780_common_cursor" },
	{ 0x8585e5fd, "hd44780_common_blink" },
	{ 0xf360d788, "hd44780_common_fontsize" },
	{ 0x1aa688fd, "hd44780_common_lines" },
	{ 0x489c89e8, "hd44780_common_redefine_char" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "charlcd,hd44780_common");

MODULE_ALIAS("of:N*T*Chit,hd44780");
MODULE_ALIAS("of:N*T*Chit,hd44780C*");

MODULE_INFO(srcversion, "E58A35AA0E9C59A1E993AEB");
