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
	{ 0x1425e33, "try_module_get" },
	{ 0xf1f45acc, "snd_pcm_hw_param_first" },
	{ 0xe9182752, "snd_info_register" },
	{ 0x1eed5f14, "snd_pcm_kernel_ioctl" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x8360c53b, "snd_info_free_entry" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0x4829a47e, "memcpy" },
	{ 0x283dfe3, "_snd_pcm_hw_params_any" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x81be380e, "__snd_pcm_lib_xfer" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0x29329ea9, "snd_unregister_oss_device" },
	{ 0xe2964344, "__wake_up" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x650f8603, "snd_pcm_format_silence_64" },
	{ 0x26029627, "snd_pcm_open_substream" },
	{ 0x5c08605f, "snd_register_oss_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x7aabd10b, "snd_pcm_stream_unlock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xd0d695bf, "snd_pcm_stream_lock_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x5157fceb, "snd_card_file_add" },
	{ 0xcc793c4a, "module_put" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x6ef8fcd8, "snd_pcm_format_linear" },
	{ 0x9576a7f0, "snd_pcm_mmap_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xfc9335f3, "snd_pcm_hw_param_last" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xdcb764ad, "memset" },
	{ 0x52e3e4a5, "snd_pcm_hw_param_value" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xde77a6be, "nonseekable_open" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x68c644bd, "snd_pcm_hw_refine" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc5964c3, "snd_info_create_card_entry" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x7d4cbf7e, "snd_pcm_notify" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xbcb1943c, "snd_pcm_release_substream" },
	{ 0x75f40f00, "snd_card_file_remove" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "25E656245B1160CC070665B");
