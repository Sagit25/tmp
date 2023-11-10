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
	{ 0x708d58eb, "sock_queue_rcv_skb_reason" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x972a3723, "consume_skb" },
	{ 0xc0bec8ef, "dev_add_pack" },
	{ 0x33fc2a31, "get_user_ifreq" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xf92ec2f7, "sock_common_getsockopt" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x28d88bcc, "sock_common_setsockopt" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa13f5774, "put_cmsg" },
	{ 0x92997ed8, "_printk" },
	{ 0x150b5953, "proto_unregister" },
	{ 0xbe7f617, "dev_getfirstbyhwtype" },
	{ 0x6a5932c1, "sock_register" },
	{ 0xc5a4afc, "datagram_poll" },
	{ 0x65cd2519, "__sock_recv_cmsgs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xee12e59a, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0x459e03b6, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa07afb40, "dev_remove_pack" },
	{ 0x41f9298d, "dev_get_by_index" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0xa9a8aca9, "sock_no_bind" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0xdad7841, "ieee802154_hdr_pull" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0xcaa0e50d, "sock_common_recvmsg" },
	{ 0xc5c94160, "sk_common_release" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0x81f5c312, "skb_recv_datagram" },
	{ 0x2672b6e9, "sock_alloc_send_pskb" },
	{ 0xd464dd01, "sock_no_getname" },
	{ 0xa8862a9e, "dev_get_by_name" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6a29aec0, "dst_release" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x15b1bafa, "sock_gettstamp" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd77e3b7d, "dev_getbyhwaddr_rcu" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0xd94de97e, "dev_load" },
	{ 0x38f48af7, "put_user_ifreq" },
	{ 0x6b2baf52, "release_sock" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "18EB1D3ED9ABA24A160F0A0");
