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

SYMBOL_CRC(vsock_bind_table, 0x284e07d8, "_gpl");
SYMBOL_CRC(vsock_connected_table, 0x9bb6fd09, "_gpl");
SYMBOL_CRC(vsock_table_lock, 0xc92f7f50, "_gpl");
SYMBOL_CRC(vsock_insert_connected, 0x8439735c, "_gpl");
SYMBOL_CRC(vsock_remove_bound, 0x7cbf1d5b, "_gpl");
SYMBOL_CRC(vsock_remove_connected, 0xb55aedc2, "_gpl");
SYMBOL_CRC(vsock_find_bound_socket, 0xf5565e32, "_gpl");
SYMBOL_CRC(vsock_find_connected_socket, 0xb8957aee, "_gpl");
SYMBOL_CRC(vsock_remove_sock, 0xfe074898, "_gpl");
SYMBOL_CRC(vsock_for_each_connected_socket, 0xb7c9edc2, "_gpl");
SYMBOL_CRC(vsock_add_pending, 0x77083bc3, "_gpl");
SYMBOL_CRC(vsock_remove_pending, 0x1bd333f9, "_gpl");
SYMBOL_CRC(vsock_enqueue_accept, 0x83e4a4ec, "_gpl");
SYMBOL_CRC(vsock_assign_transport, 0xc422a4b1, "_gpl");
SYMBOL_CRC(vsock_find_cid, 0x90aa8549, "_gpl");
SYMBOL_CRC(vsock_create_connected, 0x6cbeec2d, "_gpl");
SYMBOL_CRC(vsock_stream_has_data, 0xa28fcfcb, "_gpl");
SYMBOL_CRC(vsock_stream_has_space, 0x518c4df6, "_gpl");
SYMBOL_CRC(vsock_data_ready, 0xf9eeda4a, "_gpl");
SYMBOL_CRC(vsock_core_get_transport, 0x5c3ad0ba, "_gpl");
SYMBOL_CRC(vsock_core_register, 0x291297bc, "_gpl");
SYMBOL_CRC(vsock_core_unregister, 0x58ab480b, "_gpl");
SYMBOL_CRC(vsock_add_tap, 0x3cc2785f, "_gpl");
SYMBOL_CRC(vsock_remove_tap, 0xdce4c192, "_gpl");
SYMBOL_CRC(vsock_deliver_tap, 0xcf525855, "_gpl");
SYMBOL_CRC(vsock_addr_init, 0x3d4b0fca, "_gpl");
SYMBOL_CRC(vsock_addr_validate, 0xec96eadf, "_gpl");
SYMBOL_CRC(vsock_addr_bound, 0x4b99648c, "_gpl");
SYMBOL_CRC(vsock_addr_unbind, 0x0e9bc9b6, "_gpl");
SYMBOL_CRC(vsock_addr_equals_addr, 0xaf2674b5, "_gpl");
SYMBOL_CRC(vsock_addr_cast, 0x77c14317, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xda10ec3, "security_sock_graft" },
	{ 0x708d58eb, "sock_queue_rcv_skb_reason" },
	{ 0x1425e33, "try_module_get" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x972a3723, "consume_skb" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x9303f7be, "__module_get" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe039e345, "ns_capable_noaudit" },
	{ 0xa3bdd5f7, "__put_cred" },
	{ 0xf09dc05b, "sk_error_report" },
	{ 0x92997ed8, "_printk" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6a5932c1, "sock_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xee12e59a, "proto_register" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcc793c4a, "module_put" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0xedd17b31, "sock_get_timeout" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x96601bbe, "misc_register" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0x5bdb7603, "sock_copy_user_timeval" },
	{ 0xde77a6be, "nonseekable_open" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xae9e1c26, "sock_no_ioctl" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1015A8145720489E19018BC");
