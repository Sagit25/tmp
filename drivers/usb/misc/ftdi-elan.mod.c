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

SYMBOL_CRC(ftdi_elan_gone_away, 0xaec41ff5, "_gpl");
SYMBOL_CRC(usb_ftdi_elan_write_pcimem, 0xbd5e6727, "_gpl");
SYMBOL_CRC(usb_ftdi_elan_read_pcimem, 0x439fed8f, "_gpl");
SYMBOL_CRC(usb_ftdi_elan_edset_setup, 0x3285f152, "_gpl");
SYMBOL_CRC(usb_ftdi_elan_edset_input, 0xb43a792c, "_gpl");
SYMBOL_CRC(usb_ftdi_elan_edset_empty, 0x989fc93c, "_gpl");
SYMBOL_CRC(usb_ftdi_elan_edset_output, 0x0448c406, "_gpl");
SYMBOL_CRC(usb_ftdi_elan_edset_single, 0x56cd9a28, "_gpl");
SYMBOL_CRC(usb_ftdi_elan_edset_flush, 0xf2aa3178, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0xa6257a2f, "complete" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0xdcb764ad, "memset" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xcf2a6966, "up" },
	{ 0xdecc3667, "usb_find_interface" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf9a482f9, "msleep" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x46232528, "usb_register_dev" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa326414f, "usb_deregister_dev" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0x6626afca, "down" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2c79d221, "platform_device_register" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0403pD6EAd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "ABFF409F780E43B3B199914");
