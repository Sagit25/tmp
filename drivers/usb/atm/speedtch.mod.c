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
	{ 0xd1d673c8, "usbatm_usb_probe" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xcb319d8, "usb_ifnum_to_if" },
	{ 0x5de2d534, "usb_driver_release_interface" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x74a05018, "request_firmware" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x81fbeed7, "usb_driver_claim_interface" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xec80a4a6, "usb_reset_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x92997ed8, "_printk" },
	{ 0x1eacf08d, "atm_dev_signal_change" },
	{ 0x5a7bab55, "usb_string" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb5a1ac53, "param_ops_byte" },
	{ 0x82740225, "usbatm_usb_disconnect" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "33CD7E92BE9C5670004633E");
