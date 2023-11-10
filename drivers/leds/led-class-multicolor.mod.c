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

SYMBOL_CRC(led_mc_calc_color_components, 0x4dc60a6f, "_gpl");
SYMBOL_CRC(led_classdev_multicolor_register_ext, 0x2186a6fd, "_gpl");
SYMBOL_CRC(led_classdev_multicolor_unregister, 0xc218f406, "_gpl");
SYMBOL_CRC(devm_led_classdev_multicolor_register_ext, 0xb743dff5, "_gpl");
SYMBOL_CRC(devm_led_classdev_multicolor_unregister, 0x64084a38, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2e077701, "led_classdev_register_ext" },
	{ 0x5cc77c45, "led_colors" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd106b29e, "led_set_brightness" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x771d5acf, "led_classdev_unregister" },
	{ 0xf021b862, "devres_release" },
	{ 0xdc510a8f, "__devres_alloc_node" },
	{ 0x28eced4f, "devres_add" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E73DAAA5BB86609FE2EEE7E");
