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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x68c4428a, "__nlmsg_put" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd3466231, "can_rx_unregister" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x4829a47e, "memcpy" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9716a32f, "netlink_capable" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0x39aab161, "can_send" },
	{ 0xd9ff8e23, "__dev_get_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0xb310efd8, "nla_put" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4a56124e, "rtnl_register_module" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xdcb764ad, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x1f1bbd31, "skb_copy" },
	{ 0x461c9d06, "skb_clone" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0xf979b3c3, "can_rx_register" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "7515C573507ED23B5EB5BCC");
