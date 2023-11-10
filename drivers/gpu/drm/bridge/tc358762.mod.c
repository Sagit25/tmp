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
	{ 0xdc81a946, "mipi_dsi_driver_register_full" },
	{ 0x7aee5690, "mipi_dsi_detach" },
	{ 0xfd96c75e, "drm_bridge_remove" },
	{ 0xc5c926dd, "drm_bridge_attach" },
	{ 0xca5f14d5, "mipi_dsi_driver_unregister" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x10c8df63, "devm_drm_of_get_bridge" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0x78f1ef1a, "drm_bridge_add" },
	{ 0xa4db7fd1, "mipi_dsi_attach" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xe52de225, "regulator_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdd53fed4, "mipi_dsi_generic_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("of:N*T*Ctoshiba,tc358762");
MODULE_ALIAS("of:N*T*Ctoshiba,tc358762C*");

MODULE_INFO(srcversion, "6B2DD8AB12C3FCD5795733F");
