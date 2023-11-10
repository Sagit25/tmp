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
	{ 0x4515f04d, "usb_remove_function" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xd9653b2f, "param_ops_ushort" },
	{ 0x22a7e8ed, "usb_get_function_instance" },
	{ 0x3aa7d5eb, "param_get_bool" },
	{ 0xcd8f31b, "usb_add_config_only" },
	{ 0x528a5769, "usb_string_ids_tab" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3879afd, "usb_get_function" },
	{ 0xaedfd583, "usb_composite_unregister" },
	{ 0x907c4fb3, "usb_put_function" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa89518d1, "usb_add_function" },
	{ 0xdd72690b, "usb_composite_probe" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x5edc2a6b, "usb_composite_overwrite_options" },
	{ 0x68e6942f, "usb_put_function_instance" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0x18e86dac, "usb_ep_autoconfig_reset" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "BF15F6A814F0F398F9CBF07");
