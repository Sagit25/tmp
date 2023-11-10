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

SYMBOL_CRC(esp_output_head, 0xdaf90041, "_gpl");
SYMBOL_CRC(esp_output_tail, 0xbd455fde, "_gpl");
SYMBOL_CRC(esp_input_done2, 0x4177a6f0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeb233a45, "__kmalloc" },
	{ 0x68b3fb06, "xfrm_register_type" },
	{ 0x92997ed8, "_printk" },
	{ 0x8c5649fc, "xfrm4_protocol_register" },
	{ 0x34568165, "xfrm_unregister_type" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0x901d64f, "xfrm4_protocol_deregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4355f56e, "crypto_alloc_aead" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x939a3f13, "crypto_aead_setauthsize" },
	{ 0x65bea063, "crypto_aead_setkey" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xee4a72bb, "xfrm_state_lookup" },
	{ 0xfd5d72ab, "ipv4_redirect" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xedec3bc2, "ipv4_update_pmtu" },
	{ 0x10a44557, "__xfrm_state_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x237b7715, "skb_to_sgvec" },
	{ 0xdcb764ad, "memset" },
	{ 0xc7a06f42, "crypto_aead_encrypt" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xcfd00b76, "skb_page_frag_refill" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x460fa2c2, "km_new_mapping" },
	{ 0xf0f9eba2, "skb_pull_rcsum" },
	{ 0x941d386c, "___pskb_trim" },
	{ 0x7f2d3a3b, "skb_checksum" },
	{ 0x559956b7, "xfrm_input_resume" },
	{ 0x7b331869, "skb_cow_data" },
	{ 0x9b2d5125, "crypto_aead_decrypt" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x42f418a3, "pskb_put" },
	{ 0xf7a11dac, "xfrm_state_mtu" },
	{ 0x64843b86, "xfrm_dev_resume" },
	{ 0x63ded8e7, "xfrm_output_resume" },
	{ 0x1e8235eb, "__skb_ext_del" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x509006fd, "xfrm4_rcv" },
	{ 0x34b60b79, "xfrm_input" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "69B9268BCA8A82BA3537CB7");
