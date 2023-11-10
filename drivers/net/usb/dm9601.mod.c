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
	{ 0x121445a5, "skb_pull" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd28f65, "mii_check_media" },
	{ 0xe7a5a2d3, "mii_ethtool_gset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf65a7a8c, "mii_link_ok" },
	{ 0x1adea804, "usbnet_get_drvinfo" },
	{ 0x25617987, "generic_mii_ioctl" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x5d143358, "usbnet_link_change" },
	{ 0x10a196a4, "usbnet_write_cmd_async" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xa91d6818, "skb_copy_expand" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4cab5036, "usbnet_write_cmd" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf53ff0a4, "usbnet_read_cmd" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85a552e, "netdev_err" },
	{ 0xd01bf557, "usbnet_get_endpoints" },
	{ 0x92997ed8, "_printk" },
	{ 0x2a9a4a16, "mii_nway_restart" },
	{ 0x21ae9df8, "usbnet_open" },
	{ 0xafc5a0b8, "usbnet_stop" },
	{ 0xc936b3be, "usbnet_start_xmit" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x7df03e73, "usbnet_change_mtu" },
	{ 0x5eee7c81, "usbnet_tx_timeout" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0xbe9b3af2, "usbnet_get_msglevel" },
	{ 0xf3bddacc, "usbnet_set_msglevel" },
	{ 0xf184826, "usbnet_nway_reset" },
	{ 0xa6c6067, "usbnet_get_link_ksettings_mii" },
	{ 0x671de599, "usbnet_set_link_ksettings_mii" },
	{ 0xfca66e8f, "usbnet_probe" },
	{ 0xa7571c90, "usbnet_disconnect" },
	{ 0xdca6a77f, "usbnet_suspend" },
	{ 0x6cb0863b, "usbnet_resume" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v07AAp9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p6688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0268d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A47p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p8101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p1269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3427d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5377C453FC7786F06FA6C3D");
