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
	{ 0x96601bbe, "misc_register" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1e38e9c9, "input_ff_flush" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x2345d009, "input_free_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xa6257a2f, "complete" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdc9d5e93, "stream_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x423b6e98, "input_alloc_absinfo" },
	{ 0xefabe1da, "input_allocate_device" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0x441916ec, "input_event" },
	{ 0x92997ed8, "_printk" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x91dd57eb, "input_ff_create" },
	{ 0xf1564295, "input_register_device" },
	{ 0x41482d8b, "strndup_user" },
	{ 0xd34af60c, "input_mt_init_slots" },
	{ 0x3a62517, "input_ff_destroy" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "438F2017826496DD7B6AF01");
