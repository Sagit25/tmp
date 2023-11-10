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

SYMBOL_CRC(au8522_writereg, 0x5c6fc533, "");
SYMBOL_CRC(au8522_readreg, 0xf37e78ab, "");
SYMBOL_CRC(au8522_i2c_gate_ctrl, 0xd2e79803, "");
SYMBOL_CRC(au8522_analog_i2c_gate_ctrl, 0xc7236533, "");
SYMBOL_CRC(au8522_get_state, 0x17acab83, "");
SYMBOL_CRC(au8522_release_state, 0xcf5f0796, "");
SYMBOL_CRC(au8522_led_ctrl, 0x2e034866, "");
SYMBOL_CRC(au8522_init, 0xc9edc734, "");
SYMBOL_CRC(au8522_sleep, 0xdeaae41e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "85463878324D71B131F2A22");
