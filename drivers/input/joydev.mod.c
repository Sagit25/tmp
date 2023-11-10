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
	{ 0x5e99e42c, "input_register_handler" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5570945b, "kill_fasync" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4d1d0965, "input_close_device" },
	{ 0x2a6a869d, "cdev_device_del" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0xcabbe4d5, "input_unregister_handle" },
	{ 0x606b7e51, "put_device" },
	{ 0x83d5b943, "fasync_helper" },
	{ 0x37a0cba, "kfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x60c3845f, "input_unregister_handler" },
	{ 0xc2308ba9, "input_match_device_id" },
	{ 0xdcb764ad, "memset" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc0ff21c1, "input_get_new_minor" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0xf7dca34a, "get_device" },
	{ 0xaccb1c88, "input_class" },
	{ 0x6eb983df, "device_initialize" },
	{ 0xa9581528, "input_register_handle" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0x13575562, "cdev_device_add" },
	{ 0x92997ed8, "_printk" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xdc9d5e93, "stream_open" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8257ed93, "input_open_device" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x4829a47e, "memcpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*2,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "35C88506518892F951C3966");
