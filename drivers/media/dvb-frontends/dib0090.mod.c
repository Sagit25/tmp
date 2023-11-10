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

SYMBOL_CRC(dib0090_dcc_freq, 0x0175e6e8, "");
SYMBOL_CRC(dib0090_pwm_gain_reset, 0xd14b2bbb, "");
SYMBOL_CRC(dib0090_set_dc_servo, 0x271ae941, "");
SYMBOL_CRC(dib0090_gain_control, 0x3cbec678, "");
SYMBOL_CRC(dib0090_get_current_gain, 0x301c0845, "");
SYMBOL_CRC(dib0090_get_wbd_target, 0x73232c32, "");
SYMBOL_CRC(dib0090_get_wbd_offset, 0xc7a801f7, "");
SYMBOL_CRC(dib0090_set_switch, 0x8cfb74c4, "");
SYMBOL_CRC(dib0090_set_vga, 0x06ea175c, "");
SYMBOL_CRC(dib0090_update_rframp_7090, 0x209cfb78, "");
SYMBOL_CRC(dib0090_update_tuning_table_7090, 0xb5a0509c, "");
SYMBOL_CRC(dib0090_get_tune_state, 0x2ccab7a8, "");
SYMBOL_CRC(dib0090_set_tune_state, 0x1b162bec, "");
SYMBOL_CRC(dib0090_register, 0x9cb26f34, "_gpl");
SYMBOL_CRC(dib0090_fw_register, 0x3d82bd7c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F0EC1C2F8909D0ECB619252");
