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
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x5338184f, "ethtool_sprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x972a3723, "consume_skb" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x11fe2f4d, "netif_tx_stop_all_queues" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0x565f18, "pernet_ops_rwsem" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7f5e91c1, "__rtnl_link_register" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0x4fffca41, "free_netdev" },
	{ 0xb8904550, "__rtnl_link_unregister" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xce807a25, "up_write" },
	{ 0x56962cfc, "ether_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb25dc613, "dev_get_by_index_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf0f9eba2, "skb_pull_rcsum" },
	{ 0xbbfe0f97, "netif_receive_skb" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F0C264AFDDB0A0909036010");
