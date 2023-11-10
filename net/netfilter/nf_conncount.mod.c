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

SYMBOL_CRC(nf_conncount_add, 0xfd3d71d0, "_gpl");
SYMBOL_CRC(nf_conncount_list_init, 0xded40268, "_gpl");
SYMBOL_CRC(nf_conncount_gc_list, 0x786f1604, "_gpl");
SYMBOL_CRC(nf_conncount_count, 0xab8d042f, "_gpl");
SYMBOL_CRC(nf_conncount_init, 0xb98a4979, "_gpl");
SYMBOL_CRC(nf_conncount_cache_free, 0xf2a1dbb9, "_gpl");
SYMBOL_CRC(nf_conncount_destroy, 0xf1979533, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x15ba50a6, "jiffies" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xdcb764ad, "memset" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xbad2fa73, "nf_ct_netns_get" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xcc8d633b, "__do_once_done" },
	{ 0x37a0cba, "kfree" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x50034e1a, "nf_ct_netns_put" },
	{ 0xece784c2, "rb_first" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2706fa0e, "nf_conntrack_find_get" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xca9360b5, "rb_next" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "7371D995964A094D7A902DF");
