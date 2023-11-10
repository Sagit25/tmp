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
	{ 0x92997ed8, "_printk" },
	{ 0xd7f744b8, "tty_register_ldisc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xcd02e645, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x4dcdd9c8, "tty_unregister_ldisc" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc6cbbc89, "capable" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x9b60945e, "tty_driver_flush_buffer" },
	{ 0x4fffca41, "free_netdev" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xcbd762f2, "netif_tx_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x446b7c48, "netif_tx_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe5525cbb, "tty_unthrottle" },
	{ 0xa6257a2f, "complete" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0xc04c722c, "netif_rx" },
	{ 0xbd6841d4, "crc16" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0xdcb764ad, "memset" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa8c060ac, "dev_trans_start" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x43e492e8, "ax25_ip_xmit" },
	{ 0xabe34a16, "tty_chars_in_buffer" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "B8540571137BE8248810678");
