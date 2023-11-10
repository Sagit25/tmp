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
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4caa31be, "nft_register_expr" },
	{ 0x8ae85b79, "nfnetlink_subsys_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xaa4c18e5, "nft_unregister_expr" },
	{ 0xcc793c4a, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbda4f245, "nfnetlink_subsys_unregister" },
	{ 0xec6d9454, "nla_reserve" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x3251d762, "nf_tables_trans_destroy_flush_work" },
	{ 0x9136d943, "xt_check_match" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb8484da6, "xt_check_target" },
	{ 0xf8b338ec, "nft_request_module" },
	{ 0x1425e33, "try_module_get" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x68c4428a, "__nlmsg_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb310efd8, "nla_put" },
	{ 0xd3c6d6dc, "nfnetlink_unicast" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x3b120932, "xt_request_find_target" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x59030f59, "xt_request_find_match" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nfnetlink,x_tables");


MODULE_INFO(srcversion, "932845B6241131C55E31D99");
