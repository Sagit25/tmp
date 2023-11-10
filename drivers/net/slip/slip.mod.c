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
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0b3a353, "tty_hangup" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0xa8c060ac, "dev_trans_start" },
	{ 0xabe34a16, "tty_chars_in_buffer" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x4dcdd9c8, "tty_unregister_ldisc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd7f744b8, "tty_register_ldisc" },
	{ 0x972a3723, "consume_skb" },
	{ 0xdcdc0040, "slhc_compress" },
	{ 0x43f9ebc8, "slhc_remember" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc04c722c, "netif_rx" },
	{ 0xf36f42a9, "slhc_uncompress" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2a928918, "slhc_free" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x3c1bbb93, "tty_mode_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1cdbdf56, "dev_close" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x24d273d1, "add_timer" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x15f90688, "slhc_init" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0x4fffca41, "free_netdev" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "slhc");


MODULE_INFO(srcversion, "8405B04FBD42D7CAF0B2913");
