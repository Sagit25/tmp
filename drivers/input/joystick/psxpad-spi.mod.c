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
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0x40441910, "input_ff_create_memless" },
	{ 0xd0585d22, "spi_setup" },
	{ 0x4a2cce7c, "input_setup_polling" },
	{ 0x6cf95b4d, "input_set_poll_interval" },
	{ 0xee26e8d3, "input_set_min_poll_interval" },
	{ 0x75185e80, "input_set_max_poll_interval" },
	{ 0xf1564295, "input_register_device" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x441916ec, "input_event" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("spi:psxpad-spi");

MODULE_INFO(srcversion, "D4C9AF2175BA95E846753B9");
