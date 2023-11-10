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

SYMBOL_CRC(dibusb_streaming_ctrl, 0x2c908054, "");
SYMBOL_CRC(dibusb_pid_filter, 0xf024beab, "");
SYMBOL_CRC(dibusb_pid_filter_ctrl, 0x805b9bd4, "");
SYMBOL_CRC(dibusb_power_ctrl, 0xfc01eb36, "");
SYMBOL_CRC(dibusb2_0_streaming_ctrl, 0x4a2f5d5f, "");
SYMBOL_CRC(dibusb2_0_power_ctrl, 0x0e852bdb, "");
SYMBOL_CRC(dibusb_i2c_algo, 0x1e9d6ccc, "");
SYMBOL_CRC(dibusb_read_eeprom_byte, 0x97294024, "");
SYMBOL_CRC(rc_map_dibusb_table, 0x93822ecb, "");
SYMBOL_CRC(dibusb_rc_query, 0xd872e52f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe6681111, "dvb_usb_nec_rc_key_to_event" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa80fd448, "dvb_usb_generic_rw" },
	{ 0x92997ed8, "_printk" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x6cde15c4, "dvb_usb_generic_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dvb-usb");


MODULE_INFO(srcversion, "00BFE6C0115764BA5F073E0");
