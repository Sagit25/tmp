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
	{ 0x668b19a1, "down_read" },
	{ 0x53b954a2, "up_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2345d009, "input_free_device" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x57bc19d2, "down_write" },
	{ 0x614ff0d5, "sysfs_remove_group" },
	{ 0xce807a25, "up_write" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x441916ec, "input_event" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5a921311, "strncmp" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xefabe1da, "input_allocate_device" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf1564295, "input_register_device" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v6993pB001d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "0FFD3F18E43767486F24778");
