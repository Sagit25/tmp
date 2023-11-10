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
	{ 0xf5de3713, "hci_unregister_dev" },
	{ 0xfc1279d3, "hci_free_dev" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xd8141f65, "__hci_cmd_sync" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xffad1d54, "usb_anchor_urb" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x3c683526, "usb_unanchor_urb" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x718b8b7, "bt_info" },
	{ 0x61feea9a, "hci_set_fw_info" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x48471741, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x336b6aaa, "hci_alloc_dev_priv" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6c90c0b, "hci_register_dev" },
	{ 0xbec65b85, "hci_recv_frame" },
	{ 0x789c9ca3, "hci_recv_diag" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BF51CB52DB71FAB2B1CE0D5");
