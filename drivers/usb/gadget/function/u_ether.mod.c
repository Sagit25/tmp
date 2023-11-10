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

SYMBOL_CRC(gether_setup_name, 0xa60053fb, "_gpl");
SYMBOL_CRC(gether_setup_name_default, 0x6fb9dffc, "_gpl");
SYMBOL_CRC(gether_register_netdev, 0xa8a54274, "_gpl");
SYMBOL_CRC(gether_set_gadget, 0x620f92d7, "_gpl");
SYMBOL_CRC(gether_set_dev_addr, 0x30b59f75, "_gpl");
SYMBOL_CRC(gether_get_dev_addr, 0xe315f00e, "_gpl");
SYMBOL_CRC(gether_set_host_addr, 0x5f7e3ec1, "_gpl");
SYMBOL_CRC(gether_get_host_addr, 0x9a2e7fd1, "_gpl");
SYMBOL_CRC(gether_get_host_addr_cdc, 0xb6076024, "_gpl");
SYMBOL_CRC(gether_get_host_addr_u8, 0x941d2d0b, "_gpl");
SYMBOL_CRC(gether_set_qmult, 0xae6b27b8, "_gpl");
SYMBOL_CRC(gether_get_qmult, 0xc1aeed8c, "_gpl");
SYMBOL_CRC(gether_get_ifname, 0x1495ce39, "_gpl");
SYMBOL_CRC(gether_set_ifname, 0x36ee7434, "_gpl");
SYMBOL_CRC(gether_cleanup, 0x8878cfa6, "_gpl");
SYMBOL_CRC(gether_connect, 0xa54af244, "_gpl");
SYMBOL_CRC(gether_disconnect, 0x4cf63ffe, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x92997ed8, "_printk" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x11089ac7, "_ctype" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x349cba85, "strchr" },
	{ 0x96848186, "scnprintf" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x9166fada, "strncpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0x48471741, "skb_put" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x20e19a6e, "alloc_etherdev_mqs" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x8932f5b, "ethtool_op_get_link" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8BD9F41557CDDD6E9E5E51C");
