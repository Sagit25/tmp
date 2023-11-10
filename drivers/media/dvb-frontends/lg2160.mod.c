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

SYMBOL_CRC(lg2160_attach, 0x785e9525, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x37a0cba, "kfree" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7998D19BA08E4C83CC9149F");