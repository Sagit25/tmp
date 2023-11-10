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
	{ 0x671f94f3, "xt_register_matches" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x92997ed8, "_printk" },
	{ 0xeb7d9700, "xt_unregister_matches" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x999e8297, "vfree" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0xa48f9eb7, "proc_mkdir" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x442817f, "proc_create_seq_private" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8d4220e0, "ipv6_skip_exthdr" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "1B252D4060FF09CC633A32A");
