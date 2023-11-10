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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4b2e21d9, "rc_allocate_device" },
	{ 0x27af3192, "rc_register_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x39e67c3f, "rc_free_device" },
	{ 0x323f014f, "ir_raw_event_store_with_filter" },
	{ 0x570fe733, "ir_raw_event_store" },
	{ 0x8100867b, "ir_raw_event_handle" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2d6f269d, "rc_unregister_device" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x1098f88, "ir_raw_encode_scancode" },
	{ 0x37a0cba, "kfree" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9FB241CD25E84B2F14ECAB0");
