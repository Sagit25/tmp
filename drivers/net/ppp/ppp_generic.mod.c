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

SYMBOL_CRC(ppp_register_net_channel, 0x033ac3aa, "");
SYMBOL_CRC(ppp_register_channel, 0x9fa1ab42, "");
SYMBOL_CRC(ppp_unregister_channel, 0xd94ec690, "");
SYMBOL_CRC(ppp_channel_index, 0xb5c3dcfb, "");
SYMBOL_CRC(ppp_unit_number, 0xba54ad60, "");
SYMBOL_CRC(ppp_dev_name, 0xe119d949, "");
SYMBOL_CRC(ppp_input, 0x257ccc06, "");
SYMBOL_CRC(ppp_input_error, 0x53d54f3c, "");
SYMBOL_CRC(ppp_output_wakeup, 0xfa1ac65f, "");
SYMBOL_CRC(ppp_register_compressor, 0x8b8f6008, "");
SYMBOL_CRC(ppp_unregister_compressor, 0xbdc9c501, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xcc793c4a, "module_put" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x2a928918, "slhc_free" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0xab460d7f, "bpf_prog_destroy" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x85a552e, "netdev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xe2b29bc7, "bpf_prog_create" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1425e33, "try_module_get" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x73820201, "register_pernet_device" },
	{ 0x41fabaf5, "__register_chrdev" },
	{ 0x853d16c8, "__class_create" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0x3486581a, "class_destroy" },
	{ 0xa4a9ecb6, "device_create" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0x3f74d235, "device_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0xa832ce1, "iov_iter_init" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x20978fb9, "idr_find" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfecef76d, "netdev_name_in_use" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0x3ca255f5, "fget" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe2bce892, "fput" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x5285ddb1, "__put_net" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x972a3723, "consume_skb" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x121445a5, "skb_pull" },
	{ 0xdcdc0040, "slhc_compress" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x71322468, "netdev_printk" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x25c7d07c, "skb_scrub_packet" },
	{ 0x74b8e674, "slhc_toss" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xf36f42a9, "slhc_uncompress" },
	{ 0x43f9ebc8, "slhc_remember" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xf0f9eba2, "skb_pull_rcsum" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x15f90688, "slhc_init" },
	{ 0x668b19a1, "down_read" },
	{ 0x53b954a2, "up_read" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "slhc");


MODULE_INFO(srcversion, "8C39EB7EF53DDFA3F899861");
