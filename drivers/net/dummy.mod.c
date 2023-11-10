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
	{ 0xdd64e639, "strscpy" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x21887833, "dev_lstats_read" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x565f18, "pernet_ops_rwsem" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7f5e91c1, "__rtnl_link_register" },
	{ 0xb8904550, "__rtnl_link_unregister" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xce807a25, "up_write" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0x56962cfc, "ether_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x82d27d3f, "skb_clone_tx_timestamp" },
	{ 0x972a3723, "consume_skb" },
	{ 0x7eee524d, "skb_tstamp_tx" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x6a528adb, "ethtool_op_get_ts_info" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "90418061734B0D55D695E8D");
