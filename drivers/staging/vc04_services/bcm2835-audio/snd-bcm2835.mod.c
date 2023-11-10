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


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6f827ac2, "vchiq_use_service" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0xf25f39f5, "snd_pcm_new" },
	{ 0xa6257a2f, "complete" },
	{ 0xb325fe3a, "vchiq_connect" },
	{ 0x555bf29d, "vchiq_get_service_userdata" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0x510abc69, "snd_card_free" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd927147d, "snd_pcm_stop" },
	{ 0x468e478d, "snd_pcm_hw_constraint_minmax" },
	{ 0x4ff04550, "vchiq_initialise" },
	{ 0x37a0cba, "kfree" },
	{ 0xadda69dd, "rpi_firmware_get" },
	{ 0x28eced4f, "devres_add" },
	{ 0x58c9f362, "of_find_compatible_node" },
	{ 0x5c53f7b0, "vchiq_open_service" },
	{ 0x513826e4, "vchiq_close_service" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0xcb01c829, "vchiq_shutdown" },
	{ 0xfa00ebcb, "snd_pcm_stream_unlock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xd903f981, "devm_add_action" },
	{ 0xcf12e895, "snd_card_new" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x63e9296, "rpi_firmware_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdc510a8f, "__devres_alloc_node" },
	{ 0x38fb6db5, "vchiq_get_peer_version" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x10c6cb91, "snd_pcm_set_ops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x143d675d, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xd3dfb6ee, "vchiq_release_service" },
	{ 0xe8700bac, "vchiq_queue_kernel_message" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xdd64e639, "strscpy" },
	{ 0x40fc74e1, "snd_pcm_stream_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x1e9e4c92, "vchiq_bulk_transmit" },
	{ 0x65986fe0, "devres_find" },
	{ 0xb1b572d5, "snd_pcm_period_elapsed" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x2462b1a9, "snd_pcm_hw_constraint_step" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x902afb08, "vchiq_release_message" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-pcm");


MODULE_INFO(srcversion, "A14E94B194E20C37B21C36D");
