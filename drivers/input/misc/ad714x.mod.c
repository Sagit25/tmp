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

SYMBOL_CRC(ad714x_probe, 0x8e15bc86, "");
SYMBOL_CRC(ad714x_disable, 0xecfcffc2, "");
SYMBOL_CRC(ad714x_enable, 0x87bb6534, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0xf1564295, "input_register_device" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x441916ec, "input_event" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1BC1301693B6038B448D194");
