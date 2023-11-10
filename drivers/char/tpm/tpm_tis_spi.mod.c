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
	{ 0x925c88ff, "spi_bus_unlock" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x185e9f15, "spi_get_device_id" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf7178096, "spi_bus_lock" },
	{ 0xea304e7b, "tpm_chip_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x370c0fd8, "tpm_tis_remove" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x4a647f29, "tpm_tis_core_init" },
	{ 0x17df0a79, "spi_sync_locked" },
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "tpm,tpm_tis_core");

MODULE_ALIAS("acpi*:SMO0768:*");
MODULE_ALIAS("spi:st33htpm-spi");
MODULE_ALIAS("spi:slb9670");
MODULE_ALIAS("spi:tpm_tis_spi");
MODULE_ALIAS("spi:tpm_tis-spi");
MODULE_ALIAS("spi:cr50");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spi");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spiC*");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670C*");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spi");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spiC*");
MODULE_ALIAS("of:N*T*Cgoogle,cr50");
MODULE_ALIAS("of:N*T*Cgoogle,cr50C*");

MODULE_INFO(srcversion, "5886037D20A605BD982F944");
