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
	{ 0x8e9bb356, "usb_stor_resume" },
	{ 0xef678ad, "scsi_eh_prep_cmnd" },
	{ 0x618e84a9, "usb_stor_probe1" },
	{ 0x4b791974, "usb_stor_suspend" },
	{ 0xc8cb0dde, "usb_stor_reset_resume" },
	{ 0x520b4026, "usb_stor_pre_reset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbe4e525e, "usb_stor_host_template_init" },
	{ 0x6df46de0, "usb_stor_transparent_scsi_command" },
	{ 0x47392e1d, "usb_stor_probe2" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xbdb9f06e, "scsi_eh_restore_cmnd" },
	{ 0xa8a91cc, "usb_stor_disconnect" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0x9c41c48c, "usb_stor_post_reset" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04B4p6830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6116d0160dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D07B1742D09BD2D2D0299E9");
