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
	{ 0x28baef8e, "zpool_register_driver" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fc9f19a, "zpool_unregister_driver" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd3e6ee6a, "__ClearPageMovable" },
	{ 0x58d074b3, "unlock_page" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x98cb4615, "__folio_lock" },
	{ 0x49608959, "migrate_disable" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5a110fcd, "__SetPageMovable" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0x92997ed8, "_printk" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0xdcb764ad, "memset" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "683088BE5BEF1C2044B3D10");
