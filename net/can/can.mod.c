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

SYMBOL_CRC(can_sock_destruct, 0x54bcf70e, "");
SYMBOL_CRC(can_send, 0x39aab161, "");
SYMBOL_CRC(can_rx_register, 0xf979b3c3, "");
SYMBOL_CRC(can_rx_unregister, 0xd3466231, "");
SYMBOL_CRC(can_proto_register, 0x6a005439, "");
SYMBOL_CRC(can_proto_unregister, 0x75bc21ab, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1425e33, "try_module_get" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x972a3723, "consume_skb" },
	{ 0xc0bec8ef, "dev_add_pack" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0x150b5953, "proto_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6a5932c1, "sock_register" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0xee12e59a, "proto_register" },
	{ 0xcc793c4a, "module_put" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa07afb40, "dev_remove_pack" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0xab93c2ef, "seq_putc" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xdcb764ad, "memset" },
	{ 0x44289bce, "sock_efree" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xcba5ca01, "proc_create_net_single" },
	{ 0x461c9d06, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x23394e33, "_proc_mkdir" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xae1c50e, "sock_init_data" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "76F20AE7FC3EED720718288");
