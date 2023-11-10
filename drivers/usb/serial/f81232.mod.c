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
	{ 0x63230d82, "usb_register_driver" },
	{ 0x5bc9df67, "usb_serial_register_drivers" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1dc09e9b, "usb_control_msg_send" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xd78c45f2, "usb_control_msg_recv" },
	{ 0xe2964344, "__wake_up" },
	{ 0xc5e7a361, "tty_port_tty_get" },
	{ 0xcbcc835f, "usb_serial_handle_dcd_change" },
	{ 0x5b1c34e9, "tty_kref_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0x1266d3a6, "tty_encode_baud_rate" },
	{ 0xf72a65ea, "tty_get_char_size" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xf488cd00, "usb_serial_generic_resume" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc1790d5a, "usb_serial_deregister_drivers" },
	{ 0x3e794098, "usb_serial_generic_open" },
	{ 0xdcb2663e, "usb_serial_generic_close" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9192c808, "__tty_insert_flip_char" },
	{ 0xaeb00205, "tty_flip_buffer_push" },
	{ 0xa1bfdb49, "tty_insert_flip_string_fixed_flag" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x3eb193c6, "usb_serial_generic_tiocmiwait" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1934p0706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1606d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1608d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1634d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1635d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1636d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p16F8d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "273B0B6933B12643FE0B336");
