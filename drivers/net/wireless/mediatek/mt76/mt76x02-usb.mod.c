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

SYMBOL_CRC(mt76x02u_mcu_fw_reset, 0x4eab5bb6, "_gpl");
SYMBOL_CRC(mt76x02u_mcu_fw_send_data, 0x371be2b5, "_gpl");
SYMBOL_CRC(mt76x02u_init_mcu, 0x446749d5, "_gpl");
SYMBOL_CRC(mt76x02u_tx_complete_skb, 0x76291438, "_gpl");
SYMBOL_CRC(mt76x02u_mac_start, 0x5e5b3fd1, "_gpl");
SYMBOL_CRC(mt76x02u_tx_prepare_skb, 0xcdd3395d, "_gpl");
SYMBOL_CRC(mt76x02u_init_beacon_config, 0xba66ad44, "_gpl");
SYMBOL_CRC(mt76x02u_exit_beacon_config, 0xc053666a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc3821288, "mt76x02_update_beacon_iter" },
	{ 0x5e074531, "ieee80211_iterate_interfaces" },
	{ 0x8f7faafb, "mt76x02_enqueue_buffered_bc" },
	{ 0xcf646aca, "mt76x02_remove_hdr_pad" },
	{ 0x48471741, "skb_put" },
	{ 0x972a3723, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x94d0e0e0, "mt76x02_resync_beacon_timer" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa63ffbfc, "mt76x02_mcu_parse_response" },
	{ 0xe974ee17, "mt76_csa_check" },
	{ 0xfaa089a8, "mt76_tx_status_skb_add" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf22bcc8c, "mt76u_single_wr" },
	{ 0x1cc1fb3d, "__mt76_tx_complete_skb" },
	{ 0xff95d37b, "mt76x02_mac_reset_counters" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa71c2ada, "ieee80211_get_hdrlen_from_skb" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9e012e62, "mt76_csa_finish" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x121445a5, "skb_pull" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x72bc4d57, "mt76x02_init_beacon_config" },
	{ 0x12c7531a, "__mt76_mcu_msg_alloc" },
	{ 0xbd826a27, "mt76x02_mac_write_txwi" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x496aa88c, "mt76u_vendor_request" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2058be1, "mt76_skb_adjust_pad" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x8c128671, "mt76x02_mac_set_beacon" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0x53039629, "__mt76_poll" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mt76x02-lib,mac80211,mt76,mt76-usb,cfg80211");


MODULE_INFO(srcversion, "0B8A9DF7B77F612B65C6819");
