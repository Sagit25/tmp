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
	{ 0xe4702cce, "l2tp_nl_register_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x56962cfc, "ether_setup" },
	{ 0x10102b47, "l2tp_xmit_skb" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xcc793c4a, "module_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9deb4f8b, "dev_forward_skb" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x1e8235eb, "__skb_ext_del" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdd64e639, "strscpy" },
	{ 0x9e3e6dd6, "l2tp_session_create" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0xccfa3bdf, "kernel_sock_ip_overhead" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x4f473a34, "l2tp_session_inc_refcount" },
	{ 0xe00a536f, "l2tp_session_register" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0xd53ffcf, "l2tp_session_dec_refcount" },
	{ 0x9303f7be, "__module_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x64c75ccd, "l2tp_session_delete" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "E628E5395144AF77318C154");
