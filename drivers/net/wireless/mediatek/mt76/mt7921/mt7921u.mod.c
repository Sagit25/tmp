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


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9043be75, "mt76_connac_mcu_restart" },
	{ 0x312bd16c, "__mt76u_vendor_request" },
	{ 0x8b5ffc61, "__mt76u_init" },
	{ 0x972a3723, "consume_skb" },
	{ 0x1f6f6685, "___mt76u_wr" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x2cd74fd6, "mt7921_reset" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbaa0310, "mt7921_mcu_set_eeprom" },
	{ 0xa38cc84a, "mt7921_sta_ps" },
	{ 0x54224c67, "mt7921_usb_sdio_tx_complete_skb" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2964344, "__wake_up" },
	{ 0x6588e37c, "mt76u_resume_rx" },
	{ 0x84b2bed2, "kthread_park" },
	{ 0x4138e5ba, "mt7921_mac_init" },
	{ 0x3ca66319, "mt76_alloc_device" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x79d588f1, "mt7921_register_device" },
	{ 0xca658c34, "__mt7921_start" },
	{ 0x8b041c38, "mt7921_run_firmware" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0xec80a4a6, "usb_reset_device" },
	{ 0xe1f51896, "mt7921_usb_sdio_tx_status_data" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xd71ad3b3, "mt7921_update_channel" },
	{ 0x7aa9b0f5, "mt76u_alloc_mcu_queue" },
	{ 0xac1f0e6d, "mt76_free_device" },
	{ 0x517d9b91, "kthread_unpark" },
	{ 0xeb8d197e, "mt7921_ops" },
	{ 0x53cd83f9, "mt76u_queues_deinit" },
	{ 0x7ea31e0c, "devm_kmemdup" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x908baa2, "mt76_unregister_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0xec31fb8f, "mt7921_mac_sta_remove" },
	{ 0x3ca9f4be, "mt7921_usb_sdio_tx_prepare_skb" },
	{ 0xc6d7e0dc, "mt76u_read_copy" },
	{ 0x528098c4, "mt76_connac2_mcu_fill_message" },
	{ 0x8c6ad2fc, "mt7921_mcu_parse_response" },
	{ 0xf31425f2, "mt7921_stop" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x45a27d97, "mt76_txq_schedule_all" },
	{ 0x2fbf113b, "mt76u_alloc_queues" },
	{ 0x6c06db4e, "mt76u_stop_tx" },
	{ 0x496aa88c, "mt76u_vendor_request" },
	{ 0xfccfc18b, "____mt76_poll_msec" },
	{ 0x60ac2671, "mt7921_mac_sta_add" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbdc84eb0, "mt7921_queue_rx_skb" },
	{ 0xdb976afe, "mt76u_stop_rx" },
	{ 0x1cc48e3e, "___mt76u_rr" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x1028c195, "mt76_connac_mcu_set_hif_suspend" },
	{ 0x7d3fbc8e, "mt7921_rx_check" },
	{ 0x53039629, "__mt76_poll" },
	{ 0xfcfb7dde, "mt7921_mac_sta_assoc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mt76-connac-lib,mt76-usb,mt7921-common,mt76");

MODULE_ALIAS("usb:v0E8Dp7961d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "A9DEE4883B246D847B7C74E");
