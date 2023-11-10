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

SYMBOL_CRC(rndis_borrow_net, 0x10c9120d, "_gpl");
SYMBOL_CRC(rndis_signal_connect, 0xdab8f0fd, "_gpl");
SYMBOL_CRC(rndis_signal_disconnect, 0x36c47f71, "_gpl");
SYMBOL_CRC(rndis_uninit, 0x5b02abf4, "_gpl");
SYMBOL_CRC(rndis_set_host_mac, 0xb77d9298, "_gpl");
SYMBOL_CRC(rndis_msg_parser, 0x6cf11107, "_gpl");
SYMBOL_CRC(rndis_register, 0xfeb699bf, "_gpl");
SYMBOL_CRC(rndis_deregister, 0xf299f80a, "_gpl");
SYMBOL_CRC(rndis_set_param_dev, 0x8ffc3186, "_gpl");
SYMBOL_CRC(rndis_set_param_vendor, 0x31c794b6, "_gpl");
SYMBOL_CRC(rndis_set_param_medium, 0xf487f418, "_gpl");
SYMBOL_CRC(rndis_add_hdr, 0xd0299ae5, "_gpl");
SYMBOL_CRC(rndis_free_response, 0x22735b3d, "_gpl");
SYMBOL_CRC(rndis_get_next_response, 0xb5473a53, "_gpl");
SYMBOL_CRC(rndis_rm_hdr, 0x0b5a6bbf, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc859660a, "dev_get_stats" },
	{ 0xcc0e3c61, "usb_os_desc_prepare_interf_dir" },
	{ 0x972a3723, "consume_skb" },
	{ 0x14050dae, "usb_interface_id" },
	{ 0x3194eb2f, "usb_assign_descriptors" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4cf63ffe, "gether_disconnect" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0xb313877b, "config_ep_by_speed" },
	{ 0x30b59f75, "gether_set_dev_addr" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa8a54274, "gether_register_netdev" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x829925fd, "usb_function_register" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x121445a5, "skb_pull" },
	{ 0x941d2d0b, "gether_get_host_addr_u8" },
	{ 0xae6b27b8, "gether_set_qmult" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0x9a2e7fd1, "gether_get_host_addr" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x620f92d7, "gether_set_gadget" },
	{ 0xffb7c514, "ida_free" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x3389d953, "usb_ep_autoconfig" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x68e6942f, "usb_put_function_instance" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0xa54af244, "gether_connect" },
	{ 0xdcb764ad, "memset" },
	{ 0xe315f00e, "gether_get_dev_addr" },
	{ 0x5f7e3ec1, "gether_set_host_addr" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x4125292c, "usb_function_unregister" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x260f4559, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x1495ce39, "gether_get_ifname" },
	{ 0x36ee7434, "gether_set_ifname" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6fb9dffc, "gether_setup_name_default" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc1aeed8c, "gether_get_qmult" },
	{ 0x98cf60b3, "strlen" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8212fa83, "usb_free_all_descriptors" },
	{ 0xd143eaea, "usb_gstrings_attach" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,u_ether");


MODULE_INFO(srcversion, "1DF8CC173CC85EDF7CB3EA0");
