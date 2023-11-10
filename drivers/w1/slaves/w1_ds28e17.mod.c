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
	{ 0x1ca3e33, "w1_register_family" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9de11b05, "w1_reset_select_slave" },
	{ 0x32bd488, "w1_write_block" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8fc10b6d, "w1_write_8" },
	{ 0xb4a1a07c, "w1_read_8" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x11adcfd5, "w1_touch_bit" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xbd6841d4, "crc16" },
	{ 0x66ad212e, "w1_read_block" },
	{ 0x481a98a9, "w1_reset_resume_command" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xe914e41e, "strcpy" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0x81138b63, "w1_unregister_family" },
	{ 0xb5a1ac53, "param_ops_byte" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "596DA5B591B6BF120E4C603");
