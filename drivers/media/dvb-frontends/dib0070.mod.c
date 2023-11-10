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

SYMBOL_CRC(dib0070_ctrl_agc_filter, 0x5a44ce68, "");
SYMBOL_CRC(dib0070_get_rf_output, 0x89eff567, "");
SYMBOL_CRC(dib0070_set_rf_output, 0x32ac1baf, "");
SYMBOL_CRC(dib0070_wbd_offset, 0x53bc4c9c, "");
SYMBOL_CRC(dib0070_attach, 0xca51f14f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "45C153DED06EE32B128B2F7");
