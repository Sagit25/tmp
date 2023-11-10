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

SYMBOL_CRC(adxl34x_suspend, 0x66535a18, "_gpl");
SYMBOL_CRC(adxl34x_resume, 0xe4586827, "_gpl");
SYMBOL_CRC(adxl34x_probe, 0x5b29f02e, "_gpl");
SYMBOL_CRC(adxl34x_remove, 0xec511022, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x614ff0d5, "sysfs_remove_group" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xefabe1da, "input_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x2345d009, "input_free_device" },
	{ 0x441916ec, "input_event" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8F84BA0F51A49F7A31630EA");
