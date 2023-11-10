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

SYMBOL_CRC(dw_spi_set_cs, 0xde819213, "_gpl");
SYMBOL_CRC(dw_spi_check_status, 0x17582936, "_gpl");
SYMBOL_CRC(dw_spi_update_config, 0x1f4ee5c7, "_gpl");
SYMBOL_CRC(dw_spi_add_host, 0xf3c7e422, "_gpl");
SYMBOL_CRC(dw_spi_remove_host, 0xd3606dba, "_gpl");
SYMBOL_CRC(dw_spi_suspend_host, 0xd5d3e604, "_gpl");
SYMBOL_CRC(dw_spi_resume_host, 0xabdc2622, "_gpl");
SYMBOL_CRC(dw_spi_dma_setup_mfld, 0xe24eeb91, "_gpl");
SYMBOL_CRC(dw_spi_dma_setup_generic, 0xb6df0cae, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc1514a3b, "free_irq" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x66389a76, "spi_controller_resume" },
	{ 0xec89460b, "spi_controller_suspend" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x1d76418, "pci_dev_put" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x7d6be642, "pci_get_device" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x48f383c2, "dma_release_channel" },
	{ 0x21fc1509, "spi_delay_exec" },
	{ 0x10d31101, "spi_finalize_current_transfer" },
	{ 0xe9e50be8, "__dma_request_channel" },
	{ 0xa510e5d3, "device_set_node" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x606b7e51, "put_device" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x14a5f266, "dma_get_slave_caps" },
	{ 0x129d08e7, "debugfs_create_regset32" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x11215294, "spi_unregister_controller" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xaf8c45f8, "dma_request_chan" },
	{ 0x1b8e8925, "__spi_alloc_controller" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xe7c86e53, "spi_mem_default_supports_op" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x8d851140, "spi_register_controller" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4F56D292AB624973C0235D6");
