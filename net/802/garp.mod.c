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

SYMBOL_CRC(garp_request_join, 0x998ed1cf, "_gpl");
SYMBOL_CRC(garp_request_leave, 0xf362c0a9, "_gpl");
SYMBOL_CRC(garp_init_applicant, 0x2fb0196c, "_gpl");
SYMBOL_CRC(garp_uninit_applicant, 0x2b2bdb90, "_gpl");
SYMBOL_CRC(garp_register_application, 0xfe90821f, "_gpl");
SYMBOL_CRC(garp_unregister_application, 0x069091b4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf5f2180e, "stp_proto_register" },
	{ 0xf7cb0032, "stp_proto_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x2ff26957, "dev_mc_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x56470118, "__warn_printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xda178589, "llc_mac_hdr_init" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x121445a5, "skb_pull" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5006b765, "dev_mc_del" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "stp,llc");


MODULE_INFO(srcversion, "5D5233E6487E8F56DED26B1");
