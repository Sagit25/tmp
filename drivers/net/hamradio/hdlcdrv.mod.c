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

SYMBOL_CRC(hdlcdrv_receiver, 0x78487f68, "");
SYMBOL_CRC(hdlcdrv_transmitter, 0x962ef0e1, "");
SYMBOL_CRC(hdlcdrv_arbitrate, 0x9591d02c, "");
SYMBOL_CRC(hdlcdrv_register, 0xd08ae92c, "");
SYMBOL_CRC(hdlcdrv_unregister, 0xd4bdbe5d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x4fffca41, "free_netdev" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xcd02e645, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x96267f10, "__dev_kfree_skb_irq" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4829a47e, "memcpy" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x972a3723, "consume_skb" },
	{ 0x43e492e8, "ax25_ip_xmit" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ax25,crc-ccitt");


MODULE_INFO(srcversion, "4719F4229627E6C4284A201");
