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
	{ 0x4829a47e, "memcpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xd7f744b8, "tty_register_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xcd02e645, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x4dcdd9c8, "tty_unregister_ldisc" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xcbd762f2, "netif_tx_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x446b7c48, "netif_tx_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa6257a2f, "complete" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fffca41, "free_netdev" },
	{ 0xc6cbbc89, "capable" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xe5525cbb, "tty_unthrottle" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0xc04c722c, "netif_rx" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x972a3723, "consume_skb" },
	{ 0x43e492e8, "ax25_ip_xmit" },
	{ 0xdcb764ad, "memset" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x3c1bbb93, "tty_mode_ioctl" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "C6089170771AC70804CA9B6");
