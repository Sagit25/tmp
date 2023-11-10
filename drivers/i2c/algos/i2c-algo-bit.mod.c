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

SYMBOL_CRC(i2c_bit_algo, 0x48320e2c, "");
SYMBOL_CRC(i2c_bit_add_bus, 0x7572e2c2, "");
SYMBOL_CRC(i2c_bit_add_numbered_bus, 0x5004b86f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x15ba50a6, "jiffies" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x760a0f4f, "yield" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x92997ed8, "_printk" },
	{ 0xef426f3b, "i2c_add_numbered_adapter" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6832E8A2ABAAE53858F0E30");
