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
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x17be2cf7, "usbnet_skb_return" },
	{ 0x121445a5, "skb_pull" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x85a552e, "netdev_err" },
	{ 0x1adea804, "usbnet_get_drvinfo" },
	{ 0xdd64e639, "strscpy" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x4cab5036, "usbnet_write_cmd" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x86786cc4, "usbnet_status_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd01bf557, "usbnet_get_endpoints" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf53ff0a4, "usbnet_read_cmd" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfca66e8f, "usbnet_probe" },
	{ 0x274e4e11, "usbnet_status_start" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x5d143358, "usbnet_link_change" },
	{ 0x21ae9df8, "usbnet_open" },
	{ 0xafc5a0b8, "usbnet_stop" },
	{ 0xc936b3be, "usbnet_start_xmit" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x7df03e73, "usbnet_change_mtu" },
	{ 0x5eee7c81, "usbnet_tx_timeout" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0xbe9b3af2, "usbnet_get_msglevel" },
	{ 0xf3bddacc, "usbnet_set_msglevel" },
	{ 0xf184826, "usbnet_nway_reset" },
	{ 0xa6c6067, "usbnet_get_link_ksettings_mii" },
	{ 0x671de599, "usbnet_set_link_ksettings_mii" },
	{ 0xa7571c90, "usbnet_disconnect" },
	{ 0xdca6a77f, "usbnet_suspend" },
	{ 0x6cb0863b, "usbnet_resume" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "7262CEE3061C4CADA365460");
