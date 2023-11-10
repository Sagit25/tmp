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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(mdiobb_read, 0xd3607a0e, "");
SYMBOL_CRC(mdiobb_write, 0x56f00ae6, "");
SYMBOL_CRC(alloc_mdio_bitbang, 0x210c5b12, "");
SYMBOL_CRC(free_mdio_bitbang, 0x575ad48d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xef4f6173, "mdiobus_alloc_size" },
	{ 0x9303f7be, "__module_get" },
	{ 0xcc793c4a, "module_put" },
	{ 0x4a18c122, "mdiobus_free" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C5BC181B4CCA47DD3A2980B");
