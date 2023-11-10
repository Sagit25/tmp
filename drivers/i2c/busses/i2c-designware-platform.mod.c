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
	{ 0x63713aaf, "devm_platform_ioremap_resource" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0x89c36b46, "i2c_dw_adjust_bus_speed" },
	{ 0xd47ccf38, "pm_runtime_set_autosuspend_delay" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xd8467e43, "i2c_dw_prepare_clk" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xf6ba5a52, "syscon_node_to_regmap" },
	{ 0xfd1d262c, "i2c_parse_fw_timings" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x7261cab4, "__devm_reset_control_get" },
	{ 0x6f2c6791, "devm_clk_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xdfd26ecc, "i2c_dw_validate_speed" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0xeb1a9bdb, "i2c_dw_configure_master" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xe44c1728, "__pm_runtime_use_autosuspend" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xa178f173, "i2c_dw_probe_master" },
	{ 0x45e6bd64, "__devm_regmap_init" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "i2c-designware-core");

MODULE_ALIAS("of:N*T*Csnps,designware-i2c");
MODULE_ALIAS("of:N*T*Csnps,designware-i2cC*");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-i2c");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-i2cC*");
MODULE_ALIAS("of:N*T*Cbaikal,bt1-sys-i2c");
MODULE_ALIAS("of:N*T*Cbaikal,bt1-sys-i2cC*");

MODULE_INFO(srcversion, "5E94C7229AFCE23117119EA");
