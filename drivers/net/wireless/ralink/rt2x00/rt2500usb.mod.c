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
	{ 0x6dbeffcc, "rt2x00usb_probe" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x972a3723, "consume_skb" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x98d69917, "rt2x00usb_vendor_req_buff_lock" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x26f5c8c, "rt2x00usb_vendor_request_buff" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x5080b9df, "rt2x00usb_vendor_request" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc0039a35, "rt2x00usb_disable_radio" },
	{ 0x20732b33, "rt2x00lib_set_mac_address" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3e23e994, "rt2x00usb_initialize" },
	{ 0x2b3621cc, "rt2x00usb_uninitialize" },
	{ 0xd276d8fa, "rt2x00usb_clear_entry" },
	{ 0x4537ba33, "rt2x00usb_watchdog" },
	{ 0x724b175d, "rt2x00usb_kick_queue" },
	{ 0xad4ab28b, "rt2x00usb_flush_queue" },
	{ 0xb77a168c, "rt2x00mac_tx" },
	{ 0x63023082, "rt2x00mac_start" },
	{ 0x57f91626, "rt2x00mac_stop" },
	{ 0x4ea13b4b, "rt2x00mac_add_interface" },
	{ 0x30d77067, "rt2x00mac_remove_interface" },
	{ 0xfccc52fc, "rt2x00mac_config" },
	{ 0x8b5a1266, "rt2x00mac_bss_info_changed" },
	{ 0x534a136e, "rt2x00mac_configure_filter" },
	{ 0xf27cc2ad, "rt2x00mac_set_tim" },
	{ 0xdd770ff0, "rt2x00mac_set_key" },
	{ 0x6ad683ab, "rt2x00mac_sw_scan_start" },
	{ 0x6a24a9ef, "rt2x00mac_sw_scan_complete" },
	{ 0x8cd6c526, "rt2x00mac_get_stats" },
	{ 0x15158ca9, "rt2x00mac_conf_tx" },
	{ 0x505aa8b5, "rt2x00mac_rfkill_poll" },
	{ 0x29736be8, "rt2x00mac_flush" },
	{ 0xde2e8cfd, "rt2x00mac_set_antenna" },
	{ 0x61f11295, "rt2x00mac_get_antenna" },
	{ 0x41e9eb03, "rt2x00mac_get_ringparam" },
	{ 0x9be55bdc, "rt2x00mac_tx_frames_pending" },
	{ 0xfb48c7f7, "rt2x00usb_disconnect" },
	{ 0x3b640662, "rt2x00usb_suspend" },
	{ 0x244a4737, "rt2x00usb_resume" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "rt2x00usb,rt2x00lib");

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D33333BD0C145F2A004EC6A");
