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

MODULE_INFO(staging, "Y");

SYMBOL_CRC(fbtft_write_buf_dc, 0x0209e7e4, "");
SYMBOL_CRC(fbtft_dbg_hex, 0x07b70244, "");
SYMBOL_CRC(fbtft_unregister_backlight, 0xda880a47, "");
SYMBOL_CRC(fbtft_register_backlight, 0x4cdf6024, "");
SYMBOL_CRC(fbtft_framebuffer_alloc, 0xa25ed29a, "");
SYMBOL_CRC(fbtft_framebuffer_release, 0x51d81628, "");
SYMBOL_CRC(fbtft_register_framebuffer, 0xd8ea9fa2, "");
SYMBOL_CRC(fbtft_unregister_framebuffer, 0x4a76c5a2, "");
SYMBOL_CRC(fbtft_init_display, 0x4167e7e8, "");
SYMBOL_CRC(fbtft_probe_common, 0xa3450f7d, "");
SYMBOL_CRC(fbtft_remove_common, 0x0196d457, "");
SYMBOL_CRC(fbtft_write_reg8_bus8, 0x4a454236, "");
SYMBOL_CRC(fbtft_write_reg16_bus8, 0x73cbc95e, "");
SYMBOL_CRC(fbtft_write_reg16_bus16, 0xb07bd5bb, "");
SYMBOL_CRC(fbtft_write_reg8_bus9, 0x729f364f, "");
SYMBOL_CRC(fbtft_write_vmem16_bus8, 0xd2101cb1, "");
SYMBOL_CRC(fbtft_write_vmem16_bus9, 0x91feeb62, "");
SYMBOL_CRC(fbtft_write_vmem8_bus8, 0xe226bf0a, "");
SYMBOL_CRC(fbtft_write_vmem16_bus16, 0xac4a8966, "");
SYMBOL_CRC(fbtft_write_spi, 0x77e9328f, "");
SYMBOL_CRC(fbtft_write_spi_emulate_9, 0x9b378494, "");
SYMBOL_CRC(fbtft_read_spi, 0xf508e178, "");
SYMBOL_CRC(fbtft_write_gpio8_wr, 0xb61596dc, "");
SYMBOL_CRC(fbtft_write_gpio16_wr, 0xedeb4ca3, "");
SYMBOL_CRC(fbtft_write_gpio16_wr_latched, 0x20436883, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb0dea802, "unregister_framebuffer" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0x991da2cb, "param_ops_ulong" },
	{ 0xa57334bc, "backlight_device_unregister" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcbca3a1f, "gpiod_set_value" },
	{ 0x77bc13a0, "strim" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x96848186, "scnprintf" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8f3f63bf, "fb_deferred_io_init" },
	{ 0x745bd700, "fb_deferred_io_cleanup" },
	{ 0x6752d2b8, "framebuffer_alloc" },
	{ 0x29d64eb5, "gpiod_get_value" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x71338e32, "fb_sys_write" },
	{ 0x102231c1, "sys_imageblit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0xc8437f7a, "sys_fillrect" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x209009ac, "of_match_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x93426ecd, "device_property_read_string" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c2f60b0, "register_framebuffer" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x215869ab, "fb_deferred_io_mmap" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb262aa8, "sys_copyarea" },
	{ 0x999e8297, "vfree" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x39416365, "backlight_device_register" },
	{ 0xb1c29ef, "fb_sys_read" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x5c861d8c, "framebuffer_release" },
	{ 0x98cf60b3, "strlen" },
	{ 0xde937eb3, "devm_gpiod_get_index_optional" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "backlight,fb_sys_fops,sysimgblt,sysfillrect,syscopyarea");


MODULE_INFO(srcversion, "3D241584E3B5CF1DA74C853");
