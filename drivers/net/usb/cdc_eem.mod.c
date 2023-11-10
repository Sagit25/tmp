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
	{ 0xa91d6818, "skb_copy_expand" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x48471741, "skb_put" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x121445a5, "skb_pull" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x17be2cf7, "usbnet_skb_return" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x972a3723, "consume_skb" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xbf32cadc, "usbnet_device_suggests_idle" },
	{ 0xd01bf557, "usbnet_get_endpoints" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xfca66e8f, "usbnet_probe" },
	{ 0xa7571c90, "usbnet_disconnect" },
	{ 0xdca6a77f, "usbnet_suspend" },
	{ 0x6cb0863b, "usbnet_resume" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "0C56F28F3F857885309A651");
