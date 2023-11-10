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

SYMBOL_CRC(eeprom_93cx6_read, 0x884deb9d, "_gpl");
SYMBOL_CRC(eeprom_93cx6_multiread, 0xff7a0fdf, "_gpl");
SYMBOL_CRC(eeprom_93cx6_readb, 0xc9c6bb25, "_gpl");
SYMBOL_CRC(eeprom_93cx6_multireadb, 0x3cb83d5b, "_gpl");
SYMBOL_CRC(eeprom_93cx6_wren, 0x63d2ff63, "_gpl");
SYMBOL_CRC(eeprom_93cx6_write, 0x870b53e9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x92997ed8, "_printk" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EA030975DCD5C43333E98CE");
