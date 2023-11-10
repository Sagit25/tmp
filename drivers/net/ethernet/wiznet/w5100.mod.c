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

SYMBOL_CRC(w5100_ops_priv, 0x20d4f3f1, "_gpl");
SYMBOL_CRC(w5100_probe, 0xaa1e2af9, "_gpl");
SYMBOL_CRC(w5100_remove, 0xb390d486, "_gpl");
SYMBOL_CRC(w5100_pm_ops, 0x6bdba0d3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0x7abd989d, "gpiod_get_raw_value" },
	{ 0xdd64e639, "strscpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xc226ac1b, "devm_platform_get_and_ioremap_resource" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x62f52652, "napi_schedule_prep" },
	{ 0x61c4754b, "__napi_schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x972a3723, "consume_skb" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x52238ddf, "napi_enable" },
	{ 0x1777343a, "napi_disable" },
	{ 0xbbfe0f97, "netif_receive_skb" },
	{ 0x2a306880, "napi_complete_done" },
	{ 0x20e19a6e, "alloc_etherdev_mqs" },
	{ 0x4fffca41, "free_netdev" },
	{ 0xa719442, "netif_napi_add_weight" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x349cba85, "strchr" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x23912872, "platform_get_resource" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D7A57ADA524266AD08793DA");
