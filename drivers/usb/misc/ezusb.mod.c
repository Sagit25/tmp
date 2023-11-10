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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(ezusb_fx1_set_reset, 0x901c7882, "_gpl");
SYMBOL_CRC(ezusb_fx1_ihex_firmware_download, 0x66ed000a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1dc09e9b, "usb_control_msg_send" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x74a05018, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4AF1D8979B92FEF7264AFBE");
