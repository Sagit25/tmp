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
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x742ca250, "i2c_unregister_device" },
	{ 0x2d6f269d, "rc_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x4b2e21d9, "rc_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcc943aad, "i2c_new_dummy_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x27af3192, "rc_register_device" },
	{ 0x39e67c3f, "rc_free_device" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdce846aa, "rc_keydown" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ir_video");
MODULE_ALIAS("i2c:ir_z8f0811_haup");
MODULE_ALIAS("i2c:ir_z8f0811_hdpvr");

MODULE_INFO(srcversion, "02FF199A4E5423FC2857995");
