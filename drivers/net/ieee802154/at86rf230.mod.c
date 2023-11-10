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
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x25b71966, "spi_async" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9eaa32f5, "ieee802154_xmit_complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x2259bcba, "ieee802154_xmit_error" },
	{ 0x8bd0d69c, "ieee802154_xmit_hw_error" },
	{ 0xa6257a2f, "complete" },
	{ 0xdcb764ad, "memset" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0x74c6acc3, "ieee802154_rx_irqsafe" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0x86bd853, "gpiod_set_raw_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xe0ad5f55, "ieee802154_unregister_hw" },
	{ 0x6f99f74e, "ieee802154_free_hw" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xb82fe302, "of_get_named_gpio_flags" },
	{ 0x1196dca3, "of_property_read_variable_u8_array" },
	{ 0x38a174e1, "ieee802154_alloc_hw" },
	{ 0x7c32e51c, "__devm_regmap_init_spi" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x72e8b87d, "irq_get_irq_data" },
	{ 0xac095dce, "devm_gpio_request_one" },
	{ 0x17a65868, "gpiod_set_raw_value_cansleep" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xd4e40781, "ieee802154_register_hw" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230");
MODULE_ALIAS("of:N*T*Catmel,at86rf230C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231");
MODULE_ALIAS("of:N*T*Catmel,at86rf231C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233");
MODULE_ALIAS("of:N*T*Catmel,at86rf233C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf212C*");

MODULE_INFO(srcversion, "FE6DB58863FFFFD54D17AD9");
