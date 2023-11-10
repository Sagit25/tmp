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
	{ 0xbad2c909, "__serio_register_driver" },
	{ 0x5570945b, "kill_fasync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x83d5b943, "fasync_helper" },
	{ 0xa41a8843, "serio_unregister_driver" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf7dca34a, "get_device" },
	{ 0x8472fd66, "serio_open" },
	{ 0x6d16c104, "mutex_lock_killable" },
	{ 0x96601bbe, "misc_register" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x7d4d7f9b, "serio_close" },
	{ 0x606b7e51, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "serio");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");

MODULE_INFO(srcversion, "2848635162A92E0C1D3F3BA");
