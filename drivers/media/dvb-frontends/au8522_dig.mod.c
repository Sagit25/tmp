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

SYMBOL_CRC(au8522_attach, 0xdda980e5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcf5f0796, "au8522_release_state" },
	{ 0x17acab83, "au8522_get_state" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc7236533, "au8522_analog_i2c_gate_ctrl" },
	{ 0xc9edc734, "au8522_init" },
	{ 0xd2e79803, "au8522_i2c_gate_ctrl" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf37e78ab, "au8522_readreg" },
	{ 0x2e034866, "au8522_led_ctrl" },
	{ 0x5c6fc533, "au8522_writereg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdeaae41e, "au8522_sleep" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "au8522_common");


MODULE_INFO(srcversion, "C78DB9BA486AF9A843B8D06");
