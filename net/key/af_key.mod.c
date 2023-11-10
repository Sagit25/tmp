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
	{ 0xee12e59a, "proto_register" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x6a5932c1, "sock_register" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x1cbc3a1a, "xfrm_register_km" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x461c9d06, "skb_clone" },
	{ 0xb3aafb4, "sock_rfree" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xb6dc8f51, "xfrm_policy_walk" },
	{ 0xcf5f8ce9, "xfrm_policy_walk_done" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x81f5c312, "skb_recv_datagram" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0x375707a8, "skb_free_datagram" },
	{ 0x65cd2519, "__sock_recv_cmsgs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0x1f1bbd31, "skb_copy" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x12706343, "xfrm_state_walk_done" },
	{ 0x9989c160, "xfrm_state_walk" },
	{ 0xee4a72bb, "xfrm_state_lookup" },
	{ 0x2a0b9e30, "sock_i_uid" },
	{ 0x4afd9810, "from_kuid_munged" },
	{ 0xe8437c97, "sock_i_ino" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0x1e9edfb7, "seq_hlist_start_head_rcu" },
	{ 0xfae9d304, "xfrm_unregister_km" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0xa575945, "xfrm_count_pfkey_auth_supported" },
	{ 0x7a8ca627, "xfrm_count_pfkey_enc_supported" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0xb73be794, "xfrm_ealg_get_byidx" },
	{ 0xc6b1fdbe, "xfrm_aalg_get_byidx" },
	{ 0xae03ecbb, "xfrm_policy_flush" },
	{ 0x72b7832f, "km_policy_notify" },
	{ 0xbfae7e2b, "xfrm_state_flush" },
	{ 0x21c44b51, "km_state_notify" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc5b3969b, "proc_create_net_data" },
	{ 0xdcb764ad, "memset" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x92997ed8, "_printk" },
	{ 0x4e90da4a, "xfrm_state_delete" },
	{ 0x362511fc, "xfrm_audit_state_delete" },
	{ 0x10a44557, "__xfrm_state_destroy" },
	{ 0x67a1ae24, "xfrm_state_alloc" },
	{ 0xc80741, "xfrm_ealg_get_byid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6622f61a, "xfrm_init_state" },
	{ 0xc87c3604, "xfrm_state_update" },
	{ 0x49f74789, "xfrm_audit_state_add" },
	{ 0x996c228b, "xfrm_state_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c699441, "xfrm_aalg_get_byid" },
	{ 0x72395dc1, "xfrm_calg_get_byid" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xd84c12d2, "xfrm_find_acq_byseq" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3683de87, "xfrm_policy_bysel_ctx" },
	{ 0x1ba72574, "xfrm_audit_policy_delete" },
	{ 0xf5b7d8d1, "xfrm_policy_destroy" },
	{ 0xb9100e43, "xfrm_policy_alloc" },
	{ 0xcc550d66, "xfrm_policy_insert" },
	{ 0xae81e8f5, "xfrm_audit_policy_add" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0x10fbaebe, "xfrm_policy_byid" },
	{ 0xcd6f7397, "xfrm_find_acq" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0xc517aca0, "xfrm_alloc_spi" },
	{ 0xa9a8aca9, "sock_no_bind" },
	{ 0x27af3415, "sock_no_connect" },
	{ 0x99fa3603, "sock_no_socketpair" },
	{ 0x33c0a21c, "sock_no_accept" },
	{ 0xd464dd01, "sock_no_getname" },
	{ 0xc5a4afc, "datagram_poll" },
	{ 0xae9e1c26, "sock_no_ioctl" },
	{ 0xe3b08e90, "sock_no_listen" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0x30c48a4f, "sock_no_mmap" },
	{ 0x345098b, "sock_no_sendpage" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "154E86DC34B8491614CEC64");
