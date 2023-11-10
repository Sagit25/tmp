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
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xdb73a05c, "skb_unlink" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x74a05018, "request_firmware" },
	{ 0x718b8b7, "bt_info" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x336b6aaa, "hci_alloc_dev_priv" },
	{ 0x6c90c0b, "hci_register_dev" },
	{ 0xfc1279d3, "hci_free_dev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xf5de3713, "hci_unregister_dev" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0xbec65b85, "hci_recv_frame" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1B78857D6FB12E14298332");
