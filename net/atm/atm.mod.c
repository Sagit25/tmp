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

SYMBOL_CRC(register_atm_ioctl, 0xff647d3a, "");
SYMBOL_CRC(deregister_atm_ioctl, 0x3fb23ea1, "");
SYMBOL_CRC(vcc_hash, 0x2cc2d52d, "");
SYMBOL_CRC(vcc_sklist_lock, 0x44c6e633, "");
SYMBOL_CRC(vcc_insert_socket, 0x0cf94dc8, "");
SYMBOL_CRC(vcc_release_async, 0x24ba9e49, "");
SYMBOL_CRC(vcc_process_recv_queue, 0x5b38bb31, "");
SYMBOL_CRC(atm_dev_signal_change, 0x1eacf08d, "");
SYMBOL_CRC(atm_dev_release_vccs, 0x43a9d1df, "");
SYMBOL_CRC(register_atmdevice_notifier, 0xb09faf79, "_gpl");
SYMBOL_CRC(unregister_atmdevice_notifier, 0xcfb6a3da, "_gpl");
SYMBOL_CRC(atm_charge, 0x7835988b, "");
SYMBOL_CRC(atm_alloc_charge, 0x15d33fb2, "");
SYMBOL_CRC(atm_pcr_goal, 0xf49bc67a, "");
SYMBOL_CRC(sonet_copy_stats, 0xaa024146, "");
SYMBOL_CRC(sonet_subtract_stats, 0x9feaf287, "");
SYMBOL_CRC(atm_init_aal5, 0x59e94eeb, "");
SYMBOL_CRC(atm_dev_lookup, 0x90cd75b6, "");
SYMBOL_CRC(atm_dev_register, 0x20baa620, "");
SYMBOL_CRC(atm_dev_deregister, 0xb17dd40a, "");
SYMBOL_CRC(atm_proc_root, 0x4443d399, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x375707a8, "skb_free_datagram" },
	{ 0x1425e33, "try_module_get" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x972a3723, "consume_skb" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6612133d, "proc_create_data" },
	{ 0x7cc22516, "remove_proc_subtree" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x1000e51, "schedule" },
	{ 0x6a5932c1, "sock_register" },
	{ 0x65cd2519, "__sock_recv_cmsgs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xee12e59a, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xcc793c4a, "module_put" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0xdcced5f2, "__class_register" },
	{ 0x459e03b6, "init_net" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xe0da8582, "sock_wake_async" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0xab93c2ef, "seq_putc" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0x4c74bd14, "device_register" },
	{ 0x402beac3, "device_del" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x81f5c312, "skb_recv_datagram" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x15b1bafa, "sock_gettstamp" },
	{ 0x23394e33, "_proc_mkdir" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xebe193a7, "send_sig" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0x442817f, "proc_create_seq_private" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6b2baf52, "release_sock" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "87F097B078A21F1F8810562");
