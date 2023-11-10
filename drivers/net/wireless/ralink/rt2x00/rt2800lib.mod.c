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

SYMBOL_CRC(rt2800_mcu_request, 0x6c85fbd0, "_gpl");
SYMBOL_CRC(rt2800_wait_csr_ready, 0xef99736e, "_gpl");
SYMBOL_CRC(rt2800_wait_wpdma_ready, 0x6b9e22f4, "_gpl");
SYMBOL_CRC(rt2800_disable_wpdma, 0xde17809a, "_gpl");
SYMBOL_CRC(rt2800_get_txwi_rxwi_size, 0xdfea63de, "_gpl");
SYMBOL_CRC(rt2800_check_firmware, 0x4135554f, "_gpl");
SYMBOL_CRC(rt2800_load_firmware, 0xd8418f81, "_gpl");
SYMBOL_CRC(rt2800_write_tx_data, 0x60ada5b0, "_gpl");
SYMBOL_CRC(rt2800_process_rxwi, 0x7c4db6d0, "_gpl");
SYMBOL_CRC(rt2800_txdone_entry, 0x5eb1ef2b, "_gpl");
SYMBOL_CRC(rt2800_txdone, 0x3814237c, "_gpl");
SYMBOL_CRC(rt2800_txstatus_timeout, 0xaed63427, "_gpl");
SYMBOL_CRC(rt2800_txstatus_pending, 0x9f3b7308, "_gpl");
SYMBOL_CRC(rt2800_txdone_nostatus, 0x3d81972d, "_gpl");
SYMBOL_CRC(rt2800_watchdog, 0xfc6c2026, "_gpl");
SYMBOL_CRC(rt2800_write_beacon, 0x569970b1, "_gpl");
SYMBOL_CRC(rt2800_clear_beacon, 0x104e4645, "_gpl");
SYMBOL_CRC(rt2800_rfkill_poll, 0x6f01f99f, "_gpl");
SYMBOL_CRC(rt2800_config_shared_key, 0x89ba45f5, "_gpl");
SYMBOL_CRC(rt2800_config_pairwise_key, 0xe8e919e7, "_gpl");
SYMBOL_CRC(rt2800_sta_add, 0xb6f05397, "_gpl");
SYMBOL_CRC(rt2800_sta_remove, 0x128ec63e, "_gpl");
SYMBOL_CRC(rt2800_pre_reset_hw, 0x7ca2fc64, "_gpl");
SYMBOL_CRC(rt2800_config_filter, 0x5a334e35, "_gpl");
SYMBOL_CRC(rt2800_config_intf, 0x535a70e2, "_gpl");
SYMBOL_CRC(rt2800_config_erp, 0xc5099d20, "_gpl");
SYMBOL_CRC(rt2800_config_ant, 0xe477c667, "_gpl");
SYMBOL_CRC(rt2800_gain_calibration, 0x261759c8, "_gpl");
SYMBOL_CRC(rt2800_vco_calibration, 0x3b84c342, "_gpl");
SYMBOL_CRC(rt2800_config, 0x02d37ac3, "_gpl");
SYMBOL_CRC(rt2800_link_stats, 0x0abe55a8, "_gpl");
SYMBOL_CRC(rt2800_reset_tuner, 0x5cc281a0, "_gpl");
SYMBOL_CRC(rt2800_link_tuner, 0xfe43d991, "_gpl");
SYMBOL_CRC(rt2800_enable_radio, 0xb59a13cc, "_gpl");
SYMBOL_CRC(rt2800_disable_radio, 0xef1057a7, "_gpl");
SYMBOL_CRC(rt2800_efuse_detect, 0x0f996f24, "_gpl");
SYMBOL_CRC(rt2800_read_eeprom_efuse, 0xaeb2a794, "_gpl");
SYMBOL_CRC(rt2800_probe_hw, 0xf857be2b, "_gpl");
SYMBOL_CRC(rt2800_get_key_seq, 0xce60792d, "_gpl");
SYMBOL_CRC(rt2800_set_rts_threshold, 0x5d7d8b75, "_gpl");
SYMBOL_CRC(rt2800_conf_tx, 0xabed57de, "_gpl");
SYMBOL_CRC(rt2800_get_tsf, 0xb3188867, "_gpl");
SYMBOL_CRC(rt2800_ampdu_action, 0xdb20ca27, "_gpl");
SYMBOL_CRC(rt2800_get_survey, 0x1bc6c2fc, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa9087bb2, "rt2x00lib_txdone_nomatch" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa895f2e8, "rt2x00lib_txdone" },
	{ 0xa723eefc, "rt2x00queue_get_entry" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xfdaf6535, "rt2x00lib_get_bssidx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15158ca9, "rt2x00mac_conf_tx" },
	{ 0x35c3640f, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5aeae75c, "rt2x00lib_txdone_noinfo" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xf5ce0a22, "__skb_pad" },
	{ 0xd6828218, "ieee80211_restart_hw" },
	{ 0x121445a5, "skb_pull" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x20732b33, "rt2x00lib_set_mac_address" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xec4d9e3a, "clk_get_sys" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "crc-ccitt,rt2x00lib,mac80211");


MODULE_INFO(srcversion, "5E845D748677AAD5974DDEA");
