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
	{ 0xcd8b0854, "sdhci_pltfm_clk_get_max_clock" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x3ace43e3, "sdhci_set_clock" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x7834f4fe, "sdhci_reset" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xd39b5308, "sdhci_adma_write_desc" },
	{ 0x7d0e66dd, "sdhci_request" },
	{ 0xa3faa95e, "sdhci_remove_host" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x38122245, "sdhci_pltfm_free" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0x274ab2ef, "sdhci_pltfm_init" },
	{ 0x3cddf46d, "dma_get_required_mask" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x6f2c6791, "devm_clk_get_optional" },
	{ 0x8a7ac483, "mmc_of_parse" },
	{ 0x9c8ff143, "sdhci_get_property" },
	{ 0xe0088091, "sdhci_enable_v4_mode" },
	{ 0x99a17a6d, "sdhci_setup_host" },
	{ 0xe76a0ded, "__sdhci_add_host" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x7a6ffa02, "of_device_is_compatible" },
	{ 0x4655148f, "devm_reset_control_array_get" },
	{ 0xf12e75c2, "devm_clk_bulk_get_optional" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x1196dca3, "of_property_read_variable_u8_array" },
	{ 0xeec660c4, "sdhci_cleanup_host" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x86d4dd2f, "sdhci_set_bus_width" },
	{ 0x5bd45e19, "sdhci_pltfm_clk_get_timeout_clock" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crockchip,rk3588-dwcmshc");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-dwcmshcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-dwcmshc");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-dwcmshcC*");
MODULE_ALIAS("of:N*T*Csnps,dwcmshc-sdhci");
MODULE_ALIAS("of:N*T*Csnps,dwcmshc-sdhciC*");

MODULE_INFO(srcversion, "3484AF2BE8070F46527ECAD");
