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

SYMBOL_CRC(zs_get_total_pages, 0xcbe56bc2, "_gpl");
SYMBOL_CRC(zs_map_object, 0xc341ae6d, "_gpl");
SYMBOL_CRC(zs_unmap_object, 0x924c46f8, "_gpl");
SYMBOL_CRC(zs_huge_class_size, 0x3d8baf3b, "_gpl");
SYMBOL_CRC(zs_malloc, 0xb29533ee, "_gpl");
SYMBOL_CRC(zs_free, 0x958df3ac, "_gpl");
SYMBOL_CRC(zs_compact, 0x5da67adc, "_gpl");
SYMBOL_CRC(zs_pool_stats, 0x7cceaf92, "_gpl");
SYMBOL_CRC(zs_create_pool, 0xbcf1f0e6, "_gpl");
SYMBOL_CRC(zs_destroy_pool, 0xc69b7ee5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd3e6ee6a, "__ClearPageMovable" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x3d05112c, "unregister_shrinker" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0x37b2ccac, "__cpuhp_setup_state" },
	{ 0x28baef8e, "zpool_register_driver" },
	{ 0x4fc9f19a, "zpool_unregister_driver" },
	{ 0xc67a6641, "__cpuhp_remove_state" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x3d0381cc, "register_shrinker" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x58d074b3, "unlock_page" },
	{ 0x3200142c, "dec_zone_page_state" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xaf2ad9ba, "folio_wait_bit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0x2691d445, "inc_zone_page_state" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x5a110fcd, "__SetPageMovable" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5BF360579E03A12078BCD50");
