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

SYMBOL_CRC(cma3000_suspend, 0xca3f100a, "");
SYMBOL_CRC(cma3000_resume, 0x892d76b2, "");
SYMBOL_CRC(cma3000_init, 0xd9ab62a4, "");
SYMBOL_CRC(cma3000_exit, 0x89d9444e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x441916ec, "input_event" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xefabe1da, "input_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2345d009, "input_free_device" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x92997ed8, "_printk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf1564295, "input_register_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "161C7E29A95FC836302EA5A");
