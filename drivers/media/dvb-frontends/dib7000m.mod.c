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

SYMBOL_CRC(dib7000m_get_i2c_master, 0xc6da1503, "");
SYMBOL_CRC(dib7000m_pid_filter_ctrl, 0xa944c541, "");
SYMBOL_CRC(dib7000m_pid_filter, 0x59a612a4, "");
SYMBOL_CRC(dib7000m_attach, 0xe9e9964f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfba41971, "dibx000_get_i2c_adapter" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x92997ed8, "_printk" },
	{ 0x558f656d, "dibx000_exit_i2c_master" },
	{ 0x37a0cba, "kfree" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9d8799e0, "dibx000_init_i2c_master" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dibx000_common");


MODULE_INFO(srcversion, "4EB59E208DBF6E609F11148");
