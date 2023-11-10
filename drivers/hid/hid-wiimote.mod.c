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
	{ 0xefabe1da, "input_allocate_device" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0xaf8e19e, "power_supply_register" },
	{ 0x89198190, "hid_hw_start" },
	{ 0xb3870713, "hid_hw_output_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1c149c2e, "__hid_register_driver" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0x771d5acf, "led_classdev_unregister" },
	{ 0xf7dca34a, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x2345d009, "input_free_device" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xa916b694, "strnlen" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x394f4efd, "simple_open" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa5a1fe62, "hid_hw_open" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x87ee74ed, "hid_hw_close" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x2e077701, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1373d0ec, "power_supply_get_drvdata" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x441916ec, "input_event" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xce38be48, "power_supply_powers" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x52427fe4, "kobject_uevent" },
	{ 0x8b5626a3, "power_supply_unregister" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x40441910, "input_ff_create_memless" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb3c6f341, "single_open" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0005g*v0000057Ep00000306");
MODULE_ALIAS("hid:b0005g*v0000057Ep00000330");

MODULE_INFO(srcversion, "7191DA90E759CB253160F0F");
