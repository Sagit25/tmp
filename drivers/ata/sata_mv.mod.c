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
	{ 0x90e0ae9a, "__pci_register_driver" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x6ff183d, "pci_unregister_driver" },
	{ 0x85ea7787, "ata_host_detach" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xc1bb5a7d, "phy_power_off" },
	{ 0x92997ed8, "_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8bc86f1a, "ata_eh_analyze_ncq_error" },
	{ 0x68940ec0, "ata_port_freeze" },
	{ 0x96df956b, "sata_pmp_error_handler" },
	{ 0x260b94f0, "dmam_pool_create" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x7b2eadf1, "pci_read_config_dword" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x96848186, "scnprintf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x185afc0, "ata_sff_dma_pause" },
	{ 0xc704686a, "ata_qc_get_active" },
	{ 0xc7206177, "ata_qc_complete_multiple" },
	{ 0x28f94bc6, "sata_std_hardreset" },
	{ 0xb9e00abd, "ata_sff_softreset" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xcd1f531e, "_dev_alert" },
	{ 0x23912872, "platform_get_resource" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x20af50d6, "irq_of_parse_and_map" },
	{ 0x331ae50a, "ata_host_alloc_pinfo" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x21e6b37b, "devm_ioremap" },
	{ 0xceff4ec8, "clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbcefe36d, "devm_phy_optional_get" },
	{ 0xab03a9c3, "phy_power_on" },
	{ 0x815588a6, "clk_enable" },
	{ 0xadf81dad, "ata_print_version" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0x7a6ffa02, "of_device_is_compatible" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xa96b92c, "ata_host_activate" },
	{ 0xfcbcca79, "_dev_notice" },
	{ 0x787a7e9e, "pcim_enable_device" },
	{ 0xa8a4db07, "pcim_iomap_regions" },
	{ 0x477f777b, "pcim_iomap_table" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0x81d86326, "ata_port_pbar_desc" },
	{ 0x7f5a34d8, "pci_read_config_byte" },
	{ 0xe5f5e507, "pci_set_master" },
	{ 0xd3165142, "pci_try_set_mwi" },
	{ 0x6aabd150, "pcim_pin_device" },
	{ 0x6b48c83c, "pci_enable_msi" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0x4f956861, "sata_link_hardreset" },
	{ 0x1c52a402, "sata_scr_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x360c9934, "ata_bmdma_qc_issue" },
	{ 0xdf0c757f, "ata_tf_to_fis" },
	{ 0x81fa361e, "ata_sff_queue_pio_task" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0xb532b30b, "ata_ehi_clear_desc" },
	{ 0xf6260339, "ata_ehi_push_desc" },
	{ 0xfb53bb92, "ata_link_abort" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3b5ba62c, "sata_scr_write_flush" },
	{ 0xc4ece2ee, "ata_bmdma_port_intr" },
	{ 0x3412630, "ata_link_offline" },
	{ 0xce9af5a, "ata_port_abort" },
	{ 0xd17ac8d0, "sata_async_notification" },
	{ 0x6a5055cb, "ata_pci_remove_one" },
	{ 0xb733db56, "ata_scsi_queuecmd" },
	{ 0xa408b6ea, "ata_scsi_ioctl" },
	{ 0xcf304d83, "ata_scsi_slave_alloc" },
	{ 0x667520f6, "ata_scsi_slave_config" },
	{ 0xe6ee2b6, "ata_scsi_slave_destroy" },
	{ 0xbc1ab89, "ata_scsi_change_queue_depth" },
	{ 0x43d4f30e, "ata_scsi_dma_need_drain" },
	{ 0x8098920c, "ata_std_bios_param" },
	{ 0xcc65eb56, "ata_scsi_unlock_native_capacity" },
	{ 0x411f4858, "ata_ncq_sdev_groups" },
	{ 0x54312341, "ata_common_sdev_groups" },
	{ 0xaf49e716, "ata_bmdma_port_ops" },
	{ 0x1c856180, "ata_sff_port_ops" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libata");

MODULE_ALIAS("of:N*T*Cmarvell,armada-370-sata");
MODULE_ALIAS("of:N*T*Cmarvell,armada-370-sataC*");
MODULE_ALIAS("of:N*T*Cmarvell,orion-sata");
MODULE_ALIAS("of:N*T*Cmarvell,orion-sataC*");
MODULE_ALIAS("pci:v000011ABd00005040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001742sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000241sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000243sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00007042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E1B04185E64C85A68E37095");
