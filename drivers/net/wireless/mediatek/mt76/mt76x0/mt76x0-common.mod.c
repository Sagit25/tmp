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

SYMBOL_CRC(mt76x0_chip_onoff, 0xdedac6db, "_gpl");
SYMBOL_CRC(mt76x0_mac_stop, 0x2b48f9b8, "_gpl");
SYMBOL_CRC(mt76x0_init_hardware, 0xa04e2b1b, "_gpl");
SYMBOL_CRC(mt76x0_register_device, 0x4c71131d, "_gpl");
SYMBOL_CRC(mt76x0_set_sar_specs, 0x78095e5b, "_gpl");
SYMBOL_CRC(mt76x0_config, 0xce89540e, "_gpl");
SYMBOL_CRC(mt76x0_phy_calibrate, 0x673a5f85, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1d82fe97, "mt76_init_sar_power" },
	{ 0xe73fd251, "mt76x02_phy_adjust_vga_gain" },
	{ 0xe9378d26, "mt76x02_phy_dfs_adjust_agc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xc4b4fc27, "cfg80211_chandef_valid" },
	{ 0x69c7583b, "mt76x02_mac_shared_key_setup" },
	{ 0x470897c7, "mt76x02_ext_pa_enabled" },
	{ 0x12835468, "mt76x02_get_efuse_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xfab786a3, "mt76x02_get_rx_gain" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0x7996285a, "ieee80211_queue_delayed_work" },
	{ 0xb51c44cf, "mt76_eeprom_init" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x943eb60d, "mt76x02_mac_setaddr" },
	{ 0x221ff9c1, "mt76_register_device" },
	{ 0x9e0a96db, "mt76x02_phy_set_bw" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe98f2f9b, "mt76x02_phy_set_band" },
	{ 0x925dabb0, "mt76_set_channel" },
	{ 0xccb92072, "mt76x02_init_device" },
	{ 0xac6775d6, "ieee80211_wake_queues" },
	{ 0xcfb66a75, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x7e64eca5, "mt76x02_phy_set_rxpath" },
	{ 0xfd4163ff, "mt76x02_edcca_init" },
	{ 0xaebe659d, "mt76_eeprom_override" },
	{ 0x2f133158, "mt76x02_get_lna_gain" },
	{ 0x1d9ad0, "mt76x02_init_debugfs" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x2ca5657c, "ieee80211_stop_queues" },
	{ 0xfc952662, "mt76x02_mac_cc_reset" },
	{ 0x6d3a1f4b, "mt76x02_init_agc_gain" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x45a27d97, "mt76_txq_schedule_all" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfccfc18b, "____mt76_poll_msec" },
	{ 0x2b123566, "mt76x02_dfs_init_params" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb265006f, "mt76x02_config_mac_addr_list" },
	{ 0xf9849971, "mt76_get_sar_power" },
	{ 0x1cb257d4, "mt76x02_eeprom_copy" },
	{ 0x6ff8f8ae, "mt76x02_mcu_calibrate" },
	{ 0xb6aacbaa, "mt76x02_mcu_function_select" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf6304f43, "mt76x02_phy_set_txpower" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x9c427b0b, "mt76x02_mac_wcid_setup" },
	{ 0x53039629, "__mt76_poll" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xe16acb52, "mt76x02_phy_set_txdac" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0xba6a69ea, "mt76_get_min_avg_rssi" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib,cfg80211,mac80211");


MODULE_INFO(srcversion, "FDAB8CF99E8F2382CEF62FB");
