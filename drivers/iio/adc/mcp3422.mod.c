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
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xb43d639b, "__devm_iio_device_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp3421");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3421C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3422");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3422C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3423");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3423C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3424");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3424C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3425");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3425C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3426");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3426C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3427");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3427C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3428");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3428C*");
MODULE_ALIAS("i2c:mcp3421");
MODULE_ALIAS("i2c:mcp3422");
MODULE_ALIAS("i2c:mcp3423");
MODULE_ALIAS("i2c:mcp3424");
MODULE_ALIAS("i2c:mcp3425");
MODULE_ALIAS("i2c:mcp3426");
MODULE_ALIAS("i2c:mcp3427");
MODULE_ALIAS("i2c:mcp3428");

MODULE_INFO(srcversion, "E6A3E24C881831EFB9ADFAB");
