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
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xafa5667d, "usb_stor_bulk_srb" },
	{ 0x195aae44, "usb_stor_bulk_transfer_sg" },
	{ 0x74a05018, "request_firmware" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x618e84a9, "usb_stor_probe1" },
	{ 0x4b791974, "usb_stor_suspend" },
	{ 0x92997ed8, "_printk" },
	{ 0xc8cb0dde, "usb_stor_reset_resume" },
	{ 0x520b4026, "usb_stor_pre_reset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbe4e525e, "usb_stor_host_template_init" },
	{ 0x47392e1d, "usb_stor_probe2" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8a91cc, "usb_stor_disconnect" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9c41c48c, "usb_stor_post_reset" },
	{ 0x4e8c52ba, "usb_stor_access_xfer_buf" },
	{ 0xdb208607, "usb_stor_bulk_transfer_buf" },
	{ 0xde4b1491, "usb_stor_set_xfer_buf" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0CF2p6250d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "14B6A81F25A9E9A80AC1FCF");
