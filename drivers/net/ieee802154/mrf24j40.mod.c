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
	{ 0xe0ad5f55, "ieee802154_unregister_hw" },
	{ 0x6f99f74e, "ieee802154_free_hw" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x25b71966, "spi_async" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x8b65f896, "spi_write_then_read" },
	{ 0xdcb764ad, "memset" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x92997ed8, "_printk" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x9eaa32f5, "ieee802154_xmit_complete" },
	{ 0x80096ccc, "regmap_write_async" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0x74c6acc3, "ieee802154_rx_irqsafe" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x38a174e1, "ieee802154_alloc_hw" },
	{ 0x7c32e51c, "__devm_regmap_init_spi" },
	{ 0x45e6bd64, "__devm_regmap_init" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x185e9f15, "spi_get_device_id" },
	{ 0x72e8b87d, "irq_get_irq_data" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xd4e40781, "ieee802154_register_hw" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:mrf24j40");
MODULE_ALIAS("spi:mrf24j40ma");
MODULE_ALIAS("spi:mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40ma");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40maC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mcC*");

MODULE_INFO(srcversion, "168C2013C601BFBBAB525F8");
