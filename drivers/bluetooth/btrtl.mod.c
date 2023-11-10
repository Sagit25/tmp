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

SYMBOL_CRC(btrtl_free, 0xaf78f260, "_gpl");
SYMBOL_CRC(btrtl_initialize, 0x3cde52a1, "_gpl");
SYMBOL_CRC(btrtl_download_firmware, 0x7b1d6fd4, "_gpl");
SYMBOL_CRC(btrtl_set_quirks, 0xd946e097, "_gpl");
SYMBOL_CRC(btrtl_setup_realtek, 0xf942077e, "_gpl");
SYMBOL_CRC(btrtl_shutdown_realtek, 0xfdde8d42, "_gpl");
SYMBOL_CRC(btrtl_get_uart_settings, 0x7664aa2f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8141f65, "__hci_cmd_sync" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x4829a47e, "memcpy" },
	{ 0x718b8b7, "bt_info" },
	{ 0x74a05018, "request_firmware" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x214e4265, "bt_warn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2eef8b21, "skb_pull_data" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "DA8068BFF1C8950D3B8196F");
