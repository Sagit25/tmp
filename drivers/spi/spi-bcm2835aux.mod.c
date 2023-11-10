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
	{ 0x65cad864, "debugfs_remove" },
	{ 0x11215294, "spi_unregister_controller" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x925d3e46, "__devm_spi_alloc_controller" },
	{ 0x63713aaf, "devm_platform_ioremap_resource" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x8d851140, "spi_register_controller" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xddb15890, "debugfs_create_u64" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x10d31101, "spi_finalize_current_transfer" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-aux-spi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-aux-spiC*");

MODULE_INFO(srcversion, "53B534FACF8402A333036B8");
