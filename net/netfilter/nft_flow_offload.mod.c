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
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4caa31be, "nft_register_expr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xae47eb8d, "nft_chain_validate_hooks" },
	{ 0x50034e1a, "nf_ct_netns_put" },
	{ 0x2d6bc0ad, "nf_tables_deactivate_flowtable" },
	{ 0x1bb39a9b, "nft_flowtable_lookup" },
	{ 0xbad2fa73, "nf_ct_netns_get" },
	{ 0xeff9ea11, "nf_flow_table_cleanup" },
	{ 0xaa4c18e5, "nft_unregister_expr" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb310efd8, "nla_put" },
	{ 0xdcb764ad, "memset" },
	{ 0x9cc2dbda, "dev_fill_forward_path" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x13b2ca70, "neigh_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e48bd37, "nf_route" },
	{ 0x34d9f4a9, "flow_offload_alloc" },
	{ 0x1789bc02, "flow_offload_route_init" },
	{ 0x94ccce91, "flow_offload_add" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x18560358, "flow_offload_free" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack,nf_flow_table");


MODULE_INFO(srcversion, "CC53D6BB03C0F351866E68B");
