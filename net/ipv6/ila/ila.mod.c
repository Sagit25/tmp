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
	{ 0xcc8d633b, "__do_once_done" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xa8b72897, "xfrm_lookup" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0xe5cc397c, "inet_proto_csum_replace_by_diff" },
	{ 0x942352e7, "genlmsg_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe8fbf4fa, "__alloc_bucket_spinlocks" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x70f3cde3, "nf_register_net_hooks" },
	{ 0x406c341, "ip6_route_output_flags" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x8162c74, "free_bucket_spinlocks" },
	{ 0x24462807, "dst_cache_get" },
	{ 0xb310efd8, "nla_put" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x30ccd6e, "nf_unregister_net_hooks" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x5d2aa5fb, "rhashtable_walk_peek" },
	{ 0x7f6cee89, "rhashtable_free_and_destroy" },
	{ 0xdcb764ad, "memset" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x34bdcbc0, "lwtunnel_state_alloc" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xc665dd55, "dst_cache_set_ip6" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xfc2bbbe6, "genl_unregister_family" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xd63afe2c, "lwtunnel_encap_add_ops" },
	{ 0xa67cd91b, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0x73820201, "register_pernet_device" },
	{ 0xfcb4f53d, "lwtunnel_encap_del_ops" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "C6EA942DD5AE6392F323D33");
