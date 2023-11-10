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
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xd8ec0763, "spi_split_transfers_maxsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x14a5f266, "dma_get_slave_caps" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xa951a544, "dma_unmap_page_attrs" },
	{ 0x631baa5b, "dma_sync_single_for_device" },
	{ 0xe67cd7cf, "gpiochip_find" },
	{ 0x53632f72, "gpiochip_request_own_desc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x48f383c2, "dma_release_channel" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x11215294, "spi_unregister_controller" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x925d3e46, "__devm_spi_alloc_controller" },
	{ 0xc226ac1b, "devm_platform_get_and_ioremap_resource" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xaf8c45f8, "dma_request_chan" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x8d851140, "spi_register_controller" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xddb15890, "debugfs_create_u64" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x10d31101, "spi_finalize_current_transfer" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spiC*");

MODULE_INFO(srcversion, "DEFA7738FE1DC8FB93944E1");
