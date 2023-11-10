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

SYMBOL_CRC(dibusb_dib3000mc_frontend_attach, 0x15eb687e, "");
SYMBOL_CRC(dibusb_dib3000mc_tuner_attach, 0x3a947ae9, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x71127504, "dib3000mc_set_config" },
	{ 0x276ae2f4, "dib3000mc_get_tuner_i2c_master" },
	{ 0x26d650c0, "dib3000mc_pid_control" },
	{ 0x73e5187a, "dib3000mc_pid_parse" },
	{ 0x97294024, "dibusb_read_eeprom_byte" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dib3000mc,dvb-usb-dibusb-common");


MODULE_INFO(srcversion, "00E8DCD47EF9FD2F5184081");
