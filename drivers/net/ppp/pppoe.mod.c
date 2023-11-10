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
	{ 0x73820201, "register_pernet_device" },
	{ 0xee12e59a, "proto_register" },
	{ 0xb2fb5ec7, "register_pppox_proto" },
	{ 0x150b5953, "proto_unregister" },
	{ 0xc0bec8ef, "dev_add_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0x81f5c312, "skb_recv_datagram" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x972a3723, "consume_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa07afb40, "dev_remove_pack" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x9217a159, "sock_wmalloc" },
	{ 0x48471741, "skb_put" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0x6b2baf52, "release_sock" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xc5b3969b, "proc_create_net_data" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdfa8d968, "pppox_unbind_sock" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0xf0f9eba2, "skb_pull_rcsum" },
	{ 0x71961d3a, "__sk_receive_skb" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x38947782, "pskb_trim_rcsum_slow" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x1e5668af, "dev_get_by_name_rcu" },
	{ 0xa8862a9e, "dev_get_by_name" },
	{ 0x33ac3aa, "ppp_register_net_channel" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x708d58eb, "sock_queue_rcv_skb_reason" },
	{ 0x257ccc06, "ppp_input" },
	{ 0xa9a8aca9, "sock_no_bind" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0xc5a4afc, "datagram_poll" },
	{ 0x1fbf1c22, "pppox_ioctl" },
	{ 0x9c2e68ce, "pppox_compat_ioctl" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "pppox,ppp_generic");


MODULE_INFO(srcversion, "1E8A6E375B8D4409783AB97");
