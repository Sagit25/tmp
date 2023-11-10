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

SYMBOL_CRC(ath_rxbuf_alloc, 0xcc67e2a2, "");
SYMBOL_CRC(ath_is_mybeacon, 0x2b654e23, "");
SYMBOL_CRC(ath_printk, 0x22cc646f, "");
SYMBOL_CRC(ath_bus_type_strings, 0xb6588ba6, "");
SYMBOL_CRC(ath_is_world_regd, 0x4571aea8, "");
SYMBOL_CRC(ath_is_49ghz_allowed, 0x108b188f, "");
SYMBOL_CRC(ath_regd_find_country_by_name, 0xa18f224e, "");
SYMBOL_CRC(ath_reg_notifier_apply, 0xe9357981, "");
SYMBOL_CRC(ath_regd_init, 0x2a65ce66, "");
SYMBOL_CRC(ath_regd_get_band_ctl, 0x0b1ab353, "");
SYMBOL_CRC(ath_hw_setbssidmask, 0xd77403e3, "");
SYMBOL_CRC(ath_hw_cycle_counters_update, 0x97384f18, "");
SYMBOL_CRC(ath_hw_get_listen_time, 0x227be944, "");
SYMBOL_CRC(ath_hw_keyreset, 0x9ddb74fe, "");
SYMBOL_CRC(ath_hw_keysetmac, 0xb951a87e, "");
SYMBOL_CRC(ath_key_config, 0x6d3e817c, "");
SYMBOL_CRC(ath_key_delete, 0x44a42e6d, "");
SYMBOL_CRC(dfs_pattern_detector_init, 0xc7e402ec, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0xdba126c1, "reg_initiator_name" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x5fad0041, "ieee80211_get_channel_khz" },
	{ 0x7c592253, "wiphy_apply_custom_regulatory" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x707d921f, "freq_reg_info" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "E50ED76900A8F0BC6607FBE");
