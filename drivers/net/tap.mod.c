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

SYMBOL_CRC(tap_del_queues, 0x6ff65db2, "_gpl");
SYMBOL_CRC(tap_handle_frame, 0x7625e2ec, "_gpl");
SYMBOL_CRC(tap_get_minor, 0x0aa17c8c, "_gpl");
SYMBOL_CRC(tap_free_minor, 0x77deba25, "_gpl");
SYMBOL_CRC(tap_get_socket, 0x8385ebf5, "_gpl");
SYMBOL_CRC(tap_get_ptr_ring, 0x53469225, "_gpl");
SYMBOL_CRC(tap_queue_resize, 0x470ac3b4, "_gpl");
SYMBOL_CRC(tap_create_cdev, 0xb1fe732d, "_gpl");
SYMBOL_CRC(tap_destroy_cdev, 0xc8e63c29, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x85a552e, "netdev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x293e8fe4, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0x8277b3bb, "cdev_add" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xbcacd7f6, "_copy_to_iter" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x1ca380be, "iov_iter_advance" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0x972a3723, "consume_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xd3414595, "__skb_gso_segment" },
	{ 0x46b9c876, "kfree_skb_list_reason" },
	{ 0xdaab728f, "__skb_get_hash" },
	{ 0xf834af2, "skb_checksum_help" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x20978fb9, "idr_find" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5df91d9d, "sock_init_data_uid" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x88add2cb, "skb_partial_csum_set" },
	{ 0xb3707e6e, "flow_keys_basic_dissector" },
	{ 0xad60552e, "__skb_flow_dissect" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xa0d34b62, "iov_iter_npages" },
	{ 0x2672b6e9, "sock_alloc_send_pskb" },
	{ 0x48471741, "skb_put" },
	{ 0x4717362a, "zerocopy_sg_from_iter" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0x5b37e63a, "skb_copy_datagram_from_iter" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x36fa7fdb, "build_skb" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x92293e45, "dev_set_mac_address_user" },
	{ 0x57e53654, "dev_get_mac_address" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xd9f49540, "compat_ptr_ioctl" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D3C2AFCAB41C7784550D6E8");
