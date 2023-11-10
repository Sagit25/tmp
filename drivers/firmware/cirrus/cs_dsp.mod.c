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

SYMBOL_CRC(cs_dsp_mem_region_name, 0x144d6986, "_gpl");
SYMBOL_CRC(cs_dsp_init_debugfs, 0x1b9ae0c5, "_gpl");
SYMBOL_CRC(cs_dsp_cleanup_debugfs, 0x3f1f240f, "_gpl");
SYMBOL_CRC(cs_dsp_coeff_write_acked_control, 0xa7b99fa9, "_gpl");
SYMBOL_CRC(cs_dsp_coeff_write_ctrl, 0x25ce6b48, "_gpl");
SYMBOL_CRC(cs_dsp_coeff_read_ctrl, 0xf8851661, "_gpl");
SYMBOL_CRC(cs_dsp_get_ctl, 0xab288db4, "_gpl");
SYMBOL_CRC(cs_dsp_find_alg_region, 0x354cf967, "_gpl");
SYMBOL_CRC(cs_dsp_adsp1_init, 0x512a5572, "_gpl");
SYMBOL_CRC(cs_dsp_adsp1_power_up, 0x62cdc8c1, "_gpl");
SYMBOL_CRC(cs_dsp_adsp1_power_down, 0x039d57e1, "_gpl");
SYMBOL_CRC(cs_dsp_set_dspclk, 0x0b4ca557, "_gpl");
SYMBOL_CRC(cs_dsp_power_up, 0xed95846f, "_gpl");
SYMBOL_CRC(cs_dsp_power_down, 0x73747db0, "_gpl");
SYMBOL_CRC(cs_dsp_run, 0x15093f13, "_gpl");
SYMBOL_CRC(cs_dsp_stop, 0x999701ab, "_gpl");
SYMBOL_CRC(cs_dsp_adsp2_init, 0x79686ff5, "_gpl");
SYMBOL_CRC(cs_dsp_halo_init, 0x3ca236d3, "_gpl");
SYMBOL_CRC(cs_dsp_remove, 0x2167b624, "_gpl");
SYMBOL_CRC(cs_dsp_read_raw_data_block, 0xa4f7bb6e, "_gpl");
SYMBOL_CRC(cs_dsp_read_data_word, 0x41e603f8, "_gpl");
SYMBOL_CRC(cs_dsp_write_data_word, 0xfd378ca9, "_gpl");
SYMBOL_CRC(cs_dsp_remove_padding, 0x4e5562f8, "_gpl");
SYMBOL_CRC(cs_dsp_adsp2_bus_error, 0x02ab14f6, "_gpl");
SYMBOL_CRC(cs_dsp_halo_bus_error, 0x09983a11, "_gpl");
SYMBOL_CRC(cs_dsp_halo_wdt_expire, 0x6d57747d, "_gpl");
SYMBOL_CRC(cs_dsp_chunk_write, 0x6e0cce2d, "_gpl");
SYMBOL_CRC(cs_dsp_chunk_flush, 0x9e324cb0, "_gpl");
SYMBOL_CRC(cs_dsp_chunk_read, 0xb6c0d9e7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x49e3a4b, "debugfs_create_bool" },
	{ 0x40718b0d, "debugfs_create_x32" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x98cf60b3, "strlen" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x2d3abc95, "regmap_raw_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xc047d9e, "regmap_raw_read" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a921311, "strncmp" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xdcb764ad, "memset" },
	{ 0x3a90ab7e, "regmap_multi_reg_write" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa81e394c, "regmap_async_complete" },
	{ 0x999e8297, "vfree" },
	{ 0xc9a12dfd, "regmap_raw_write_async" },
	{ 0x394f4efd, "simple_open" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "025F2B02D781447309D1D19");
