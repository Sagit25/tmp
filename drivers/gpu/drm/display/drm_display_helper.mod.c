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

SYMBOL_CRC(drm_hdmi_infoframe_set_hdr_metadata, 0xb726e1b8, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_colorimetry, 0x17b68a70, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_bars, 0xf4bf8615, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_content_type, 0x7c7204a0, "");
SYMBOL_CRC(drm_scdc_read, 0x34c6142e, "");
SYMBOL_CRC(drm_scdc_write, 0xe1ea1cc9, "");
SYMBOL_CRC(drm_scdc_get_scrambling_status, 0x7f860eee, "");
SYMBOL_CRC(drm_scdc_set_scrambling, 0xed9844f6, "");
SYMBOL_CRC(drm_scdc_set_high_tmds_clock_ratio, 0x23fbe666, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xea593f6, "hdmi_drm_infoframe_init" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "A2BE62A2D13F85E0A2C5E31");
