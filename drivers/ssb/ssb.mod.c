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

SYMBOL_CRC(ssb_bus_resume, 0xd796e792, "");
SYMBOL_CRC(ssb_bus_suspend, 0x2559b18a, "");
SYMBOL_CRC(ssb_bus_unregister, 0xe8d9ca57, "");
SYMBOL_CRC(__ssb_driver_register, 0xc0657ae9, "");
SYMBOL_CRC(ssb_driver_unregister, 0xb62bf178, "");
SYMBOL_CRC(ssb_set_devtypedata, 0x52ba7a01, "");
SYMBOL_CRC(ssb_clockspeed, 0xdc2e80ea, "");
SYMBOL_CRC(ssb_device_is_enabled, 0xc385c121, "");
SYMBOL_CRC(ssb_device_enable, 0x537f8d09, "");
SYMBOL_CRC(ssb_device_disable, 0x74cb3e67, "");
SYMBOL_CRC(ssb_dma_translation, 0xb4a4589b, "");
SYMBOL_CRC(ssb_bus_may_powerdown, 0x602135ad, "");
SYMBOL_CRC(ssb_bus_powerup, 0x965f9791, "");
SYMBOL_CRC(ssb_commit_settings, 0x6c3b3999, "");
SYMBOL_CRC(ssb_admatch_base, 0xcb17f1cb, "");
SYMBOL_CRC(ssb_admatch_size, 0xdfc7c6ef, "");
SYMBOL_CRC(ssb_pcihost_register, 0xb41a8f8c, "");
SYMBOL_CRC(ssb_chipco_gpio_control, 0x6d58d095, "");
SYMBOL_CRC(ssb_pmu_set_ldo_voltage, 0x5ea4ab58, "");
SYMBOL_CRC(ssb_pmu_set_ldo_paref, 0x1e55d28f, "");
SYMBOL_CRC(ssb_pmu_spuravoid_pllupdate, 0xc7ca0c93, "_gpl");
SYMBOL_CRC(ssb_pcicore_dev_irqvecs_enable, 0x921de0a7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xc8557225, "pci_enable_device" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x20c69804, "pci_iomap" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0x96848186, "scnprintf" },
	{ 0x90e0ae9a, "__pci_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x7c9882b9, "pci_request_regions" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf7dca34a, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6ff183d, "pci_unregister_driver" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x7b2eadf1, "pci_read_config_dword" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x606b7e51, "put_device" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0x314dd00c, "bus_unregister" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9d64f128, "pci_read_config_word" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x99d342df, "pci_iounmap" },
	{ 0x11089ac7, "_ctype" },
	{ 0x4c74bd14, "device_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe5f5e507, "pci_set_master" },
	{ 0x9f60fea7, "_dev_emerg" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaf68e356, "pci_release_regions" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe82d68c3, "pci_disable_device" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x60353383, "pci_write_config_word" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x24a061ef, "driver_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x28bea751, "pci_write_config_dword" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0xeb280106, "bus_register" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00004301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014A4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004328sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004329sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004351sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "307B8EC3ADE8E1EC185AED5");
