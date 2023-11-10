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

SYMBOL_CRC(iscsi_boot_create_target, 0x2d696191, "_gpl");
SYMBOL_CRC(iscsi_boot_create_initiator, 0x52a8b09f, "_gpl");
SYMBOL_CRC(iscsi_boot_create_ethernet, 0xeb79900e, "_gpl");
SYMBOL_CRC(iscsi_boot_create_acpitbl, 0x16d6424f, "_gpl");
SYMBOL_CRC(iscsi_boot_create_kset, 0xc0e2e266, "_gpl");
SYMBOL_CRC(iscsi_boot_create_host_kset, 0x364382c0, "_gpl");
SYMBOL_CRC(iscsi_boot_destroy_kset, 0x6635a85a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc6cbbc89, "capable" },
	{ 0x37a0cba, "kfree" },
	{ 0x614ff0d5, "sysfs_remove_group" },
	{ 0xd39ca817, "kobject_put" },
	{ 0x9674484b, "kset_unregister" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xbeb983b5, "firmware_kobj" },
	{ 0xa0a1468f, "kset_create_and_add" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe4aac435, "kobject_init_and_add" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0x52427fe4, "kobject_uevent" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C20997ECCE1CF436DF99F29");
