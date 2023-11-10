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

SYMBOL_CRC(ipcomp_input, 0x2c9869d8, "_gpl");
SYMBOL_CRC(ipcomp_output, 0x09358038, "_gpl");
SYMBOL_CRC(ipcomp_destroy, 0x7ca8b3ec, "_gpl");
SYMBOL_CRC(ipcomp_init_state, 0xd41c19d0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3f059ff8, "skb_push" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x74159882, "crypto_comp_compress" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x941d386c, "___pskb_trim" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x999e8297, "vfree" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0x95c78947, "xfrm_state_delete_tunnel" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc4b769ca, "crypto_alloc_base" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x23fd3028, "vmalloc_node" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xe400b3d1, "crypto_comp_decompress" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "3179005D4CBD2660AB73CC6");
