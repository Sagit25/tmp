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

SYMBOL_CRC(usbnet_cdc_update_filter, 0x0276aa85, "_gpl");
SYMBOL_CRC(usbnet_generic_cdc_bind, 0x0a25a4a9, "_gpl");
SYMBOL_CRC(usbnet_ether_cdc_bind, 0x0479e758, "_gpl");
SYMBOL_CRC(usbnet_cdc_unbind, 0x8b4f0025, "_gpl");
SYMBOL_CRC(usbnet_cdc_status, 0xa5f5b503, "_gpl");
SYMBOL_CRC(usbnet_cdc_bind, 0xe2e3c32a, "_gpl");
SYMBOL_CRC(usbnet_cdc_zte_rx_fixup, 0xe883bccf, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x5de2d534, "usb_driver_release_interface" },
	{ 0xc649344f, "cdc_parse_cdc_header" },
	{ 0xcb319d8, "usb_ifnum_to_if" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x81fbeed7, "usb_driver_claim_interface" },
	{ 0xd01bf557, "usbnet_get_endpoints" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x5d143358, "usbnet_link_change" },
	{ 0x85a552e, "netdev_err" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x6d12cc13, "usbnet_get_ethernet_addr" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x1adea804, "usbnet_get_drvinfo" },
	{ 0xbe9b3af2, "usbnet_get_msglevel" },
	{ 0xf3bddacc, "usbnet_set_msglevel" },
	{ 0xf184826, "usbnet_nway_reset" },
	{ 0xf789626d, "usbnet_get_link" },
	{ 0x6a528adb, "ethtool_op_get_ts_info" },
	{ 0xb7232e4a, "usbnet_get_link_ksettings_internal" },
	{ 0xb66e4d18, "usbnet_manage_power" },
	{ 0xfca66e8f, "usbnet_probe" },
	{ 0xa7571c90, "usbnet_disconnect" },
	{ 0xdca6a77f, "usbnet_suspend" },
	{ 0x6cb0863b, "usbnet_resume" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04DDp8004d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp9050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v07B4p0F02d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v046DpC11Fd*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v1410pB001d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1410p9010d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp8195d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp8196d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp819Bd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1410p9011d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v03F0p421Dd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v16D5p650Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v12D1p14ACd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3054d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3082d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1003d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1015d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1173d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1177d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1181d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1BC7p*d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp81BAd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v12D1p15C1d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p*d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1546p1143d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1546p1104d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1E2Dp0061d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1E2Dp0055d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1E2Dp005Bd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1E2Dp0069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc06ipFFin*");

MODULE_INFO(srcversion, "7C1B9FE1BE79486039948C9");
