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

SYMBOL_CRC(rndis_status, 0x43687a1e, "_gpl");
SYMBOL_CRC(rndis_command, 0x1f6718e8, "_gpl");
SYMBOL_CRC(generic_rndis_bind, 0x0bc39d18, "_gpl");
SYMBOL_CRC(rndis_unbind, 0xea94f4e9, "_gpl");
SYMBOL_CRC(rndis_rx_fixup, 0x952a1c5d, "_gpl");
SYMBOL_CRC(rndis_tx_fixup, 0x2980ff80, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xdcb764ad, "memset" },
	{ 0x4c7a4d79, "usb_interrupt_msg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa25a4a9, "usbnet_generic_cdc_bind" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x37a0cba, "kfree" },
	{ 0x5de2d534, "usb_driver_release_interface" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xa91d6818, "skb_copy_expand" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x121445a5, "skb_pull" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xe883bccf, "usbnet_cdc_zte_rx_fixup" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x17be2cf7, "usbnet_skb_return" },
	{ 0x8b4f0025, "usbnet_cdc_unbind" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x21ae9df8, "usbnet_open" },
	{ 0xafc5a0b8, "usbnet_stop" },
	{ 0xc936b3be, "usbnet_start_xmit" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x5eee7c81, "usbnet_tx_timeout" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0xfca66e8f, "usbnet_probe" },
	{ 0xa7571c90, "usbnet_disconnect" },
	{ 0xdca6a77f, "usbnet_suspend" },
	{ 0x6cb0863b, "usbnet_resume" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v238Bp*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v19D2p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v19D2p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");

MODULE_INFO(srcversion, "3B05777579B45683A4B889E");
