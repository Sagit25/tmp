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
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd68e2560, "usb_autopm_get_interface" },
	{ 0x141b8c4e, "usb_autopm_put_interface" },
	{ 0x921972a8, "cdc_ncm_unbind" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x6cb0863b, "usbnet_resume" },
	{ 0xdca6a77f, "usbnet_suspend" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdc33cf23, "cdc_ncm_select_altsetting" },
	{ 0x97240839, "cdc_ncm_bind_common" },
	{ 0x8f17d94a, "usb_cdc_wdm_register" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0xa33102b7, "usb_match_id" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x121445a5, "skb_pull" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x109f2eea, "cdc_ncm_fill_tx_frame" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85a552e, "netdev_err" },
	{ 0x8c425bfe, "cdc_ncm_rx_verify_nth16" },
	{ 0x2b87eb2b, "cdc_ncm_rx_verify_ndp16" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0x17be2cf7, "usbnet_skb_return" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x68227490, "ipv6_stub" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xe3eaf022, "__vlan_find_dev_deep_rcu" },
	{ 0xb46bcca, "in6_dev_finish_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x21ae9df8, "usbnet_open" },
	{ 0xafc5a0b8, "usbnet_stop" },
	{ 0xc936b3be, "usbnet_start_xmit" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x3936ed38, "cdc_ncm_change_mtu" },
	{ 0x5eee7c81, "usbnet_tx_timeout" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0xfca66e8f, "usbnet_probe" },
	{ 0xa7571c90, "usbnet_disconnect" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1061d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1071d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1081d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "FDB493B13D4D53704646BC2");
