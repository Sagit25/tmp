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
	{ 0x3f059ff8, "skb_push" },
	{ 0x48471741, "skb_put" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xd01bf557, "usbnet_get_endpoints" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xf53ff0a4, "usbnet_read_cmd" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4cab5036, "usbnet_write_cmd" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x121445a5, "skb_pull" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x10a196a4, "usbnet_write_cmd_async" },
	{ 0xfca66e8f, "usbnet_probe" },
	{ 0xa7571c90, "usbnet_disconnect" },
	{ 0xdca6a77f, "usbnet_suspend" },
	{ 0x6cb0863b, "usbnet_resume" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9E2E13DA664F28278A0A277");
