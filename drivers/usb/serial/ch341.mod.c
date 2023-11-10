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
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5bc9df67, "usb_serial_register_drivers" },
	{ 0xdcb2663e, "usb_serial_generic_close" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1790d5a, "usb_serial_deregister_drivers" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xe2964344, "__wake_up" },
	{ 0xc5e7a361, "tty_port_tty_get" },
	{ 0xcbcc835f, "usb_serial_handle_dcd_change" },
	{ 0x5b1c34e9, "tty_kref_put" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xd78c45f2, "usb_control_msg_recv" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x389e5a9b, "tty_put_char" },
	{ 0xf488cd00, "usb_serial_generic_resume" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0xe816048f, "tty_termios_copy_hw" },
	{ 0x3e794098, "usb_serial_generic_open" },
	{ 0x3eb193c6, "usb_serial_generic_tiocmiwait" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1A86p5523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p7522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p7523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2184p0057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4348p5523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9986p7523d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8146E4093739E857D637C97");
