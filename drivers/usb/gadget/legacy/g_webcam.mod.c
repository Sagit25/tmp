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
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xd9653b2f, "param_ops_ushort" },
	{ 0x22a7e8ed, "usb_get_function_instance" },
	{ 0x528a5769, "usb_string_ids_tab" },
	{ 0xb3879afd, "usb_get_function" },
	{ 0xaedfd583, "usb_composite_unregister" },
	{ 0x907c4fb3, "usb_put_function" },
	{ 0xa89518d1, "usb_add_function" },
	{ 0xdd72690b, "usb_composite_probe" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x5edc2a6b, "usb_composite_overwrite_options" },
	{ 0x68e6942f, "usb_put_function_instance" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0x17c71509, "usb_add_config" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "EFF1AA2664634D267245C10");
