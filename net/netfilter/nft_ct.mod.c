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
	{ 0xa4ee8d41, "nft_unregister_obj" },
	{ 0xaa4c18e5, "nft_unregister_expr" },
	{ 0xb310efd8, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x50034e1a, "nf_ct_netns_put" },
	{ 0xbad2fa73, "nf_ct_netns_get" },
	{ 0xa67b4ae1, "nf_conntrack_helper_put" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x9fa14e4c, "nf_conntrack_helper_try_module_get" },
	{ 0xae8b5c7e, "__nft_reg_track_cancel" },
	{ 0x4a5a1bc, "nft_dump_register" },
	{ 0x6c776b26, "nft_reg_track_update" },
	{ 0x9ccf9433, "nft_expr_reduce_bitwise" },
	{ 0xd5262ee8, "nft_parse_register_store" },
	{ 0x98cf60b3, "strlen" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf824b36d, "nf_ct_tmpl_alloc" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa56cff89, "nf_connlabels_put" },
	{ 0x776587e6, "nf_connlabels_get" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0x459e03b6, "init_net" },
	{ 0x53180f40, "nf_ct_helper_ext_add" },
	{ 0x82ff887f, "nf_ct_expect_alloc" },
	{ 0xac9da20e, "nf_ct_expect_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9375b582, "nf_ct_expect_related_report" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0xcc8ddc5e, "nf_connlabels_replace" },
	{ 0x5f25338a, "nf_ct_ecache_ext_add" },
	{ 0x3605a5b0, "nf_ct_get_id" },
	{ 0x9166fada, "strncpy" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack");


MODULE_INFO(srcversion, "11C7A0CF6FC3466B467834A");
