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

SYMBOL_CRC(vb2_vmalloc_memops, 0xf8fcc56c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x7602a4e, "remap_vmalloc_range" },
	{ 0x73809259, "vb2_common_vm_ops" },
	{ 0x341de767, "dma_buf_vunmap" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x12b2d42c, "dma_buf_vmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x94dd8b22, "dma_map_sgtable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa71a044a, "dma_unmap_sg_attrs" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x999e8297, "vfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x59e37a62, "dma_buf_export" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x87b8798d, "sg_next" },
	{ 0x76f0cd8e, "vmalloc_to_page" },
	{ 0xa21fa765, "vb2_create_framevec" },
	{ 0xc5e5573a, "frame_vector_to_pages" },
	{ 0xccd197c7, "vb2_destroy_framevec" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x3073e1c9, "vm_map_ram" },
	{ 0xdffb744b, "frame_vector_to_pfns" },
	{ 0x437ea39d, "set_page_dirty_lock" },
	{ 0xedc03953, "iounmap" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-memops,videobuf2-common");


MODULE_INFO(srcversion, "8B202E6A424CE38EE118A5D");
