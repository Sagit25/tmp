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
	{ 0xe914e41e, "strcpy" },
	{ 0x14cb6f18, "bt_procfs_cleanup" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0xcecd415d, "bt_procfs_init" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x6a0f82b4, "set_user_nice" },
	{ 0xf0886af7, "sock_no_sendmsg" },
	{ 0x4df02057, "crc32_be" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x27af3415, "sock_no_connect" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9303f7be, "__module_get" },
	{ 0x56962cfc, "ether_setup" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xee12e59a, "proto_register" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xcc793c4a, "module_put" },
	{ 0xdb696fa4, "bt_sock_link" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0xe2bce892, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0x459e03b6, "init_net" },
	{ 0xce807a25, "up_write" },
	{ 0x121445a5, "skb_pull" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x7794c8c0, "__module_put_and_kthread_exit" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa9a8aca9, "sock_no_bind" },
	{ 0x6a1409fe, "l2cap_is_socket" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0xb5352b7e, "bt_sock_unlink" },
	{ 0x14766d50, "sock_no_recvmsg" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x718b8b7, "bt_info" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xb3283626, "bt_sock_register" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xd464dd01, "sock_no_getname" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xc74ae316, "sockfd_lookup" },
	{ 0x1e0a2844, "kernel_sendmsg" },
	{ 0x53b954a2, "up_read" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "9B81BD6253270BF3BBDADA1");
