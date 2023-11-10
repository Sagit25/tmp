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

SYMBOL_CRC(cdc_ncm_change_mtu, 0x3936ed38, "_gpl");
SYMBOL_CRC(cdc_ncm_bind_common, 0x97240839, "_gpl");
SYMBOL_CRC(cdc_ncm_unbind, 0x921972a8, "_gpl");
SYMBOL_CRC(cdc_ncm_select_altsetting, 0xdc33cf23, "_gpl");
SYMBOL_CRC(cdc_ncm_fill_tx_frame, 0x109f2eea, "_gpl");
SYMBOL_CRC(cdc_ncm_tx_fixup, 0xe32a2030, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_verify_nth16, 0x8c425bfe, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_verify_nth32, 0x631cf09a, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_verify_ndp16, 0x2b87eb2b, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_verify_ndp32, 0x9fbab663, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_fixup, 0xe4e2727d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x37a0cba, "kfree" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x5de2d534, "usb_driver_release_interface" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xb0f671c4, "usb_altnum_to_altsetting" },
	{ 0x5d143358, "usbnet_link_change" },
	{ 0x41f68fa1, "usbnet_update_max_qlen" },
	{ 0x5efcbcf9, "usbnet_unlink_rx_urbs" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xcbd762f2, "netif_tx_lock" },
	{ 0xc936b3be, "usbnet_start_xmit" },
	{ 0x446b7c48, "netif_tx_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x4cab5036, "usbnet_write_cmd" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xf53ff0a4, "usbnet_read_cmd" },
	{ 0x48471741, "skb_put" },
	{ 0xdcb764ad, "memset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x17be2cf7, "usbnet_skb_return" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xc649344f, "cdc_parse_cdc_header" },
	{ 0xcb319d8, "usb_ifnum_to_if" },
	{ 0x81fbeed7, "usb_driver_claim_interface" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6d12cc13, "usbnet_get_ethernet_addr" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1adea804, "usbnet_get_drvinfo" },
	{ 0xbe9b3af2, "usbnet_get_msglevel" },
	{ 0xf3bddacc, "usbnet_set_msglevel" },
	{ 0xf184826, "usbnet_nway_reset" },
	{ 0xf789626d, "usbnet_get_link" },
	{ 0x6a528adb, "ethtool_op_get_ts_info" },
	{ 0xb7232e4a, "usbnet_get_link_ksettings_internal" },
	{ 0x21ae9df8, "usbnet_open" },
	{ 0xafc5a0b8, "usbnet_stop" },
	{ 0x230665fb, "usbnet_set_rx_mode" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x5eee7c81, "usbnet_tx_timeout" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0xb66e4d18, "usbnet_manage_power" },
	{ 0x276aa85, "usbnet_cdc_update_filter" },
	{ 0xfca66e8f, "usbnet_probe" },
	{ 0xa7571c90, "usbnet_disconnect" },
	{ 0xdca6a77f, "usbnet_suspend" },
	{ 0x6cb0863b, "usbnet_resume" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "D87DE139303CD71387FC6D0");
