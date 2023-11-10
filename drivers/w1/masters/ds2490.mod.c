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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3b9bfb5c, "w1_remove_master_device" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x4c7a4d79, "usb_interrupt_msg" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xdc6e08d5, "usb_clear_halt" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0x41bc3488, "usb_reset_configuration" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0xdcb764ad, "memset" },
	{ 0x63fcb7b2, "w1_add_master_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("usb:v04FAp2490d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "071AD93C611D13602C2F252");
