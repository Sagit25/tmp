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
	{ 0x4caa31be, "nft_register_expr" },
	{ 0x38745ba5, "nft_register_obj" },
	{ 0xaa4c18e5, "nft_unregister_expr" },
	{ 0x34486e6a, "metadata_dst_free" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x6c776b26, "nft_reg_track_update" },
	{ 0xb310efd8, "nla_put" },
	{ 0x4a5a1bc, "nft_dump_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd5262ee8, "nft_parse_register_store" },
	{ 0xa4ee8d41, "nft_unregister_obj" },
	{ 0xdcb764ad, "memset" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x933dc050, "__nla_validate" },
	{ 0x4829a47e, "memcpy" },
	{ 0x17a2bdf2, "metadata_dst_alloc" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "2F5EE05C70309E5AD001723");
