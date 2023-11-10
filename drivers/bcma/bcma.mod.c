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

SYMBOL_CRC(bcma_find_core_unit, 0x1f4e282c, "_gpl");
SYMBOL_CRC(bcma_core_irq, 0x38a885b3, "");
SYMBOL_CRC(__bcma_driver_register, 0x01b01880, "_gpl");
SYMBOL_CRC(bcma_driver_unregister, 0x5a33c86b, "_gpl");
SYMBOL_CRC(bcma_core_is_enabled, 0x9fbd2905, "_gpl");
SYMBOL_CRC(bcma_core_disable, 0xada36cc7, "_gpl");
SYMBOL_CRC(bcma_core_enable, 0xc0c60127, "_gpl");
SYMBOL_CRC(bcma_core_set_clockmode, 0x25fa67bf, "_gpl");
SYMBOL_CRC(bcma_core_pll_ctl, 0x9cb64679, "_gpl");
SYMBOL_CRC(bcma_core_dma_translation, 0xca430af1, "");
SYMBOL_CRC(bcma_chipco_get_alp_clock, 0xca22864b, "_gpl");
SYMBOL_CRC(bcma_chipco_gpio_out, 0x0b6b06a8, "_gpl");
SYMBOL_CRC(bcma_chipco_gpio_outen, 0xae33f25f, "_gpl");
SYMBOL_CRC(bcma_chipco_gpio_control, 0x454f280c, "_gpl");
SYMBOL_CRC(bcma_chipco_pll_read, 0xe0f4d134, "_gpl");
SYMBOL_CRC(bcma_chipco_pll_write, 0xc097e164, "_gpl");
SYMBOL_CRC(bcma_chipco_pll_maskset, 0x6bb6f28c, "_gpl");
SYMBOL_CRC(bcma_chipco_chipctl_maskset, 0xb019ddfd, "_gpl");
SYMBOL_CRC(bcma_chipco_regctl_maskset, 0x683b3370, "_gpl");
SYMBOL_CRC(bcma_pmu_get_bus_clock, 0x06caf68a, "_gpl");
SYMBOL_CRC(bcma_pmu_spuravoid_pllupdate, 0xca4f3081, "_gpl");
SYMBOL_CRC(bcma_chipco_b_mii_write, 0xecc87e4e, "_gpl");
SYMBOL_CRC(bcma_core_pci_power_save, 0x85fde954, "_gpl");
SYMBOL_CRC(bcma_host_pci_up, 0x60b94959, "_gpl");
SYMBOL_CRC(bcma_host_pci_down, 0xf3d1aabb, "_gpl");
SYMBOL_CRC(bcma_host_pci_irq_ctl, 0x9a575e71, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xc8557225, "pci_enable_device" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x20c69804, "pci_iomap" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0x7e7023ac, "of_platform_default_populate" },
	{ 0x90e0ae9a, "__pci_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x6eb983df, "device_initialize" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x7c9882b9, "pci_request_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf7dca34a, "get_device" },
	{ 0x93d6bc3a, "of_irq_parse_one" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6ff183d, "pci_unregister_driver" },
	{ 0x7b2eadf1, "pci_read_config_dword" },
	{ 0x92997ed8, "_printk" },
	{ 0xce7b0059, "of_irq_parse_raw" },
	{ 0xbeedee72, "of_get_next_child" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x606b7e51, "put_device" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x314dd00c, "bus_unregister" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x7bbe500c, "device_add" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x99d342df, "pci_iounmap" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xe5f5e507, "pci_set_master" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5561da8a, "platform_device_register_full" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaf68e356, "pci_release_regions" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xca4a8a39, "__of_get_address" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe82d68c3, "pci_disable_device" },
	{ 0x2eb4bbc4, "pcie_set_readrq" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x26a1ca83, "irq_create_of_mapping" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xd2020e0d, "of_dma_configure_id" },
	{ 0x24a061ef, "driver_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x28bea751, "pci_write_config_dword" },
	{ 0x718d3f3f, "of_translate_address" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xeb280106, "bus_register" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00000576sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004313sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004331sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004357sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004359sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv00001028sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv00001028sd00000018bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv0000105Bsd0000E092bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv0000103Csd0000804Abc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DCsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6261DADE1ECA6E71524B2FE");
