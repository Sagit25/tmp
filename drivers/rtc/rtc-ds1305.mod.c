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
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x7a9ab03e, "devm_free_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8b65f896, "spi_write_then_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfbe81577, "rtc_update_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xdcb764ad, "memset" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xec1f925, "devm_rtc_allocate_device" },
	{ 0x1338a947, "__devm_rtc_register_device" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xf277cf3, "devm_rtc_nvmem_register" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD8AADCC44541A61434318B");
