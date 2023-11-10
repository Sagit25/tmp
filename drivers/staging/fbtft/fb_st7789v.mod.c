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

MODULE_INFO(staging, "Y");


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x196d457, "fbtft_remove_common" },
	{ 0xa3450f7d, "fbtft_probe_common" },
	{ 0xa6257a2f, "complete" },
	{ 0xac4a8966, "fbtft_write_vmem16_bus16" },
	{ 0xd2101cb1, "fbtft_write_vmem16_bus8" },
	{ 0x91feeb62, "fbtft_write_vmem16_bus9" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x9ff869eb, "gpiod_get_optional" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0x9a8a544a, "gpiod_put" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "fbtft");

MODULE_ALIAS("of:N*T*Csitronix,st7789v");
MODULE_ALIAS("of:N*T*Csitronix,st7789vC*");
MODULE_ALIAS("of:N*T*Cfbtft,minipitft13");
MODULE_ALIAS("of:N*T*Cfbtft,minipitft13C*");

MODULE_INFO(srcversion, "699B0448B0C67407BDC7CDC");
