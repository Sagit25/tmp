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

SYMBOL_CRC(ahci_ignore_sss, 0xea50dad3, "_gpl");
SYMBOL_CRC(ahci_shost_groups, 0xef74b2b7, "_gpl");
SYMBOL_CRC(ahci_sdev_groups, 0x55fc78eb, "_gpl");
SYMBOL_CRC(ahci_ops, 0xcb40c7be, "_gpl");
SYMBOL_CRC(ahci_pmp_retry_srst_ops, 0x0df4a7c3, "_gpl");
SYMBOL_CRC(ahci_save_initial_config, 0xdfc5d463, "_gpl");
SYMBOL_CRC(ahci_start_engine, 0xe4fb36b4, "_gpl");
SYMBOL_CRC(ahci_stop_engine, 0x8c69f969, "_gpl");
SYMBOL_CRC(ahci_start_fis_rx, 0x4c2bad6a, "_gpl");
SYMBOL_CRC(ahci_reset_controller, 0x44493619, "_gpl");
SYMBOL_CRC(ahci_reset_em, 0x309337ba, "_gpl");
SYMBOL_CRC(ahci_init_controller, 0x2ba16883, "_gpl");
SYMBOL_CRC(ahci_dev_classify, 0x5abd6bea, "_gpl");
SYMBOL_CRC(ahci_fill_cmd_slot, 0x421fdb12, "_gpl");
SYMBOL_CRC(ahci_kick_engine, 0xf720ac0d, "_gpl");
SYMBOL_CRC(ahci_check_ready, 0xebca0e61, "_gpl");
SYMBOL_CRC(ahci_do_softreset, 0xa501f109, "_gpl");
SYMBOL_CRC(ahci_do_hardreset, 0x71365de6, "_gpl");
SYMBOL_CRC(ahci_handle_port_intr, 0x02171a5e, "_gpl");
SYMBOL_CRC(ahci_qc_issue, 0x83fbd8bc, "_gpl");
SYMBOL_CRC(ahci_error_handler, 0xec9e8ab9, "_gpl");
SYMBOL_CRC(ahci_port_resume, 0x8d8fe5a9, "_gpl");
SYMBOL_CRC(ahci_print_info, 0x8a3cdda5, "_gpl");
SYMBOL_CRC(ahci_set_em_messages, 0x6839c242, "_gpl");
SYMBOL_CRC(ahci_host_activate, 0x142ce1e2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7a62ec56, "ata_link_next" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xa4c085f8, "ata_tf_from_fis" },
	{ 0x6d63fdfa, "ata_std_qc_defer" },
	{ 0x5ff532a4, "sata_pmp_qc_defer_cmd_switch" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x96df956b, "sata_pmp_error_handler" },
	{ 0x411805d4, "ata_host_start" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x2a0c7e30, "ata_port_desc" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xaa7e90dc, "ata_host_register" },
	{ 0xa96b92c, "ata_host_activate" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xdf0c757f, "ata_tf_to_fis" },
	{ 0x4829a47e, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xd5beaa70, "ata_port_classify" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x4f956861, "sata_link_hardreset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2bbf7f43, "ata_std_postreset" },
	{ 0x8e96a8ff, "ata_wait_register" },
	{ 0x9e22533c, "ata_dev_set_feature" },
	{ 0xe21d706d, "ata_dummy_port_ops" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x68940ec0, "ata_port_freeze" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4a9a9a36, "ata_msleep" },
	{ 0x2efb7987, "ata_wait_after_reset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb8bfbdd2, "sata_link_scr_lpm" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xc9251010, "dmam_alloc_attrs" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0xdac9d476, "sata_lpm_ignore_phy_events" },
	{ 0xd17ac8d0, "sata_async_notification" },
	{ 0xc7206177, "ata_qc_complete_multiple" },
	{ 0xb532b30b, "ata_ehi_clear_desc" },
	{ 0xf6260339, "ata_ehi_push_desc" },
	{ 0xfb53bb92, "ata_link_abort" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xce9af5a, "ata_port_abort" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2d6186e9, "sata_pmp_port_ops" },
	{ 0xf9ae3d0c, "dev_attr_sw_activity" },
	{ 0x70333012, "dev_attr_unload_heads" },
	{ 0xc2351dd5, "dev_attr_ncq_prio_supported" },
	{ 0xf0caba4d, "dev_attr_ncq_prio_enable" },
	{ 0xb51b8a22, "dev_attr_link_power_management_policy" },
	{ 0x28e97d9e, "dev_attr_em_message_type" },
	{ 0xeb531bb1, "dev_attr_em_message" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libata");


MODULE_INFO(srcversion, "3B5EB65073D4F0CC9EBBB5E");
