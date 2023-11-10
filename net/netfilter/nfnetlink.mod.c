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

SYMBOL_CRC(nfnl_lock, 0x5ce3b588, "_gpl");
SYMBOL_CRC(nfnl_unlock, 0xdb065657, "_gpl");
SYMBOL_CRC(nfnetlink_subsys_register, 0x8ae85b79, "_gpl");
SYMBOL_CRC(nfnetlink_subsys_unregister, 0xbda4f245, "_gpl");
SYMBOL_CRC(nfnetlink_has_listeners, 0xa22fa941, "_gpl");
SYMBOL_CRC(nfnetlink_send, 0x68619569, "_gpl");
SYMBOL_CRC(nfnetlink_set_err, 0xc391f8ec, "_gpl");
SYMBOL_CRC(nfnetlink_unicast, 0xd3c6d6dc, "_gpl");
SYMBOL_CRC(nfnetlink_broadcast, 0x73715f3b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x19f33626, "nf_ctnetlink_has_listener" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe4ee67bf, "netlink_kernel_release" },
	{ 0xaed08c5d, "netlink_has_listeners" },
	{ 0xc62b1ca5, "netlink_set_err" },
	{ 0xe739bb49, "netlink_broadcast" },
	{ 0x47a60a26, "nlmsg_notify" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0xb5624d5c, "__netlink_kernel_create" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x461c9d06, "skb_clone" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x1425e33, "try_module_get" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xdcb764ad, "memset" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x72bff0c9, "netlink_ack" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xcc793c4a, "module_put" },
	{ 0x121445a5, "skb_pull" },
	{ 0x729ae44d, "netlink_net_capable" },
	{ 0xa0b08ae9, "netlink_rcv_skb" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F288615435849546E2E38A4");
