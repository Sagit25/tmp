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

SYMBOL_CRC(usb_gadget_get_string, 0x4beb505d, "_gpl");
SYMBOL_CRC(usb_validate_langid, 0x0c589aba, "_gpl");
SYMBOL_CRC(usb_descriptor_fillbuf, 0xd2ea2134, "_gpl");
SYMBOL_CRC(usb_gadget_config_buf, 0xf474a207, "_gpl");
SYMBOL_CRC(usb_copy_descriptors, 0x2e09263f, "_gpl");
SYMBOL_CRC(usb_assign_descriptors, 0x3194eb2f, "_gpl");
SYMBOL_CRC(usb_free_all_descriptors, 0x8212fa83, "_gpl");
SYMBOL_CRC(usb_otg_descriptor_alloc, 0x28a52f50, "_gpl");
SYMBOL_CRC(usb_otg_descriptor_init, 0x562b4a91, "_gpl");
SYMBOL_CRC(usb_ep_autoconfig_ss, 0x9635230f, "_gpl");
SYMBOL_CRC(usb_ep_autoconfig, 0x3389d953, "_gpl");
SYMBOL_CRC(usb_ep_autoconfig_release, 0x0cb7e477, "_gpl");
SYMBOL_CRC(usb_ep_autoconfig_reset, 0x18e86dac, "_gpl");
SYMBOL_CRC(config_ep_by_speed_and_alt, 0x384167d3, "_gpl");
SYMBOL_CRC(config_ep_by_speed, 0xb313877b, "_gpl");
SYMBOL_CRC(usb_add_function, 0xa89518d1, "_gpl");
SYMBOL_CRC(usb_remove_function, 0x4515f04d, "_gpl");
SYMBOL_CRC(usb_function_deactivate, 0xbb341d7a, "_gpl");
SYMBOL_CRC(usb_function_activate, 0x6ccbbd78, "_gpl");
SYMBOL_CRC(usb_interface_id, 0x14050dae, "_gpl");
SYMBOL_CRC(usb_add_config_only, 0x0cd8f31b, "_gpl");
SYMBOL_CRC(usb_add_config, 0x17c71509, "_gpl");
SYMBOL_CRC(usb_string_id, 0x895ebe9f, "_gpl");
SYMBOL_CRC(usb_string_ids_tab, 0x528a5769, "_gpl");
SYMBOL_CRC(usb_gstrings_attach, 0xd143eaea, "_gpl");
SYMBOL_CRC(usb_string_ids_n, 0xa1e209dc, "_gpl");
SYMBOL_CRC(usb_composite_probe, 0xdd72690b, "_gpl");
SYMBOL_CRC(usb_composite_unregister, 0xaedfd583, "_gpl");
SYMBOL_CRC(usb_composite_setup_continue, 0xfa69a22d, "_gpl");
SYMBOL_CRC(usb_composite_overwrite_options, 0x5edc2a6b, "_gpl");
SYMBOL_CRC(usb_get_function_instance, 0x22a7e8ed, "_gpl");
SYMBOL_CRC(usb_get_function, 0xb3879afd, "_gpl");
SYMBOL_CRC(usb_put_function_instance, 0x68e6942f, "_gpl");
SYMBOL_CRC(usb_put_function, 0x907c4fb3, "_gpl");
SYMBOL_CRC(usb_function_register, 0x829925fd, "_gpl");
SYMBOL_CRC(usb_function_unregister, 0x4125292c, "_gpl");
SYMBOL_CRC(usb_os_desc_prepare_interf_dir, 0xcc0e3c61, "");
SYMBOL_CRC(unregister_gadget_item, 0x8cc39adf, "_gpl");
SYMBOL_CRC(alloc_ep_req, 0xb775db55, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x1425e33, "try_module_get" },
	{ 0x7b5547f0, "config_group_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbbece53e, "usb_gadget_check_config" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c46b1d1, "usb_gadget_ep_match_desc" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x3be9c133, "configfs_unregister_subsystem" },
	{ 0x13442246, "usb_gadget_set_selfpowered" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3680a5e, "usb_gadget_vbus_draw" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x975398a, "config_item_set_name" },
	{ 0xcc793c4a, "module_put" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x7f776354, "configfs_register_subsystem" },
	{ 0x9177debf, "init_uts_ns" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0x185ab23c, "usb_gadget_activate" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5a921311, "strncmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc5e16aa, "usb_gadget_clear_selfpowered" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x99839e92, "usb_gadget_set_state" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x7204ebbd, "usb_gadget_unregister_driver" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcbad1871, "config_item_init_type_name" },
	{ 0xf0b55e33, "config_item_put" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x56470118, "__warn_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xa777a04c, "usb_gadget_register_driver_owner" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xd8a9edd0, "usb_gadget_deactivate" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "265A57F75A8EE4F2735EED6");
