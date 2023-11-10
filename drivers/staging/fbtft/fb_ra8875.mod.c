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

MODULE_INFO(staging, "Y");


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x196d457, "fbtft_remove_common" },
	{ 0xa3450f7d, "fbtft_probe_common" },
	{ 0xcbca3a1f, "gpiod_set_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x77e9328f, "fbtft_write_spi" },
	{ 0x7b70244, "fbtft_dbg_hex" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "fbtft");

MODULE_ALIAS("of:N*T*Craio,ra8875");
MODULE_ALIAS("of:N*T*Craio,ra8875C*");

MODULE_INFO(srcversion, "4DBE193963F7C720BAD47A0");
