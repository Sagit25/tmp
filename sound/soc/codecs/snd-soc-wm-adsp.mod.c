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

SYMBOL_CRC(wm_adsp_fw_get, 0x8a419cb2, "_gpl");
SYMBOL_CRC(wm_adsp_fw_put, 0x024abcaa, "_gpl");
SYMBOL_CRC(wm_adsp_fw_enum, 0x894458f3, "_gpl");
SYMBOL_CRC(wm_adsp_write_ctl, 0x5d603381, "_gpl");
SYMBOL_CRC(wm_adsp_read_ctl, 0xcc001952, "_gpl");
SYMBOL_CRC(wm_adsp1_init, 0x47380052, "_gpl");
SYMBOL_CRC(wm_adsp1_event, 0xcc1e9098, "_gpl");
SYMBOL_CRC(wm_adsp2_set_dspclk, 0xf37cb070, "_gpl");
SYMBOL_CRC(wm_adsp2_preloader_get, 0xb6f4d490, "_gpl");
SYMBOL_CRC(wm_adsp2_preloader_put, 0x3efff488, "_gpl");
SYMBOL_CRC(wm_adsp_early_event, 0x280a30af, "_gpl");
SYMBOL_CRC(wm_adsp_event, 0x99ba471c, "_gpl");
SYMBOL_CRC(wm_adsp2_component_probe, 0xcae245fb, "_gpl");
SYMBOL_CRC(wm_adsp2_component_remove, 0x25092541, "_gpl");
SYMBOL_CRC(wm_adsp2_init, 0xc36a510c, "_gpl");
SYMBOL_CRC(wm_halo_init, 0x284f23eb, "_gpl");
SYMBOL_CRC(wm_adsp2_remove, 0x41ef180d, "_gpl");
SYMBOL_CRC(wm_adsp_compr_open, 0xf87428ed, "_gpl");
SYMBOL_CRC(wm_adsp_compr_free, 0xa8394d3a, "_gpl");
SYMBOL_CRC(wm_adsp_compr_set_params, 0xa2bcb646, "_gpl");
SYMBOL_CRC(wm_adsp_compr_get_caps, 0xfcc42fe9, "_gpl");
SYMBOL_CRC(wm_adsp_compr_trigger, 0xd62ac492, "_gpl");
SYMBOL_CRC(wm_adsp_compr_handle_irq, 0xa9988942, "_gpl");
SYMBOL_CRC(wm_adsp_compr_pointer, 0xc39073f0, "_gpl");
SYMBOL_CRC(wm_adsp_compr_copy, 0xe0b5384d, "_gpl");
SYMBOL_CRC(wm_adsp2_bus_error, 0xdd3c79ef, "_gpl");
SYMBOL_CRC(wm_halo_bus_error, 0xea38ee07, "_gpl");
SYMBOL_CRC(wm_halo_wdt_expire, 0x52c16479, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe11aef15, "snd_soc_card_get_kcontrol" },
	{ 0xfeaf4b58, "snd_soc_component_force_enable_pin" },
	{ 0x5710317b, "firmware_request_nowarn" },
	{ 0x3f1f240f, "cs_dsp_cleanup_debugfs" },
	{ 0xf8851661, "cs_dsp_coeff_read_ctrl" },
	{ 0x7d6645d5, "snd_compr_stop_error" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x999701ab, "cs_dsp_stop" },
	{ 0x62cdc8c1, "cs_dsp_adsp1_power_up" },
	{ 0x39d57e1, "cs_dsp_adsp1_power_down" },
	{ 0x96848186, "scnprintf" },
	{ 0x512a5572, "cs_dsp_adsp1_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x25ce6b48, "cs_dsp_coeff_write_ctrl" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1b9ae0c5, "cs_dsp_init_debugfs" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9983a11, "cs_dsp_halo_bus_error" },
	{ 0x7cc6bba5, "snd_soc_dapm_sync" },
	{ 0x4e5562f8, "cs_dsp_remove_padding" },
	{ 0x354cf967, "cs_dsp_find_alg_region" },
	{ 0xa7b99fa9, "cs_dsp_coeff_write_acked_control" },
	{ 0xc48a83dc, "devm_kstrdup" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xab288db4, "cs_dsp_get_ctl" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3ca236d3, "cs_dsp_halo_init" },
	{ 0x73747db0, "cs_dsp_power_down" },
	{ 0x79686ff5, "cs_dsp_adsp2_init" },
	{ 0x37230f5c, "snd_ctl_notify" },
	{ 0x2e83e82e, "snd_soc_add_component_controls" },
	{ 0x2167b624, "cs_dsp_remove" },
	{ 0x11089ac7, "_ctype" },
	{ 0x144d6986, "cs_dsp_mem_region_name" },
	{ 0xb4ca557, "cs_dsp_set_dspclk" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xed95846f, "cs_dsp_power_up" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15093f13, "cs_dsp_run" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xfd378ca9, "cs_dsp_write_data_word" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6d57747d, "cs_dsp_halo_wdt_expire" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xcdedc12, "snd_soc_component_disable_pin" },
	{ 0xd8f792e9, "snd_soc_bytes_tlv_callback" },
	{ 0x2ab14f6, "cs_dsp_adsp2_bus_error" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xa4f7bb6e, "cs_dsp_read_raw_data_block" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0x41e603f8, "cs_dsp_read_data_word" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,cs_dsp,snd-compress,snd");


MODULE_INFO(srcversion, "6CD802B7F68CB697A2568AA");
