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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(async_xor_offs, 0x419df9a4, "_gpl");
SYMBOL_CRC(async_xor, 0x241ea53b, "_gpl");
SYMBOL_CRC(async_xor_val_offs, 0x0fc41342, "_gpl");
SYMBOL_CRC(async_xor_val, 0x04734b03, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb11630d4, "__async_tx_find_channel" },
	{ 0xac70d1d0, "dmaengine_get_unmap_data" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xae95332b, "async_tx_submit" },
	{ 0x2984285a, "dmaengine_unmap_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x22aafb10, "async_tx_quiesce" },
	{ 0x5b6c00e6, "xor_blocks" },
	{ 0xdcb764ad, "memset" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "async_tx,xor");


MODULE_INFO(srcversion, "3873C8882F41B45E33800A4");
