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
	{ 0x1425e33, "try_module_get" },
	{ 0x14cb6f18, "bt_procfs_cleanup" },
	{ 0x48471741, "skb_put" },
	{ 0xc51a4dbd, "tty_wakeup" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xaeb00205, "tty_flip_buffer_push" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0xcecd415d, "bt_procfs_init" },
	{ 0x5b1c34e9, "tty_kref_put" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xf347a9fb, "kernel_bind" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x6a0f82b4, "set_user_nice" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1957b2e3, "hci_conn_switch_role" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0xa9e510c2, "__tty_alloc_driver" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x5c319f3b, "tty_port_tty_hangup" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe2a2230, "kernel_accept" },
	{ 0x9303f7be, "__module_get" },
	{ 0x404cbbc5, "tty_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd629a20b, "bt_sock_wait_ready" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xda1d944d, "tty_port_install" },
	{ 0xa738fcbd, "bt_sock_reclassify_lock" },
	{ 0xc94c9bb6, "hci_unregister_cb" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x3c8199d2, "bt_sock_stream_recvmsg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x8babef38, "bt_debugfs" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xe222a926, "tty_unregister_device" },
	{ 0xee12e59a, "proto_register" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xcc793c4a, "module_put" },
	{ 0x778bda51, "tty_port_tty_wakeup" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0xdb696fa4, "bt_sock_link" },
	{ 0x459e03b6, "init_net" },
	{ 0x121445a5, "skb_pull" },
	{ 0x588cbb19, "tty_vhangup" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x96267f10, "__dev_kfree_skb_irq" },
	{ 0x78e55350, "device_move" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xa1bfdb49, "tty_insert_flip_string_fixed_flag" },
	{ 0xf4451124, "tty_port_init" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x63b62b7b, "hci_conn_security" },
	{ 0xdb5543b0, "tty_port_register_device" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0xd89a809, "tty_port_close" },
	{ 0x265aa3d5, "kernel_connect" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0x45961328, "bt_accept_dequeue" },
	{ 0xdcb764ad, "memset" },
	{ 0xc0fe9e38, "hci_get_route" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc2d25825, "bt_accept_unlink" },
	{ 0xb5352b7e, "bt_sock_unlink" },
	{ 0x517d853d, "tty_port_put" },
	{ 0xcbe10261, "bt_accept_enqueue" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x718b8b7, "bt_info" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1f8059e0, "bt_sock_wait_state" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfd09ebe9, "hci_conn_check_secure" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x50fecb1c, "kernel_listen" },
	{ 0xb3283626, "bt_sock_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd65439c, "sock_create_kern" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x3f0fbe64, "tty_register_driver" },
	{ 0x2672b6e9, "sock_alloc_send_pskb" },
	{ 0x88a0fd0c, "bt_sock_ioctl" },
	{ 0x1f3f794f, "tty_port_hangup" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x361e082b, "tty_port_open" },
	{ 0x1334159e, "hci_register_cb" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xacaa2c9e, "sock_release" },
	{ 0x1f4e585c, "bt_sock_poll" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x15b1bafa, "sock_gettstamp" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0xb3c6f341, "single_open" },
	{ 0x1e0a2844, "kernel_sendmsg" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0xb25cdb31, "tty_driver_kref_put" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0xc5e7a361, "tty_port_tty_get" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "B0BD6077BDC7CF2B6EE0949");
