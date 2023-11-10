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
	{ 0x459e03b6, "init_net" },
	{ 0x442817f, "proc_create_seq_private" },
	{ 0x92997ed8, "_printk" },
	{ 0xc0bec8ef, "dev_add_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xcd02e645, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xdcebe45, "seq_puts" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x121445a5, "skb_pull" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x972a3723, "consume_skb" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x43e492e8, "ax25_ip_xmit" },
	{ 0xa07afb40, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0xdcb764ad, "memset" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x5a921311, "strncmp" },
	{ 0x1cdbdf56, "dev_close" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "0560BEB26E6B5C805086E0C");
