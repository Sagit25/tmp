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

SYMBOL_CRC(dibx000_i2c_set_speed, 0x44c8a268, "");
SYMBOL_CRC(dibx000_get_i2c_adapter, 0xfba41971, "");
SYMBOL_CRC(dibx000_reset_i2c_master, 0xf9efaf48, "");
SYMBOL_CRC(dibx000_init_i2c_master, 0x9d8799e0, "");
SYMBOL_CRC(dibx000_exit_i2c_master, 0x558f656d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdd64e639, "strscpy" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6DD11745A53310101937BB2");
