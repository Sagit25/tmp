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

SYMBOL_CRC(dm_restorepowerindex, 0xc1eddc18, "_gpl");
SYMBOL_CRC(dm_writepowerindex, 0x064d7a93, "_gpl");
SYMBOL_CRC(dm_savepowerindex, 0xf9853188, "_gpl");
SYMBOL_CRC(rtl92c_dm_write_dig, 0x82dba9e9, "");
SYMBOL_CRC(rtl92c_dm_init_edca_turbo, 0xbed273bb, "");
SYMBOL_CRC(rtl92c_dm_check_txpower_tracking, 0xc9ba1be3, "");
SYMBOL_CRC(rtl92c_dm_init_rate_adaptive_mask, 0xbcd4e46c, "");
SYMBOL_CRC(rtl92c_dm_rf_saving, 0x6557c40a, "");
SYMBOL_CRC(rtl92c_dm_init, 0xaf53d9a2, "");
SYMBOL_CRC(rtl92c_dm_watchdog, 0x9b99214d, "");
SYMBOL_CRC(rtl92c_bt_rssi_state_change, 0xebd89fb2, "");
SYMBOL_CRC(rtl92c_dm_bt_coexist, 0x59de3556, "");
SYMBOL_CRC(rtl92c_download_fw, 0x43c92b8c, "");
SYMBOL_CRC(rtl92c_fill_h2c_cmd, 0xa8c58267, "");
SYMBOL_CRC(rtl92c_firmware_selfreset, 0x56e1428e, "");
SYMBOL_CRC(rtl92c_set_fw_pwrmode_cmd, 0x682280e1, "");
SYMBOL_CRC(rtl92c_set_fw_rsvdpagepkt, 0x04a9f7bb, "");
SYMBOL_CRC(rtl92c_set_fw_joinbss_report_cmd, 0x037c34f8, "");
SYMBOL_CRC(rtl92c_set_p2p_ps_offload_cmd, 0x345ca8b9, "_gpl");
SYMBOL_CRC(rtl92c_phy_query_bb_reg, 0xbdfda412, "");
SYMBOL_CRC(rtl92c_phy_set_bb_reg, 0x5ccf94b5, "");
SYMBOL_CRC(_rtl92c_phy_fw_rf_serial_read, 0x5096ec91, "");
SYMBOL_CRC(_rtl92c_phy_fw_rf_serial_write, 0xdb5021f8, "");
SYMBOL_CRC(_rtl92c_phy_rf_serial_read, 0xf5e0a480, "");
SYMBOL_CRC(_rtl92c_phy_rf_serial_write, 0x42930a1a, "");
SYMBOL_CRC(_rtl92c_phy_calculate_bit_shift, 0x2327d91c, "");
SYMBOL_CRC(rtl92c_phy_rf_config, 0xb26ea2cf, "");
SYMBOL_CRC(_rtl92c_phy_bb8192c_config_parafile, 0x7c0eabb5, "");
SYMBOL_CRC(_rtl92c_store_pwrindex_diffrate_offset, 0xe86cd91c, "");
SYMBOL_CRC(_rtl92c_phy_init_bb_rf_register_definition, 0x07ce4120, "");
SYMBOL_CRC(rtl92c_phy_set_txpower_level, 0xbd7b3e8a, "");
SYMBOL_CRC(rtl92c_phy_update_txpower_dbm, 0xdcbda858, "");
SYMBOL_CRC(_rtl92c_phy_dbm_to_txpwr_idx, 0xbb495a81, "");
SYMBOL_CRC(_rtl92c_phy_txpwr_idx_to_dbm, 0x663d05b3, "");
SYMBOL_CRC(rtl92c_phy_set_bw_mode, 0x2ac50adb, "");
SYMBOL_CRC(rtl92c_phy_sw_chnl_callback, 0x3ec93a18, "");
SYMBOL_CRC(rtl92c_phy_sw_chnl, 0x1835bc35, "");
SYMBOL_CRC(rtl8192_phy_check_is_legal_rfpath, 0xd30b01db, "");
SYMBOL_CRC(rtl92c_phy_iq_calibrate, 0x87d0292b, "");
SYMBOL_CRC(rtl92c_phy_lc_calibrate, 0x5db3a9f3, "");
SYMBOL_CRC(rtl92c_phy_ap_calibrate, 0x245d9a0a, "");
SYMBOL_CRC(rtl92c_phy_set_rfpath_switch, 0x23079c19, "");
SYMBOL_CRC(rtl92c_phy_set_io_cmd, 0x956288b7, "");
SYMBOL_CRC(rtl92c_phy_set_io, 0xe2d51b66, "");
SYMBOL_CRC(rtl92ce_phy_set_rf_on, 0xcda3ca75, "");
SYMBOL_CRC(_rtl92c_phy_set_rf_sleep, 0x2dd92b75, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x48471741, "skb_put" },
	{ 0x6de5ac8d, "rtl_fw_block_write" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb1c07846, "_rtl_dbg_print" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb9a9a001, "rtl_cmd_send_packet" },
	{ 0x7f69eb75, "_rtl_dbg_print_data" },
	{ 0xaf212090, "rtl_fw_page_write" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcd966bea, "rtl_dm_diginit" },
	{ 0x2e5382f9, "rtl_fill_dummy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "rtlwifi");


MODULE_INFO(srcversion, "816236AA2CE6910E2464939");
