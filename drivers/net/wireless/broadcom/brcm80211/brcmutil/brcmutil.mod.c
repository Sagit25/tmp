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

SYMBOL_CRC(brcmu_pkt_buf_get_skb, 0x1d864ef5, "");
SYMBOL_CRC(brcmu_pkt_buf_free_skb, 0x6c6122d6, "");
SYMBOL_CRC(brcmu_pktq_penq, 0x3e43fffe, "");
SYMBOL_CRC(brcmu_pktq_penq_head, 0x27c556ed, "");
SYMBOL_CRC(brcmu_pktq_pdeq, 0xed5fd4ed, "");
SYMBOL_CRC(brcmu_pktq_pdeq_match, 0xd77b9a50, "");
SYMBOL_CRC(brcmu_pktq_pdeq_tail, 0x039d3e4a, "");
SYMBOL_CRC(brcmu_pktq_pflush, 0x18975e34, "");
SYMBOL_CRC(brcmu_pktq_flush, 0x14841c15, "");
SYMBOL_CRC(brcmu_pktq_init, 0xe2349788, "");
SYMBOL_CRC(brcmu_pktq_peek_tail, 0x72941518, "");
SYMBOL_CRC(brcmu_pktq_mlen, 0xeb30e00b, "");
SYMBOL_CRC(brcmu_pktq_mdeq, 0xddbcff2b, "");
SYMBOL_CRC(brcmu_boardrev_str, 0x1906648e, "");
SYMBOL_CRC(brcmu_dotrev_str, 0xa17c0ccf, "");
SYMBOL_CRC(brcmu_prpkt, 0xd257fd51, "");
SYMBOL_CRC(brcmu_dbg_hex_dump, 0x9dbcd801, "");
SYMBOL_CRC(brcmu_d11_attach, 0xd6217d91, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x48471741, "skb_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdcb764ad, "memset" },
	{ 0xe7a4d6f2, "skb_dequeue_tail" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0xdb73a05c, "skb_unlink" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AC2E407EFC82EF84B7BB4B2");
