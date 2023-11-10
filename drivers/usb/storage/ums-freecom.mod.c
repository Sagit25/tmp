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
	{ 0xafa5667d, "usb_stor_bulk_srb" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x8e9bb356, "usb_stor_resume" },
	{ 0x618e84a9, "usb_stor_probe1" },
	{ 0x4b791974, "usb_stor_suspend" },
	{ 0x92997ed8, "_printk" },
	{ 0xc8cb0dde, "usb_stor_reset_resume" },
	{ 0x520b4026, "usb_stor_pre_reset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbe4e525e, "usb_stor_host_template_init" },
	{ 0x47392e1d, "usb_stor_probe2" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8a91cc, "usb_stor_disconnect" },
	{ 0x772e8d80, "usb_stor_control_msg" },
	{ 0x9c41c48c, "usb_stor_post_reset" },
	{ 0xdb208607, "usb_stor_bulk_transfer_buf" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1B2A0245C595B68FDB1BD5B");
