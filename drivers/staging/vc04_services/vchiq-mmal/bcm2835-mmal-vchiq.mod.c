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

MODULE_INFO(staging, "Y");

SYMBOL_CRC(vchiq_mmal_port_set_format, 0xa49e0cf9, "_gpl");
SYMBOL_CRC(vchiq_mmal_port_parameter_set, 0x4eac0520, "_gpl");
SYMBOL_CRC(vchiq_mmal_port_parameter_get, 0x3d3d47cd, "_gpl");
SYMBOL_CRC(vchiq_mmal_port_enable, 0x794e03f5, "_gpl");
SYMBOL_CRC(vchiq_mmal_port_disable, 0x6ec30bf9, "_gpl");
SYMBOL_CRC(vchiq_mmal_port_connect_tunnel, 0xf512a9e2, "_gpl");
SYMBOL_CRC(vchiq_mmal_submit_buffer, 0x5db1779b, "_gpl");
SYMBOL_CRC(mmal_vchi_buffer_init, 0xc75f1f25, "_gpl");
SYMBOL_CRC(mmal_vchi_buffer_cleanup, 0xf8d98820, "_gpl");
SYMBOL_CRC(vchiq_mmal_component_init, 0x670537b2, "_gpl");
SYMBOL_CRC(vchiq_mmal_component_finalise, 0x07940f78, "_gpl");
SYMBOL_CRC(vchiq_mmal_component_enable, 0xc0108315, "_gpl");
SYMBOL_CRC(vchiq_mmal_component_disable, 0x921d9361, "_gpl");
SYMBOL_CRC(vchiq_mmal_version, 0x6192e1a2, "_gpl");
SYMBOL_CRC(vchiq_mmal_finalise, 0x73577d20, "_gpl");
SYMBOL_CRC(vchiq_mmal_init, 0xaca4dd80, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6f827ac2, "vchiq_use_service" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6fa2a386, "vc_sm_cma_int_handle" },
	{ 0x20978fb9, "idr_find" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb325fe3a, "vchiq_connect" },
	{ 0x555bf29d, "vchiq_get_service_userdata" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4ff04550, "vchiq_initialise" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x53b52981, "vc_sm_cma_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5c53f7b0, "vchiq_open_service" },
	{ 0x513826e4, "vchiq_close_service" },
	{ 0x92997ed8, "_printk" },
	{ 0xcb01c829, "vchiq_shutdown" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9166fada, "strncpy" },
	{ 0x110b9a8e, "vc_sm_cma_import_dmabuf" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xdcb764ad, "memset" },
	{ 0xd3dfb6ee, "vchiq_release_service" },
	{ 0xe8700bac, "vchiq_queue_kernel_message" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4c39844f, "vchiq_bulk_receive" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x902afb08, "vchiq_release_message" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "vc-sm-cma");


MODULE_INFO(srcversion, "6DF91C3ADF59B14ED652A2E");
