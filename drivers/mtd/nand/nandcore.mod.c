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

SYMBOL_CRC(nanddev_isbad, 0xaa833bd4, "_gpl");
SYMBOL_CRC(nanddev_markbad, 0x3c948548, "_gpl");
SYMBOL_CRC(nanddev_isreserved, 0x110efa21, "_gpl");
SYMBOL_CRC(nanddev_erase, 0xba8232b2, "_gpl");
SYMBOL_CRC(nanddev_mtd_erase, 0x189896b4, "_gpl");
SYMBOL_CRC(nanddev_mtd_max_bad_blocks, 0x32c11a70, "_gpl");
SYMBOL_CRC(nanddev_ecc_engine_init, 0x38d1e4a2, "_gpl");
SYMBOL_CRC(nanddev_ecc_engine_cleanup, 0x3512b5f8, "_gpl");
SYMBOL_CRC(nanddev_init, 0xc6209694, "_gpl");
SYMBOL_CRC(nanddev_cleanup, 0x5da44866, "_gpl");
SYMBOL_CRC(nanddev_bbt_init, 0x3ca642d3, "_gpl");
SYMBOL_CRC(nanddev_bbt_cleanup, 0x10ea3707, "_gpl");
SYMBOL_CRC(nanddev_bbt_update, 0x15e70a0d, "_gpl");
SYMBOL_CRC(nanddev_bbt_get_block_status, 0xee3146a5, "_gpl");
SYMBOL_CRC(nanddev_bbt_set_block_status, 0xcadb2684, "_gpl");
SYMBOL_CRC(nand_ecc_init_ctx, 0x0605d1bb, "");
SYMBOL_CRC(nand_ecc_cleanup_ctx, 0xbf78e148, "");
SYMBOL_CRC(nand_ecc_prepare_io_req, 0xbf83c9dc, "");
SYMBOL_CRC(nand_ecc_finish_io_req, 0xc82f5c1f, "");
SYMBOL_CRC(nand_get_small_page_ooblayout, 0xbac6f7b1, "_gpl");
SYMBOL_CRC(nand_get_large_page_ooblayout, 0x646f7d6c, "_gpl");
SYMBOL_CRC(nand_get_large_page_hamming_ooblayout, 0x87e626c4, "_gpl");
SYMBOL_CRC(of_get_nand_ecc_user_config, 0x1639a4cd, "");
SYMBOL_CRC(nand_ecc_is_strong_enough, 0xe31bdc32, "");
SYMBOL_CRC(nand_ecc_init_req_tweaking, 0x4b7e303c, "_gpl");
SYMBOL_CRC(nand_ecc_cleanup_req_tweaking, 0xa34812c1, "_gpl");
SYMBOL_CRC(nand_ecc_tweak_req, 0x1cdec161, "_gpl");
SYMBOL_CRC(nand_ecc_restore_req, 0x4dac5732, "_gpl");
SYMBOL_CRC(nand_ecc_get_sw_engine, 0x679cd4d8, "");
SYMBOL_CRC(nand_ecc_get_on_die_hw_engine, 0x2d72c234, "");
SYMBOL_CRC(nand_ecc_register_on_host_hw_engine, 0x390ef991, "");
SYMBOL_CRC(nand_ecc_unregister_on_host_hw_engine, 0x8cb84f58, "");
SYMBOL_CRC(nand_ecc_get_on_host_hw_engine, 0xe826a8cb, "");
SYMBOL_CRC(nand_ecc_put_on_host_hw_engine, 0x364981f2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3e1cfad0, "platform_device_put" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x8362caef, "of_find_device_by_node" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf7dca34a, "get_device" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x606b7e51, "put_device" },
	{ 0xb7075882, "mtd_check_expert_analysis_mode" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xdcb764ad, "memset" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "D1D01AEF1EF2C473D84B4CA");
