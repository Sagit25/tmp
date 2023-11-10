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

SYMBOL_CRC(iio_triggered_buffer_setup_ext, 0xe29055c3, "");
SYMBOL_CRC(iio_triggered_buffer_cleanup, 0x3774db31, "");
SYMBOL_CRC(devm_iio_triggered_buffer_setup_ext, 0xab6c2dfb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1b8f50fc, "iio_kfifo_allocate" },
	{ 0x894a8938, "iio_device_id" },
	{ 0x803cdcad, "iio_alloc_pollfunc" },
	{ 0x53254e36, "iio_device_attach_buffer" },
	{ 0xf6998924, "iio_kfifo_free" },
	{ 0x1ae147c, "iio_dealloc_pollfunc" },
	{ 0xd903f981, "devm_add_action" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio");


MODULE_INFO(srcversion, "A4A2CA091518043A2E933A0");
