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

SYMBOL_CRC(vb2_dma_contig_memops, 0xa5e6e449, "_gpl");
SYMBOL_CRC(vb2_dma_contig_set_max_seg_size, 0x0a28bf97, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x87d3a01f, "dma_mmap_noncontiguous" },
	{ 0x73809259, "vb2_common_vm_ops" },
	{ 0x9fc8ccf4, "dma_mmap_attrs" },
	{ 0x92997ed8, "_printk" },
	{ 0x341de767, "dma_buf_vunmap" },
	{ 0x334ea568, "dma_buf_unmap_attachment" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4eff4af, "dma_buf_detach" },
	{ 0x37a0cba, "kfree" },
	{ 0x1809de45, "dma_sync_sg_for_cpu" },
	{ 0x58dc77b9, "dma_sync_sg_for_device" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xa71a044a, "dma_unmap_sg_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x94dd8b22, "dma_map_sgtable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x3b64bfce, "dma_vmap_noncontiguous" },
	{ 0x12b2d42c, "dma_buf_vmap" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x682547e2, "dma_vunmap_noncontiguous" },
	{ 0x60a6f476, "dma_free_noncontiguous" },
	{ 0x606b7e51, "put_device" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x59e37a62, "dma_buf_export" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x1a5557cc, "dma_get_sgtable_attrs" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x87b8798d, "sg_next" },
	{ 0x68b26e2c, "dma_buf_attach" },
	{ 0xf7dca34a, "get_device" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0x7b0a4aa6, "dma_alloc_noncontiguous" },
	{ 0xa21fa765, "vb2_create_framevec" },
	{ 0xc5e5573a, "frame_vector_to_pages" },
	{ 0xccd197c7, "vb2_destroy_framevec" },
	{ 0xdffb744b, "frame_vector_to_pfns" },
	{ 0x992e1807, "dma_map_resource" },
	{ 0xd2ba40a8, "sg_alloc_table_from_pages_segment" },
	{ 0x437ea39d, "set_page_dirty_lock" },
	{ 0x6349393b, "dma_unmap_resource" },
	{ 0x6295fde1, "dma_buf_map_attachment" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-memops,videobuf2-common");


MODULE_INFO(srcversion, "23B3D4E18936805C51C1DE2");
