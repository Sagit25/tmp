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

SYMBOL_CRC(ath9k_hw_wait, 0x81e0e12e, "");
SYMBOL_CRC(ath9k_hw_computetxtime, 0x5a0adb02, "");
SYMBOL_CRC(ath9k_hw_init, 0x0ed66cf8, "");
SYMBOL_CRC(ar9003_get_pll_sqsum_dvc, 0x2f18770b, "");
SYMBOL_CRC(ath9k_hw_init_global_settings, 0xc87bf200, "");
SYMBOL_CRC(ath9k_hw_deinit, 0x076baa89, "");
SYMBOL_CRC(ath9k_hw_check_nav, 0xbb54fb1d, "");
SYMBOL_CRC(ath9k_hw_check_alive, 0xe828ad2e, "");
SYMBOL_CRC(ath9k_hw_get_tsf_offset, 0x0f77dafc, "");
SYMBOL_CRC(ath9k_hw_reset, 0xe456d1de, "");
SYMBOL_CRC(ath9k_hw_setpower, 0x63910dbf, "");
SYMBOL_CRC(ath9k_hw_beaconinit, 0x7307f5ae, "");
SYMBOL_CRC(ath9k_hw_set_sta_beacon_timers, 0x1b186335, "");
SYMBOL_CRC(ath9k_hw_gpio_request_in, 0x95d22606, "");
SYMBOL_CRC(ath9k_hw_gpio_request_out, 0x7b32714f, "");
SYMBOL_CRC(ath9k_hw_gpio_free, 0x188a1c6e, "");
SYMBOL_CRC(ath9k_hw_gpio_get, 0x3ec732c3, "");
SYMBOL_CRC(ath9k_hw_set_gpio, 0x70e2dc9a, "");
SYMBOL_CRC(ath9k_hw_setantenna, 0xc6bee5d2, "");
SYMBOL_CRC(ath9k_hw_getrxfilter, 0x04f546e9, "");
SYMBOL_CRC(ath9k_hw_setrxfilter, 0xc907dead, "");
SYMBOL_CRC(ath9k_hw_phy_disable, 0x4ddf648c, "");
SYMBOL_CRC(ath9k_hw_disable, 0x7e47dc74, "");
SYMBOL_CRC(ath9k_hw_set_txpowerlimit, 0x562bc3b9, "");
SYMBOL_CRC(ath9k_hw_setopmode, 0xc927bce9, "");
SYMBOL_CRC(ath9k_hw_setmcastfilter, 0xb0e7391b, "");
SYMBOL_CRC(ath9k_hw_write_associd, 0x25a871ba, "");
SYMBOL_CRC(ath9k_hw_gettsf64, 0xfa6bcaa7, "");
SYMBOL_CRC(ath9k_hw_settsf64, 0xc48b70bb, "");
SYMBOL_CRC(ath9k_hw_reset_tsf, 0xf2539ec9, "");
SYMBOL_CRC(ath9k_hw_set_tsfadjust, 0xd0361efe, "");
SYMBOL_CRC(ath9k_hw_gettsf32, 0x01b1a34c, "");
SYMBOL_CRC(ath_gen_timer_alloc, 0x4cf7f86c, "");
SYMBOL_CRC(ath9k_hw_gen_timer_start, 0x6ee7ec9a, "");
SYMBOL_CRC(ath9k_hw_gen_timer_stop, 0xb0b3d4f9, "");
SYMBOL_CRC(ath_gen_timer_free, 0x051a9e47, "");
SYMBOL_CRC(ath_gen_timer_isr, 0x9833740e, "");
SYMBOL_CRC(ath9k_hw_name, 0x3503ecf3, "");
SYMBOL_CRC(ar9003_hw_bb_watchdog_check, 0xac746551, "");
SYMBOL_CRC(ar9003_hw_bb_watchdog_dbg_info, 0xb30dfd01, "");
SYMBOL_CRC(ar9003_hw_disable_phy_restart, 0x965d0dd9, "");
SYMBOL_CRC(ath9k_hw_getchan_noise, 0x4891a894, "");
SYMBOL_CRC(ath9k_hw_reset_calvalid, 0x6941e78b, "");
SYMBOL_CRC(ath9k_hw_loadnf, 0x3d8b6f7e, "");
SYMBOL_CRC(ath9k_hw_getnf, 0x90a0ef62, "");
SYMBOL_CRC(ath9k_hw_bstuck_nfcal, 0x4d16cf4d, "");
SYMBOL_CRC(ath9k_hw_ani_monitor, 0x93d4582d, "");
SYMBOL_CRC(ath9k_hw_disable_mib_counters, 0xaeec08f0, "");
SYMBOL_CRC(ath9k_hw_gettxbuf, 0x31970561, "");
SYMBOL_CRC(ath9k_hw_puttxbuf, 0xecce0b10, "");
SYMBOL_CRC(ath9k_hw_txstart, 0xaf1f10bd, "");
SYMBOL_CRC(ath9k_hw_numtxpending, 0x9a95022a, "");
SYMBOL_CRC(ath9k_hw_updatetxtriglevel, 0xe694b1f0, "");
SYMBOL_CRC(ath9k_hw_abort_tx_dma, 0x602dc6c6, "");
SYMBOL_CRC(ath9k_hw_stop_dma_queue, 0x648dd572, "");
SYMBOL_CRC(ath9k_hw_set_txq_props, 0x8b544145, "");
SYMBOL_CRC(ath9k_hw_get_txq_props, 0x716d3e3b, "");
SYMBOL_CRC(ath9k_hw_setuptxqueue, 0x17d90fbe, "");
SYMBOL_CRC(ath9k_hw_releasetxqueue, 0x340d5ea6, "");
SYMBOL_CRC(ath9k_hw_resettxqueue, 0x19808540, "");
SYMBOL_CRC(ath9k_hw_rxprocdesc, 0x020040c3, "");
SYMBOL_CRC(ath9k_hw_setrxabort, 0x19768083, "");
SYMBOL_CRC(ath9k_hw_putrxbuf, 0xaa2bd22c, "");
SYMBOL_CRC(ath9k_hw_startpcureceive, 0xc602390a, "");
SYMBOL_CRC(ath9k_hw_abortpcurecv, 0x3b01bd0c, "");
SYMBOL_CRC(ath9k_hw_stopdmarecv, 0x8c4e485b, "");
SYMBOL_CRC(ath9k_hw_beaconq_setup, 0x0ebae89b, "");
SYMBOL_CRC(ath9k_hw_intrpend, 0x00236591, "");
SYMBOL_CRC(ath9k_hw_kill_interrupts, 0x67af5eed, "");
SYMBOL_CRC(ath9k_hw_disable_interrupts, 0x8f7d7e40, "");
SYMBOL_CRC(ath9k_hw_resume_interrupts, 0x7e059403, "");
SYMBOL_CRC(ath9k_hw_enable_interrupts, 0x47a67533, "");
SYMBOL_CRC(ath9k_hw_set_interrupts, 0xe1dd0de6, "");
SYMBOL_CRC(ath9k_hw_set_tx_filter, 0x4f9f2cb0, "");
SYMBOL_CRC(ath9k_hw_setuprxdesc, 0x9163c446, "");
SYMBOL_CRC(ath9k_hw_set_rx_bufsize, 0x4ada00a0, "");
SYMBOL_CRC(ath9k_hw_addrxbuf_edma, 0xeaad614b, "");
SYMBOL_CRC(ath9k_hw_process_rxdesc_edma, 0x72f9d5e6, "");
SYMBOL_CRC(ath9k_hw_setup_statusring, 0xd358fb6f, "");
SYMBOL_CRC(ar9003_paprd_enable, 0x575e2730, "");
SYMBOL_CRC(ar9003_paprd_populate_single_table, 0x4533f54b, "");
SYMBOL_CRC(ar9003_paprd_setup_gain_table, 0x83b06cf2, "");
SYMBOL_CRC(ar9003_paprd_create_curve, 0x796a700b, "");
SYMBOL_CRC(ar9003_paprd_init_table, 0x358cbd52, "");
SYMBOL_CRC(ar9003_paprd_is_done, 0xd3cc2e07, "");
SYMBOL_CRC(ar9003_is_paprd_enabled, 0x65672059, "");
SYMBOL_CRC(ath9k_hw_init_btcoex_hw, 0x1a4d3699, "");
SYMBOL_CRC(ath9k_hw_btcoex_init_scheme, 0x67caf270, "");
SYMBOL_CRC(ath9k_hw_btcoex_init_2wire, 0xb063aeec, "");
SYMBOL_CRC(ath9k_hw_btcoex_init_3wire, 0xfe7135a5, "");
SYMBOL_CRC(ath9k_hw_btcoex_deinit, 0xf271591a, "");
SYMBOL_CRC(ath9k_hw_btcoex_init_mci, 0xe59cf5db, "");
SYMBOL_CRC(ath9k_hw_btcoex_set_weight, 0xb826cdad, "");
SYMBOL_CRC(ath9k_hw_btcoex_enable, 0x832a3cb5, "");
SYMBOL_CRC(ath9k_hw_btcoex_disable, 0x01c6ee61, "");
SYMBOL_CRC(ath9k_hw_btcoex_bt_stomp, 0xe6e64041, "");
SYMBOL_CRC(ath9k_hw_btcoex_set_concur_txprio, 0xc13c9c70, "");
SYMBOL_CRC(ar9003_mci_get_interrupt, 0x60ba1858, "");
SYMBOL_CRC(ar9003_mci_send_message, 0xff160ec7, "");
SYMBOL_CRC(ar9003_mci_setup, 0xa8180bed, "");
SYMBOL_CRC(ar9003_mci_cleanup, 0xc8778fbb, "");
SYMBOL_CRC(ar9003_mci_state, 0x77f8e1a5, "");
SYMBOL_CRC(ar9003_mci_get_next_gpm_offset, 0x28084d02, "");
SYMBOL_CRC(ar9003_mci_set_bt_version, 0x837f51b9, "");
SYMBOL_CRC(ar9003_mci_send_wlan_channels, 0xe80729ca, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x7abd989d, "gpiod_get_raw_value" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x96848186, "scnprintf" },
	{ 0x86bd853, "gpiod_set_raw_value" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe990052, "gpio_free" },
	{ 0xd77403e3, "ath_hw_setbssidmask" },
	{ 0x97384f18, "ath_hw_cycle_counters_update" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb1ab353, "ath_regd_get_band_ctl" },
	{ 0x227be944, "ath_hw_get_listen_time" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xdcb764ad, "memset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x22cc646f, "ath_printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ath");


MODULE_INFO(srcversion, "1FA2ACE6CE55525F759AF02");
