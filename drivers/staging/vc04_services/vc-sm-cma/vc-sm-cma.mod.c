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

MODULE_INFO(staging, "Y");

SYMBOL_CRC(vc_sm_cma_int_handle, 0x6fa2a386, "_gpl");
SYMBOL_CRC(vc_sm_cma_free, 0x53b52981, "_gpl");
SYMBOL_CRC(vc_sm_cma_import_dmabuf, 0x110b9a8e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6f827ac2, "vchiq_use_service" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0x20978fb9, "idr_find" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xb325fe3a, "vchiq_connect" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x555bf29d, "vchiq_get_service_userdata" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1809de45, "dma_sync_sg_for_cpu" },
	{ 0x6a0f82b4, "set_user_nice" },
	{ 0xcf2a6966, "up" },
	{ 0x4ff04550, "vchiq_initialise" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0x68b26e2c, "dma_buf_attach" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x5c53f7b0, "vchiq_open_service" },
	{ 0x513826e4, "vchiq_close_service" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x59e37a62, "dma_buf_export" },
	{ 0x6295fde1, "dma_buf_map_attachment" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xbca0c1c0, "vchiq_add_connected_callback" },
	{ 0x334ea568, "dma_buf_unmap_attachment" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0xdf48bbcd, "dma_buf_get" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x6b4d7fc, "dma_buf_put" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xad10f944, "dma_buf_fd" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x58dc77b9, "dma_sync_sg_for_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x96601bbe, "misc_register" },
	{ 0xd3dfb6ee, "vchiq_release_service" },
	{ 0xe8700bac, "vchiq_queue_kernel_message" },
	{ 0x3be79ac9, "vchiq_msg_hold" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x87b8798d, "sg_next" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4eff4af, "dma_buf_detach" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x9fc8ccf4, "dma_mmap_attrs" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x1a5557cc, "dma_get_sgtable_attrs" },
	{ 0xa71a044a, "dma_unmap_sg_attrs" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xdd886136, "vchiq_msg_queue_push" },
	{ 0x98cf60b3, "strlen" },
	{ 0x902afb08, "vchiq_release_message" },
	{ 0xb3c6f341, "single_open" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x5f3d34f4, "dma_map_sg_attrs" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B34604E9EA35E15F26562B6");
