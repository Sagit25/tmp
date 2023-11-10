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
	{ 0x14050dae, "usb_interface_id" },
	{ 0x3194eb2f, "usb_assign_descriptors" },
	{ 0x895ebe9f, "usb_string_id" },
	{ 0xb6652875, "gserial_free_line" },
	{ 0x37a0cba, "kfree" },
	{ 0xb313877b, "config_ep_by_speed" },
	{ 0x829925fd, "usb_function_register" },
	{ 0x33bfdca2, "gserial_alloc_line" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0xbc8b3a90, "gserial_suspend" },
	{ 0xe0483bc5, "gserial_disconnect" },
	{ 0x3389d953, "usb_ep_autoconfig" },
	{ 0x68e6942f, "usb_put_function_instance" },
	{ 0x4125292c, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x482da47c, "gserial_connect" },
	{ 0x8212fa83, "usb_free_all_descriptors" },
	{ 0xb55278ab, "gserial_resume" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,u_serial");


MODULE_INFO(srcversion, "1F583C225C29A33C655E54A");
