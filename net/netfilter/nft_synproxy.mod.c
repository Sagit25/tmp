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
	{ 0x38745ba5, "nft_register_obj" },
	{ 0x4caa31be, "nft_register_expr" },
	{ 0xa4ee8d41, "nft_unregister_obj" },
	{ 0xae47eb8d, "nft_chain_validate_hooks" },
	{ 0xb310efd8, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xbad2fa73, "nf_ct_netns_get" },
	{ 0xa9f37fcf, "nf_synproxy_ipv4_init" },
	{ 0x9722a817, "nf_synproxy_ipv6_init" },
	{ 0x50034e1a, "nf_ct_netns_put" },
	{ 0x152b2e11, "nf_synproxy_ipv4_fini" },
	{ 0xaa4c18e5, "nft_unregister_expr" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0x2bfaf9c9, "nf_synproxy_ipv6_fini" },
	{ 0x7749fa1e, "nf_ip_checksum" },
	{ 0xcfb2a50d, "synproxy_parse_options" },
	{ 0x7ab884a4, "synproxy_recv_client_ack_ipv6" },
	{ 0x972a3723, "consume_skb" },
	{ 0x2a9cfa5e, "synproxy_recv_client_ack" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xc195d77e, "synproxy_send_client_synack_ipv6" },
	{ 0x91c326df, "synproxy_send_client_synack" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_synproxy_core,nf_conntrack");


MODULE_INFO(srcversion, "6949A7D0D408C18F3C84B22");
