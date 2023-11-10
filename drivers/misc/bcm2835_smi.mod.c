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

SYMBOL_CRC(bcm2835_smi_set_regs_from_settings, 0xab7a4d1d, "");
SYMBOL_CRC(bcm2835_smi_get_settings_from_regs, 0xf6720336, "");
SYMBOL_CRC(bcm2835_smi_user_dma, 0xb4f71798, "");
SYMBOL_CRC(bcm2835_smi_write_buf, 0x045a0916, "");
SYMBOL_CRC(bcm2835_smi_read_buf, 0x3a444f4b, "");
SYMBOL_CRC(bcm2835_smi_set_address, 0x72db83c4, "");
SYMBOL_CRC(bcm2835_smi_get, 0x4334b182, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xcf2a6966, "up" },
	{ 0x8362caef, "of_find_device_by_node" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x48f383c2, "dma_release_channel" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xc226ac1b, "devm_platform_get_and_ioremap_resource" },
	{ 0xaf8c45f8, "dma_request_chan" },
	{ 0xc9251010, "dmam_alloc_attrs" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0x27187442, "dma_wait_for_async_tx" },
	{ 0xa951a544, "dma_unmap_page_attrs" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smiC*");

MODULE_INFO(srcversion, "E8F4BF2DAD40D032EAB7FB4");
