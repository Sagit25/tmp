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
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0xb390d486, "w5100_remove" },
	{ 0x5b81004c, "of_get_mac_address" },
	{ 0x209009ac, "of_match_device" },
	{ 0xaa1e2af9, "w5100_probe" },
	{ 0x185e9f15, "spi_get_device_id" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x20d4f3f1, "w5100_ops_priv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8b65f896, "spi_write_then_read" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6bdba0d3, "w5100_pm_ops" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "w5100");

MODULE_ALIAS("spi:w5100");
MODULE_ALIAS("spi:w5200");
MODULE_ALIAS("spi:w5500");
MODULE_ALIAS("of:N*T*Cwiznet,w5100");
MODULE_ALIAS("of:N*T*Cwiznet,w5100C*");
MODULE_ALIAS("of:N*T*Cwiznet,w5200");
MODULE_ALIAS("of:N*T*Cwiznet,w5200C*");
MODULE_ALIAS("of:N*T*Cwiznet,w5500");
MODULE_ALIAS("of:N*T*Cwiznet,w5500C*");

MODULE_INFO(srcversion, "FDF6443D981571F99C29532");
