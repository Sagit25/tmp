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

SYMBOL_CRC(iio_channel_get_all_cb, 0x644367ed, "_gpl");
SYMBOL_CRC(iio_channel_cb_set_buffer_watermark, 0x9acf62ab, "_gpl");
SYMBOL_CRC(iio_channel_start_all_cb, 0x7a711aef, "_gpl");
SYMBOL_CRC(iio_channel_stop_all_cb, 0x2a1fab3c, "_gpl");
SYMBOL_CRC(iio_channel_release_all_cb, 0x267c0508, "_gpl");
SYMBOL_CRC(iio_channel_cb_get_channels, 0x882d259a, "_gpl");
SYMBOL_CRC(iio_channel_cb_get_iio_dev, 0x37d69a96, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x20fec40e, "iio_update_buffers" },
	{ 0x4269f3e8, "iio_channel_release_all" },
	{ 0xbae1f931, "iio_buffer_put" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb01f9066, "iio_buffer_init" },
	{ 0xa59da4e4, "iio_channel_get_all" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "7F5A76C2D34043D615353E4");
