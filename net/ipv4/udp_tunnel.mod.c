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

SYMBOL_CRC(udp_sock_create4, 0x022ee06e, "");
SYMBOL_CRC(setup_udp_tunnel_sock, 0x545b5c4b, "_gpl");
SYMBOL_CRC(udp_tunnel_push_rx_port, 0x4b97c0c0, "_gpl");
SYMBOL_CRC(udp_tunnel_drop_rx_port, 0x0454d997, "_gpl");
SYMBOL_CRC(udp_tunnel_notify_add_rx_port, 0x19ccb9d9, "_gpl");
SYMBOL_CRC(udp_tunnel_notify_del_rx_port, 0x8e89396a, "_gpl");
SYMBOL_CRC(udp_tunnel_xmit_skb, 0x8b429f1c, "_gpl");
SYMBOL_CRC(udp_tunnel_sock_release, 0x40eaee96, "_gpl");
SYMBOL_CRC(udp_tun_rx_dst, 0x50118dad, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf347a9fb, "kernel_bind" },
	{ 0xcb6dba5a, "udp_set_csum" },
	{ 0x37a0cba, "kfree" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xcd8dbb04, "udp_tunnel_nic_ops" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x68227490, "ipv6_stub" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0xc5a81d59, "kernel_sock_shutdown" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x148cac2e, "iptunnel_xmit" },
	{ 0xb310efd8, "nla_put" },
	{ 0x265aa3d5, "kernel_connect" },
	{ 0xdcb764ad, "memset" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xdd65439c, "sock_create_kern" },
	{ 0xea7c6efb, "call_netdevice_notifiers" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x17a2bdf2, "metadata_dst_alloc" },
	{ 0xacaa2c9e, "sock_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xddc7b3cb, "sock_bindtoindex" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x349cba85, "strchr" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7701D8237014414E0F18168");
