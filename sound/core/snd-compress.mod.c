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

SYMBOL_CRC(snd_compr_malloc_pages, 0x92fff6ad, "");
SYMBOL_CRC(snd_compr_free_pages, 0x9e831794, "");
SYMBOL_CRC(snd_compr_stop_error, 0x7d6645d5, "_gpl");
SYMBOL_CRC(snd_compress_new, 0x06a78234, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x23537ce5, "snd_dma_alloc_dir_pages" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8360c53b, "snd_info_free_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x20ed8a68, "snd_dma_free_pages" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8f595b11, "snd_major" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c31bb98, "snd_unregister_device" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x21f8804, "snd_device_new" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc5964c3, "snd_info_create_card_entry" },
	{ 0x3521c5ef, "snd_device_initialize" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x564b4d47, "snd_register_device" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "188AA94EA761E1127F2F8EB");
