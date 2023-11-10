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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(nf_fwd_netdev_egress, 0x8465a73e, "_gpl");
SYMBOL_CRC(nf_dup_netdev_egress, 0xf965e077, "_gpl");
SYMBOL_CRC(nft_fwd_dup_netdev_offload, 0x2388eacf, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x41f9298d, "dev_get_by_index" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xb25dc613, "dev_get_by_index_rcu" },
	{ 0x461c9d06, "skb_clone" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F59154AE8C5199DA992F066");
