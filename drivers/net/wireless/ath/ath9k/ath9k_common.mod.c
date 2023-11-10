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

SYMBOL_CRC(ath9k_cmn_rx_accept, 0x4f43cb53, "");
SYMBOL_CRC(ath9k_cmn_rx_skb_postprocess, 0x051e48c0, "");
SYMBOL_CRC(ath9k_cmn_process_rate, 0x1826219e, "");
SYMBOL_CRC(ath9k_cmn_process_rssi, 0xec010765, "");
SYMBOL_CRC(ath9k_cmn_get_hw_crypto_keytype, 0xc24d82a8, "");
SYMBOL_CRC(ath9k_cmn_get_channel, 0x39fb3c4f, "");
SYMBOL_CRC(ath9k_cmn_count_streams, 0xd2981357, "");
SYMBOL_CRC(ath9k_cmn_update_txpow, 0xae8422f3, "");
SYMBOL_CRC(ath9k_cmn_init_crypto, 0xbb42d49a, "");
SYMBOL_CRC(ath9k_cmn_init_channels_rates, 0x092f5b58, "");
SYMBOL_CRC(ath9k_cmn_setup_ht_cap, 0xb7b5c1de, "");
SYMBOL_CRC(ath9k_cmn_reload_chainmask, 0x746108be, "");
SYMBOL_CRC(ath9k_cmn_beacon_config_sta, 0x7c5a45b3, "");
SYMBOL_CRC(ath9k_cmn_beacon_config_adhoc, 0x019dd1a4, "");
SYMBOL_CRC(ath9k_cmn_beacon_config_ap, 0xc9a77c08, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x562bc3b9, "ath9k_hw_set_txpowerlimit" },
	{ 0x9ddb74fe, "ath_hw_keyreset" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa71c2ada, "ieee80211_get_hdrlen_from_skb" },
	{ 0x121445a5, "skb_pull" },
	{ 0xdcb764ad, "memset" },
	{ 0xfa6bcaa7, "ath9k_hw_gettsf64" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ath9k_hw,ath,cfg80211");


MODULE_INFO(srcversion, "77E99D44B2E3BB47B3346DC");
