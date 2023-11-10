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
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb6df0cae, "dw_spi_dma_setup_generic" },
	{ 0xde819213, "dw_spi_set_cs" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xd3606dba, "dw_spi_remove_host" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x63713aaf, "devm_platform_ioremap_resource" },
	{ 0xee6b71c4, "syscon_regmap_lookup_by_compatible" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xc226ac1b, "devm_platform_get_and_ioremap_resource" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x6f2c6791, "devm_clk_get_optional" },
	{ 0x7261cab4, "__devm_reset_control_get" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xf3c7e422, "dw_spi_add_host" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "spi-dw");

MODULE_ALIAS("of:N*T*Csnps,dw-apb-ssi");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-ssiC*");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-spi");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-spiC*");
MODULE_ALIAS("of:N*T*Cmscc,jaguar2-spi");
MODULE_ALIAS("of:N*T*Cmscc,jaguar2-spiC*");
MODULE_ALIAS("of:N*T*Camazon,alpine-dw-apb-ssi");
MODULE_ALIAS("of:N*T*Camazon,alpine-dw-apb-ssiC*");
MODULE_ALIAS("of:N*T*Crenesas,rzn1-spi");
MODULE_ALIAS("of:N*T*Crenesas,rzn1-spiC*");
MODULE_ALIAS("of:N*T*Csnps,dwc-ssi-1.01a");
MODULE_ALIAS("of:N*T*Csnps,dwc-ssi-1.01aC*");
MODULE_ALIAS("of:N*T*Cintel,keembay-ssi");
MODULE_ALIAS("of:N*T*Cintel,keembay-ssiC*");
MODULE_ALIAS("of:N*T*Cintel,thunderbay-ssi");
MODULE_ALIAS("of:N*T*Cintel,thunderbay-ssiC*");
MODULE_ALIAS("of:N*T*Cintel,mountevans-imc-ssi");
MODULE_ALIAS("of:N*T*Cintel,mountevans-imc-ssiC*");
MODULE_ALIAS("of:N*T*Cmicrochip,sparx5-spi");
MODULE_ALIAS("of:N*T*Cmicrochip,sparx5-spiC*");
MODULE_ALIAS("of:N*T*Ccanaan,k210-spi");
MODULE_ALIAS("of:N*T*Ccanaan,k210-spiC*");

MODULE_INFO(srcversion, "953437FDCCEA1440C6114BE");
