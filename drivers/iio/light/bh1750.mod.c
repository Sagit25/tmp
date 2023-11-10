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
	{ 0xc768ff0f, "i2c_smbus_write_byte" },
	{ 0xa207ec7d, "iio_device_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x695daad2, "__iio_device_register" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x96848186, "scnprintf" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Crohm,bh1710");
MODULE_ALIAS("of:N*T*Crohm,bh1710C*");
MODULE_ALIAS("of:N*T*Crohm,bh1715");
MODULE_ALIAS("of:N*T*Crohm,bh1715C*");
MODULE_ALIAS("of:N*T*Crohm,bh1721");
MODULE_ALIAS("of:N*T*Crohm,bh1721C*");
MODULE_ALIAS("of:N*T*Crohm,bh1750");
MODULE_ALIAS("of:N*T*Crohm,bh1750C*");
MODULE_ALIAS("of:N*T*Crohm,bh1751");
MODULE_ALIAS("of:N*T*Crohm,bh1751C*");
MODULE_ALIAS("i2c:bh1710");
MODULE_ALIAS("i2c:bh1715");
MODULE_ALIAS("i2c:bh1721");
MODULE_ALIAS("i2c:bh1750");
MODULE_ALIAS("i2c:bh1751");

MODULE_INFO(srcversion, "9EBC3C5CA679770F692A7AD");
