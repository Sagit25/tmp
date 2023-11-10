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
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd7f744b8, "tty_register_ldisc" },
	{ 0x92997ed8, "_printk" },
	{ 0x3571754c, "serio_interrupt" },
	{ 0xe2964344, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x4dcdd9c8, "tty_unregister_ldisc" },
	{ 0xc6cbbc89, "capable" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc1fe953a, "tty_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xac1d85bb, "__serio_register_port" },
	{ 0x5f410d94, "serio_unregister_port" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "serio");


MODULE_INFO(srcversion, "5D79DF5560C27CAFE1CD766");
