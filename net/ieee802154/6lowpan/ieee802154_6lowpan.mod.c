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
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x48471741, "skb_put" },
	{ 0x7c85e954, "register_net_sysctl" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x972a3723, "consume_skb" },
	{ 0xc0bec8ef, "dev_add_pack" },
	{ 0x474db33c, "inet_frag_queue_insert" },
	{ 0xb2b44323, "inet_frags_init" },
	{ 0xa3abcace, "lowpan_register_netdevice" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xaba37611, "ieee802154_hdr_peek_addrs" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x87b209c5, "lowpan_unregister_netdevice" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x92997ed8, "_printk" },
	{ 0x81c464f7, "inet_frag_destroy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x66a49ce0, "inet_frag_reasm_finish" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xa91d6818, "skb_copy_expand" },
	{ 0xb98aabd5, "fqdir_init" },
	{ 0x87b59916, "lowpan_header_decompress" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0x459e03b6, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0x524e3b9f, "nd_tbl" },
	{ 0xa07afb40, "dev_remove_pack" },
	{ 0x41f9298d, "dev_get_by_index" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x2958d521, "ieee802154_hdr_peek" },
	{ 0xff33606d, "inet_frags_fini" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xdcb764ad, "memset" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x140038db, "inet_frag_reasm_prepare" },
	{ 0x4adc73f9, "inet_frag_find" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe979df65, "fqdir_exit" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0x13b2ca70, "neigh_destroy" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9015f570, "lowpan_header_compress" },
	{ 0x1f1bbd31, "skb_copy" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4cc2d65a, "inet_frag_kill" },
	{ 0xa41fac68, "neigh_lookup" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ieee802154,6lowpan,ipv6");


MODULE_INFO(srcversion, "9F4EEBD9E3290671C5E1E01");
