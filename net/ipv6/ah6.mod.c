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
	{ 0x68b3fb06, "xfrm_register_type" },
	{ 0x92997ed8, "_printk" },
	{ 0x409ae794, "xfrm6_protocol_register" },
	{ 0x34568165, "xfrm_unregister_type" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x63ded8e7, "xfrm_output_resume" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0x3f2e5b6, "xfrm6_protocol_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x245a6d68, "crypto_alloc_ahash" },
	{ 0x22d66378, "crypto_ahash_setkey" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xee4a72bb, "xfrm_state_lookup" },
	{ 0x893abd4a, "make_kuid" },
	{ 0xde3be455, "ip6_update_pmtu" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2069083c, "ip6_redirect" },
	{ 0x10a44557, "__xfrm_state_destroy" },
	{ 0x559956b7, "xfrm_input_resume" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x7b331869, "skb_cow_data" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x37964d92, "skb_to_sgvec_nomark" },
	{ 0xb94e81a1, "crypto_ahash_digest" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x23f5c779, "xfrm6_rcv" },
	{ 0x34b60b79, "xfrm_input" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ipv6,xfrm_algo");


MODULE_INFO(srcversion, "050EEB00F1AA29E738F69E0");
