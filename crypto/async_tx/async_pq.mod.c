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

SYMBOL_CRC(async_gen_syndrome, 0x34e8a4b1, "_gpl");
SYMBOL_CRC(async_syndrome_val, 0x61f1b92d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x92997ed8, "_printk" },
	{ 0xb11630d4, "__async_tx_find_channel" },
	{ 0xac70d1d0, "dmaengine_get_unmap_data" },
	{ 0x2984285a, "dmaengine_unmap_put" },
	{ 0x22aafb10, "async_tx_quiesce" },
	{ 0xb0d904b7, "raid6_empty_zero_page" },
	{ 0x804a5b70, "raid6_call" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0x17f54263, "raid6_gfexp" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xae95332b, "async_tx_submit" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x419df9a4, "async_xor_offs" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "async_tx,raid6_pq,async_xor");


MODULE_INFO(srcversion, "6135C3A1A03DA6A7CCBE102");
