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
	{ 0xcaeb9ca6, "nf_log_register" },
	{ 0xa5c7cfeb, "nf_log_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x1829cbfd, "nf_log_unset" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0x4afd9810, "from_kuid_munged" },
	{ 0x9960cce1, "from_kgid_munged" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x92020049, "nf_log_set" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x459e03b6, "init_net" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EE7D0B344F607F323FBE3AB");
