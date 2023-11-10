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
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfca03817, "mmc_detect_change" },
	{ 0x631baa5b, "dma_sync_single_for_device" },
	{ 0x17df0a79, "spi_sync_locked" },
	{ 0x271438e, "dma_sync_single_for_cpu" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xba55d23e, "crc7_be" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd0585d22, "spi_setup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb05c43aa, "mmc_remove_host" },
	{ 0xa951a544, "dma_unmap_page_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xf61468fd, "mmc_spi_put_pdata" },
	{ 0xa73f092e, "mmc_free_host" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x4ace98dd, "mmc_alloc_host" },
	{ 0x29957cf5, "mmc_spi_get_pdata" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0x549b57bc, "mmc_add_host" },
	{ 0xf4124b59, "mmc_gpiod_request_cd" },
	{ 0xd7bb0019, "mmc_gpiod_request_ro" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x5598ed4, "mmc_gpiod_request_cd_irq" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xf7178096, "spi_bus_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x691ec44b, "flush_dcache_page" },
	{ 0x87b8798d, "sg_next" },
	{ 0x925c88ff, "spi_bus_unlock" },
	{ 0x794cef56, "mmc_request_done" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0xf566f49c, "mmc_gpio_get_ro" },
	{ 0xcd708e81, "mmc_gpio_get_cd" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "crc7,of_mmc_spi");

MODULE_ALIAS("of:N*T*Cmmc-spi-slot");
MODULE_ALIAS("of:N*T*Cmmc-spi-slotC*");
MODULE_ALIAS("spi:mmc-spi-slot");

MODULE_INFO(srcversion, "FF7790ADE60617A62E014F6");
