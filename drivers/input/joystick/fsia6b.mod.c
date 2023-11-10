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
	{ 0xbad2c909, "__serio_register_driver" },
	{ 0x7d4d7f9b, "serio_close" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x441916ec, "input_event" },
	{ 0xa41a8843, "serio_unregister_driver" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xefabe1da, "input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0x8472fd66, "serio_open" },
	{ 0x2345d009, "input_free_device" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "serio");

MODULE_ALIAS("serio:ty02pr42id*ex*");

MODULE_INFO(srcversion, "2040749EB102A067D44DC02");
