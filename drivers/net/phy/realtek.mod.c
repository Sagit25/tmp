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
	{ 0x30202801, "mdiobus_read" },
	{ 0x5bd98549, "phy_trigger_machine" },
	{ 0xbd44a230, "phy_error" },
	{ 0x2105a9c9, "phy_modify_changed" },
	{ 0xc8149da5, "genphy_soft_reset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x3292fc6f, "phy_modify" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xe21a3b69, "__mdiobus_write" },
	{ 0x6faaa594, "__mdiobus_read" },
	{ 0x95fcd233, "mdiobus_write" },
	{ 0x7b501d1e, "genphy_resume" },
	{ 0x83dbf0be, "genphy_suspend" },
	{ 0xb084dbf7, "phy_read_paged" },
	{ 0xf466f3e7, "__genphy_config_aneg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x6af2ab47, "phy_modify_paged_changed" },
	{ 0xb39e57a4, "phy_modify_paged" },
	{ 0x72fb33f0, "phy_select_page" },
	{ 0x6d64fc06, "__phy_modify" },
	{ 0x8cd7ff64, "phy_restore_page" },
	{ 0x48131838, "phy_drivers_unregister" },
	{ 0xed3c380e, "genphy_update_link" },
	{ 0xd7b1874c, "phy_write_paged" },
	{ 0x2c479ca3, "genphy_read_status" },
	{ 0xfbe87375, "genphy_read_abilities" },
	{ 0xe1d293ca, "genphy_read_mmd_unsupported" },
	{ 0x6cf08bea, "genphy_write_mmd_unsupported" },
	{ 0x70a0cd4f, "genphy_handle_interrupt_no_ack" },
	{ 0x9f9c7781, "phy_basic_t1_features" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000011100110010??????????");

MODULE_INFO(srcversion, "C3F61739B11C8319F09EEFD");
