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

SYMBOL_CRC(btintel_check_bdaddr, 0x6ef1aaf0, "_gpl");
SYMBOL_CRC(btintel_enter_mfg, 0xa1f6595d, "_gpl");
SYMBOL_CRC(btintel_exit_mfg, 0x6877d609, "_gpl");
SYMBOL_CRC(btintel_set_bdaddr, 0xc30fbe4e, "_gpl");
SYMBOL_CRC(btintel_set_diag, 0x877a52b2, "_gpl");
SYMBOL_CRC(btintel_version_info, 0x032bc775, "_gpl");
SYMBOL_CRC(btintel_load_ddc_config, 0xad946493, "_gpl");
SYMBOL_CRC(btintel_set_event_mask_mfg, 0x1df4fb77, "_gpl");
SYMBOL_CRC(btintel_read_version, 0xfdeaa951, "_gpl");
SYMBOL_CRC(btintel_regmap_init, 0x88aaee9e, "_gpl");
SYMBOL_CRC(btintel_send_intel_reset, 0x06874476, "_gpl");
SYMBOL_CRC(btintel_read_boot_params, 0x841134cc, "_gpl");
SYMBOL_CRC(btintel_download_firmware, 0xdcca4e1e, "_gpl");
SYMBOL_CRC(btintel_set_quality_report, 0x2d02a0ba, "_gpl");
SYMBOL_CRC(btintel_configure_setup, 0xbe64cf6f, "_gpl");
SYMBOL_CRC(btintel_bootup, 0x47572265, "_gpl");
SYMBOL_CRC(btintel_secure_send_result, 0x78376ec2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd8141f65, "__hci_cmd_sync" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x718b8b7, "bt_info" },
	{ 0x8e7ecce, "request_firmware_direct" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa840cae5, "hci_cmd_sync" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7aad008b, "bt_to_errno" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x121445a5, "skb_pull" },
	{ 0xf2ba3154, "__regmap_init" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x5710317b, "firmware_request_nowarn" },
	{ 0x74a05018, "request_firmware" },
	{ 0x538fb2e4, "__hci_cmd_sync_ev" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdcb764ad, "memset" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "28058858CBC79161EF62BD9");
