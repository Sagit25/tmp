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
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x604f36d6, "gpiod_direction_input" },
	{ 0x796376c1, "gpiod_direction_output" },
	{ 0x806348dc, "spi_bitbang_cleanup" },
	{ 0x2cd095a1, "spi_bitbang_setup" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x137812e9, "devm_gpiod_get_index" },
	{ 0x925d3e46, "__devm_spi_alloc_controller" },
	{ 0xa16de2d2, "gpiod_count" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0x7a9c89e0, "spi_bitbang_setup_transfer" },
	{ 0x99ddd7a9, "spi_bitbang_init" },
	{ 0x2fed0ad0, "devm_spi_register_controller" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "spi-bitbang");

MODULE_ALIAS("of:N*T*Cspi-gpio");
MODULE_ALIAS("of:N*T*Cspi-gpioC*");

MODULE_INFO(srcversion, "58DC03A4BD5A05921B01617");
