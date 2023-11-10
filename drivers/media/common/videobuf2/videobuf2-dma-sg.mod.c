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

SYMBOL_CRC(vb2_dma_sg_memops, 0x9fa99cd4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xee637ce1, "vm_map_pages" },
	{ 0x73809259, "vb2_common_vm_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x12b2d42c, "dma_buf_vmap" },
	{ 0x3073e1c9, "vm_map_ram" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x341de767, "dma_buf_vunmap" },
	{ 0x334ea568, "dma_buf_unmap_attachment" },
	{ 0x6295fde1, "dma_buf_map_attachment" },
	{ 0x4eff4af, "dma_buf_detach" },
	{ 0x37a0cba, "kfree" },
	{ 0x1809de45, "dma_sync_sg_for_cpu" },
	{ 0x58dc77b9, "dma_sync_sg_for_device" },
	{ 0xa71a044a, "dma_unmap_sg_attrs" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x437ea39d, "set_page_dirty_lock" },
	{ 0xccd197c7, "vb2_destroy_framevec" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x94dd8b22, "dma_map_sgtable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x6eb32132, "split_page" },
	{ 0xd2ba40a8, "sg_alloc_table_from_pages_segment" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf7dca34a, "get_device" },
	{ 0x606b7e51, "put_device" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x59e37a62, "dma_buf_export" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa21fa765, "vb2_create_framevec" },
	{ 0xc5e5573a, "frame_vector_to_pages" },
	{ 0x68b26e2c, "dma_buf_attach" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-memops,videobuf2-common");


MODULE_INFO(srcversion, "DB7F8C25E229416CEE6257F");
