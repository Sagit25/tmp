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
	{ 0xb64aaae3, "phy_drivers_register" },
	{ 0x95fcd233, "mdiobus_write" },
	{ 0xc8149da5, "genphy_soft_reset" },
	{ 0x48131838, "phy_drivers_unregister" },
	{ 0x3ccb9773, "phy_init_hw" },
	{ 0xebdba1e1, "phy_start_aneg" },
	{ 0xed3c380e, "genphy_update_link" },
	{ 0x30202801, "mdiobus_read" },
	{ 0x125ffd00, "genphy_read_lpa" },
	{ 0xb6aee46a, "phy_resolve_aneg_linkmode" },
	{ 0x83dbf0be, "genphy_suspend" },
	{ 0x7b501d1e, "genphy_resume" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:00000000001110110001100001100001");
MODULE_ALIAS("mdio:00000000001110110001100010000001");
MODULE_ALIAS("mdio:0000000000111011000110000100????");

MODULE_INFO(srcversion, "9C5FBC9EFAE0F3C543A5C0D");
