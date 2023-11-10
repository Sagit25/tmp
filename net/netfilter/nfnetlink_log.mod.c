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
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x8ae85b79, "nfnetlink_subsys_register" },
	{ 0xcaeb9ca6, "nf_log_register" },
	{ 0xbda4f245, "nfnetlink_subsys_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xa5c7cfeb, "nf_log_unregister" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc793c4a, "module_put" },
	{ 0x5285ddb1, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x68c4428a, "__nlmsg_put" },
	{ 0xd3c6d6dc, "nfnetlink_unicast" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0x1829cbfd, "nf_log_unset" },
	{ 0xdcb764ad, "memset" },
	{ 0xc5b3969b, "proc_create_net_data" },
	{ 0x893abd4a, "make_kuid" },
	{ 0xc6300f56, "make_kgid" },
	{ 0x2929e43, "proc_set_user" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x30a2aae6, "nfnl_ct_hook" },
	{ 0xb1608a1c, "nf_log_unbind_pf" },
	{ 0x47f7dd3b, "nf_log_bind_pf" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x1425e33, "try_module_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb310efd8, "nla_put" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x391df80a, "netstamp_needed_key" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x4afd9810, "from_kuid_munged" },
	{ 0x9960cce1, "from_kgid_munged" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "28F9CE1F9898A1D67C425A1");
