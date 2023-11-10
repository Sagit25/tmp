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
	{ 0x7c85e954, "register_net_sysctl" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x574e8796, "br_handle_frame_finish" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1e8235eb, "__skb_ext_del" },
	{ 0x37b6ac09, "nf_br_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x50f1d92d, "ip_route_output_flow" },
	{ 0xf0f9eba2, "skb_pull_rcsum" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x70f3cde3, "nf_register_net_hooks" },
	{ 0x2d8a8447, "nf_ipv6_ops" },
	{ 0x39f35a13, "ip_route_input_noref" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x66c372fd, "br_forward_finish" },
	{ 0x459e03b6, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x30ccd6e, "nf_unregister_net_hooks" },
	{ 0x648961da, "br_dev_queue_push_xmit" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xdcb764ad, "memset" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xabe18ee5, "nf_hook_slow" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd83898d5, "nf_hooks_needed" },
	{ 0x13b2ca70, "neigh_destroy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe3eaf022, "__vlan_find_dev_deep_rcu" },
	{ 0x6a29aec0, "dst_release" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xf0ae6199, "ip_do_fragment" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x947a1830, "skb_ext_add" },
	{ 0x38947782, "pskb_trim_rcsum_slow" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bridge,ipv6");


MODULE_INFO(srcversion, "55D56A36C61E2511E416D63");
