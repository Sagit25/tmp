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
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x778bda51, "tty_port_tty_wakeup" },
	{ 0xe2964344, "__wake_up" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc1790d5a, "usb_serial_deregister_drivers" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0x1266d3a6, "tty_encode_baud_rate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xa1bfdb49, "tty_insert_flip_string_fixed_flag" },
	{ 0xaeb00205, "tty_flip_buffer_push" },
	{ 0xc5e7a361, "tty_port_tty_get" },
	{ 0x5b1c34e9, "tty_kref_put" },
	{ 0x5a7bab55, "usb_string" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x74a05018, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x3eb193c6, "usb_serial_generic_tiocmiwait" },
	{ 0xb5295afa, "usb_serial_generic_get_icount" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1608p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p1403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D9pA758d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D9pA794d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D9pA225d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A14A39D03F432C44EA145D9");
