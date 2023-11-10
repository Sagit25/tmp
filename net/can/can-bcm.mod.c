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
	{ 0x375707a8, "skb_free_datagram" },
	{ 0xe914e41e, "strcpy" },
	{ 0x708d58eb, "sock_queue_rcv_skb_reason" },
	{ 0xbcacd7f6, "_copy_to_iter" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd3466231, "can_rx_unregister" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf09dc05b, "sk_error_report" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x6a005439, "can_proto_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5a4afc, "datagram_poll" },
	{ 0x65cd2519, "__sock_recv_cmsgs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x39aab161, "can_send" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x41f9298d, "dev_get_by_index" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xb25dc613, "dev_get_by_index_rcu" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0xab93c2ef, "seq_putc" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0xa9a8aca9, "sock_no_bind" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x44289bce, "sock_efree" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe8437c97, "sock_i_ino" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x81f5c312, "skb_recv_datagram" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd464dd01, "sock_no_getname" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xcba5ca01, "proc_create_net_single" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0x75bc21ab, "can_proto_unregister" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x15b1bafa, "sock_gettstamp" },
	{ 0x23394e33, "_proc_mkdir" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0xf979b3c3, "can_rx_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x6b2baf52, "release_sock" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "53F50141CE6BA4D52405FF5");
