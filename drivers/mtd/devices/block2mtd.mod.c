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
	{ 0x2ca970b5, "sync_blockdev" },
	{ 0x37a0cba, "kfree" },
	{ 0xa945b6da, "invalidate_mapping_pages" },
	{ 0x8de5a164, "blkdev_put" },
	{ 0x5e7ee187, "mtd_device_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xa916b694, "strnlen" },
	{ 0xe914e41e, "strcpy" },
	{ 0x9f984513, "strrchr" },
	{ 0x85df9b6c, "strsep" },
	{ 0x98cf60b3, "strlen" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x97530b50, "blkdev_get_by_path" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd0f4e574, "mtd_device_parse_register" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x235907b1, "read_cache_page" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2401f611, "set_page_dirty" },
	{ 0x58d074b3, "unlock_page" },
	{ 0x8c396440, "balance_dirty_pages_ratelimited" },
	{ 0x98cb4615, "__folio_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdcb764ad, "memset" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "8284C6C0B24764DD59A3FC1");
