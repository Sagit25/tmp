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
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6726af2d, "__seq_open_private" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xab93c2ef, "seq_putc" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x671f94f3, "xt_register_matches" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xeb7d9700, "xt_unregister_matches" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa48f9eb7, "proc_mkdir" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xcc8d633b, "__do_once_done" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xe914e41e, "strcpy" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0x893abd4a, "make_kuid" },
	{ 0xc6300f56, "make_kgid" },
	{ 0x6612133d, "proc_create_data" },
	{ 0x2929e43, "proc_set_user" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4841bdee, "strnchr" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x655cade0, "seq_lseek" },
	{ 0x57bdb657, "seq_release_private" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "7B5E4592A1EACD55A00FB6C");
