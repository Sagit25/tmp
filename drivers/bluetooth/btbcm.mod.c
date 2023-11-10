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

SYMBOL_CRC(btbcm_check_bdaddr, 0x65960bf7, "_gpl");
SYMBOL_CRC(btbcm_set_bdaddr, 0xa2a62774, "_gpl");
SYMBOL_CRC(btbcm_read_pcm_int_params, 0xfb45afdf, "_gpl");
SYMBOL_CRC(btbcm_write_pcm_int_params, 0x76313a49, "_gpl");
SYMBOL_CRC(btbcm_patchram, 0x519045fd, "");
SYMBOL_CRC(btbcm_initialize, 0xd644fdd8, "_gpl");
SYMBOL_CRC(btbcm_finalize, 0x6a8cf97c, "_gpl");
SYMBOL_CRC(btbcm_setup_patchram, 0x6d0f7237, "_gpl");
SYMBOL_CRC(btbcm_setup_apple, 0x538cafa9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd8141f65, "__hci_cmd_sync" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x1dfaa4dd, "efi" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0x718b8b7, "bt_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbec55524, "of_find_node_opts_by_path" },
	{ 0xf1852056, "of_property_read_string_helper" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb882b19b, "of_node_put" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5710317b, "firmware_request_nowarn" },
	{ 0x37a0cba, "kfree" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "4E2F0A0549E921C2A77FEB7");
