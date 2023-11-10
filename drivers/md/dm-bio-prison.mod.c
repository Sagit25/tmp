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

SYMBOL_CRC(dm_bio_prison_create, 0x753e20b2, "_gpl");
SYMBOL_CRC(dm_bio_prison_destroy, 0xb70b342a, "_gpl");
SYMBOL_CRC(dm_bio_prison_alloc_cell, 0x2a97139a, "_gpl");
SYMBOL_CRC(dm_bio_prison_free_cell, 0x4357bbad, "_gpl");
SYMBOL_CRC(dm_bio_detain, 0x717dc92d, "_gpl");
SYMBOL_CRC(dm_get_cell, 0x97a39938, "_gpl");
SYMBOL_CRC(dm_cell_release, 0x56c98711, "_gpl");
SYMBOL_CRC(dm_cell_release_no_holder, 0x233c10b3, "_gpl");
SYMBOL_CRC(dm_cell_error, 0x23e69ca4, "_gpl");
SYMBOL_CRC(dm_cell_visit_release, 0x84893f2d, "_gpl");
SYMBOL_CRC(dm_cell_promote_or_release, 0xb2581652, "_gpl");
SYMBOL_CRC(dm_deferred_set_create, 0x17dd39d6, "_gpl");
SYMBOL_CRC(dm_deferred_set_destroy, 0x2eb01e04, "_gpl");
SYMBOL_CRC(dm_deferred_entry_inc, 0xca2e3a88, "_gpl");
SYMBOL_CRC(dm_deferred_entry_dec, 0x6791a44e, "_gpl");
SYMBOL_CRC(dm_deferred_set_add_work, 0xb6d5c65d, "_gpl");
SYMBOL_CRC(dm_bio_prison_create_v2, 0xd99e003d, "_gpl");
SYMBOL_CRC(dm_bio_prison_destroy_v2, 0xace9b57b, "_gpl");
SYMBOL_CRC(dm_bio_prison_alloc_cell_v2, 0x06c9f2fd, "_gpl");
SYMBOL_CRC(dm_bio_prison_free_cell_v2, 0xa657d214, "_gpl");
SYMBOL_CRC(dm_cell_get_v2, 0xf3eeaf2b, "_gpl");
SYMBOL_CRC(dm_cell_put_v2, 0xb28919d9, "_gpl");
SYMBOL_CRC(dm_cell_lock_v2, 0x784dca28, "_gpl");
SYMBOL_CRC(dm_cell_quiesce_v2, 0xb657ddc0, "_gpl");
SYMBOL_CRC(dm_cell_lock_promote_v2, 0x69e7fecf, "_gpl");
SYMBOL_CRC(dm_cell_unlock_v2, 0x342a0599, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xf3998ffb, "bio_endio" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6A9EEED1F2BB638561A9698");
