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
	{ 0x35cf7b0d, "xfrm_register_type_offload" },
	{ 0x92997ed8, "_printk" },
	{ 0x789919cd, "inet6_add_offload" },
	{ 0x5c2865ee, "xfrm_unregister_type_offload" },
	{ 0x26be0f0d, "inet6_del_offload" },
	{ 0x3b2e9648, "esp6_input_done2" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x8d4220e0, "ipv6_skip_exthdr" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x95723647, "inet6_offloads" },
	{ 0x56209d32, "skb_eth_gso_segment" },
	{ 0xc4a8eadf, "xfrm_parse_spi" },
	{ 0xb2d928a6, "secpath_set" },
	{ 0xee4a72bb, "xfrm_state_lookup" },
	{ 0x34b60b79, "xfrm_input" },
	{ 0x1e8235eb, "__skb_ext_del" },
	{ 0x61750b8b, "esp6_output_head" },
	{ 0x947a1830, "skb_ext_add" },
	{ 0xaf7cb157, "esp6_output_tail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "esp6");


MODULE_INFO(srcversion, "816576B7C04DEFD0B2106CC");
