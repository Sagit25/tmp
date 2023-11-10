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

SYMBOL_CRC(mt76x2_read_rx_gain, 0xfd2e61c7, "_gpl");
SYMBOL_CRC(mt76x2_get_rate_power, 0x0969e6d6, "_gpl");
SYMBOL_CRC(mt76x2_get_power_info, 0xa6cb27ce, "_gpl");
SYMBOL_CRC(mt76x2_get_temp_comp, 0x2e8c7c21, "_gpl");
SYMBOL_CRC(mt76x2_eeprom_init, 0xf5cddc37, "_gpl");
SYMBOL_CRC(mt76x2_mac_stop, 0x934246ca, "_gpl");
SYMBOL_CRC(mt76x2_set_sar_specs, 0xe27c580b, "_gpl");
SYMBOL_CRC(mt76x2_reset_wlan, 0xef1e126b, "_gpl");
SYMBOL_CRC(mt76_write_mac_initvals, 0x96fc271c, "_gpl");
SYMBOL_CRC(mt76x2_init_txpower, 0x15cbd653, "_gpl");
SYMBOL_CRC(mt76x2_apply_gain_adj, 0x5f320626, "_gpl");
SYMBOL_CRC(mt76x2_phy_set_txpower_regs, 0x3728f297, "_gpl");
SYMBOL_CRC(mt76x2_phy_set_txpower, 0x01c2dbc4, "_gpl");
SYMBOL_CRC(mt76x2_configure_tx_delay, 0x5126e534, "_gpl");
SYMBOL_CRC(mt76x2_phy_tssi_compensate, 0x6d99780f, "_gpl");
SYMBOL_CRC(mt76x2_phy_update_channel_gain, 0x38580c27, "_gpl");
SYMBOL_CRC(mt76x2_mcu_set_channel, 0x3b301be5, "_gpl");
SYMBOL_CRC(mt76x2_mcu_load_cr, 0x276d9c2d, "_gpl");
SYMBOL_CRC(mt76x2_mcu_init_gain, 0x48c0a2e1, "_gpl");
SYMBOL_CRC(mt76x2_mcu_tssi_comp, 0xd051360a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1d82fe97, "mt76_init_sar_power" },
	{ 0xe73fd251, "mt76x02_phy_adjust_vga_gain" },
	{ 0xe9378d26, "mt76x02_phy_dfs_adjust_agc" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xc4b4fc27, "cfg80211_chandef_valid" },
	{ 0x470897c7, "mt76x02_ext_pa_enabled" },
	{ 0x12835468, "mt76x02_get_efuse_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfab786a3, "mt76x02_get_rx_gain" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0xb51c44cf, "mt76_eeprom_init" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcfb66a75, "mt76x02_eeprom_parse_hw_cap" },
	{ 0xe93fe907, "mt76_mcu_send_and_get_msg" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xaebe659d, "mt76_eeprom_override" },
	{ 0x2f133158, "mt76x02_get_lna_gain" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9849971, "mt76_get_sar_power" },
	{ 0x1cb257d4, "mt76x02_eeprom_copy" },
	{ 0x6ff8f8ae, "mt76x02_mcu_calibrate" },
	{ 0xf6304f43, "mt76x02_phy_set_txpower" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0xba6a69ea, "mt76_get_min_avg_rssi" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib,cfg80211");


MODULE_INFO(srcversion, "F7907DD725F484501592C7C");
