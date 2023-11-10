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
	{ 0x97240839, "cdc_ncm_bind_common" },
	{ 0x8f17d94a, "usb_cdc_wdm_register" },
	{ 0xe4e2727d, "cdc_ncm_rx_fixup" },
	{ 0xe32a2030, "cdc_ncm_tx_fixup" },
	{ 0xfca66e8f, "usbnet_probe" },
	{ 0xa7571c90, "usbnet_disconnect" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip16in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip46in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip76in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc03ip16in*");

MODULE_INFO(srcversion, "76D719170C7CBE620B35580");
