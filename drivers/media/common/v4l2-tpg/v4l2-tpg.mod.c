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

SYMBOL_CRC(tpg_pattern_strings, 0xce8159bb, "_gpl");
SYMBOL_CRC(tpg_aspect_strings, 0x040dc7cd, "_gpl");
SYMBOL_CRC(tpg_set_font, 0xaa5503d9, "_gpl");
SYMBOL_CRC(tpg_init, 0xb052969d, "_gpl");
SYMBOL_CRC(tpg_alloc, 0xe6f04b89, "_gpl");
SYMBOL_CRC(tpg_free, 0xa8a3f406, "_gpl");
SYMBOL_CRC(tpg_s_fourcc, 0xe7ee5819, "_gpl");
SYMBOL_CRC(tpg_s_crop_compose, 0x7e83543f, "_gpl");
SYMBOL_CRC(tpg_reset_source, 0xf7ec0949, "_gpl");
SYMBOL_CRC(tpg_g_interleaved_plane, 0x4a738cc1, "_gpl");
SYMBOL_CRC(tpg_gen_text, 0x21bfae4e, "_gpl");
SYMBOL_CRC(tpg_g_color_order, 0x80aaf962, "_gpl");
SYMBOL_CRC(tpg_update_mv_step, 0xbbc315dd, "_gpl");
SYMBOL_CRC(tpg_calc_text_basep, 0xf7a5f765, "_gpl");
SYMBOL_CRC(tpg_log_status, 0xe2169014, "_gpl");
SYMBOL_CRC(tpg_fill_plane_buffer, 0xcaede3e2, "_gpl");
SYMBOL_CRC(tpg_fillbuffer, 0xf064e392, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x999e8297, "vfree" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "155A224814EE33787E89AE0");
