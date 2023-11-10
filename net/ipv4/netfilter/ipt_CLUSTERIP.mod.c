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
	{ 0x35a2d146, "xt_register_target" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x25b24455, "xt_unregister_target" },
	{ 0x92997ed8, "_printk" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x37a0cba, "kfree" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xab93c2ef, "seq_putc" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa8862a9e, "dev_get_by_name" },
	{ 0x5006b765, "dev_mc_del" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x905bb457, "seq_open" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5da0a311, "proc_remove" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa48f9eb7, "proc_mkdir" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x2ff26957, "dev_mc_add" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xb9c50ffb, "seq_release" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x50034e1a, "nf_ct_netns_put" },
	{ 0x41165dd5, "nf_unregister_net_hook" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe914e41e, "strcpy" },
	{ 0xbad2fa73, "nf_ct_netns_get" },
	{ 0x638defdb, "nf_register_net_hook" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6612133d, "proc_create_data" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "5699A0A3EBABF95B82A4293");
