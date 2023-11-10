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
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0xa28684c3, "register_netdev" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3f4db9e3, "register_qdisc" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2a57b2cc, "qdisc_reset" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd0d086e2, "unregister_qdisc" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xde7f3e4b, "noop_qdisc" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x806f7faf, "softnet_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa41fac68, "neigh_lookup" },
	{ 0x4829a47e, "memcpy" },
	{ 0x13b2ca70, "neigh_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd2ff8867, "__neigh_create" },
	{ 0x73344a58, "__neigh_event_send" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x972a3723, "consume_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C63E4FC6B1C04542DE23D79");
