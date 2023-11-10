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
	{ 0x4f728697, "ip_set_type_register" },
	{ 0xb310efd8, "nla_put" },
	{ 0xe4f90a4f, "ip_set_put_flags" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9238b674, "ip_set_get_extensions" },
	{ 0xf51251af, "ip_set_get_ip6_port" },
	{ 0x1f844245, "ip_set_get_ip4_port" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe4966611, "ip_set_type_unregister" },
	{ 0x65eef819, "ip_set_elem_len" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x397f6231, "ip_set_free" },
	{ 0x15148ab1, "ip_set_match_extensions" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xae3e1af1, "ip_set_init_comment" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x489e72b9, "ip_set_extensions" },
	{ 0xdcb764ad, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xdc8cb352, "ip_set_put_extensions" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "289C03BBC65288F5780DCDA");
