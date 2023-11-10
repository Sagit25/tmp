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
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe0ad5f55, "ieee802154_unregister_hw" },
	{ 0x6f99f74e, "ieee802154_free_hw" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa6257a2f, "complete" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb82fe302, "of_get_named_gpio_flags" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0x7abd989d, "gpiod_get_raw_value" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0x74c6acc3, "ieee802154_rx_irqsafe" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xac095dce, "devm_gpio_request_one" },
	{ 0x86bd853, "gpiod_set_raw_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x38a174e1, "ieee802154_alloc_hw" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xd4e40781, "ieee802154_register_hw" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mac802154,crc-ccitt");

MODULE_ALIAS("of:N*T*Cti,cc2520");
MODULE_ALIAS("of:N*T*Cti,cc2520C*");
MODULE_ALIAS("spi:cc2520");

MODULE_INFO(srcversion, "E49D131549B27FB6D12F815");
