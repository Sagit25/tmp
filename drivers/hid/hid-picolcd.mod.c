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
	{ 0x5d828c8b, "hid_output_report" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0x89198190, "hid_hw_start" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1c149c2e, "__hid_register_driver" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x2345d009, "input_free_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xc3acf18e, "hid_alloc_report_buf" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x394f4efd, "simple_open" },
	{ 0xbf91577d, "hid_set_field" },
	{ 0xa73a99e, "hid_hw_request" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0xa5a1fe62, "hid_hw_open" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x87ee74ed, "hid_hw_close" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x441916ec, "input_event" },
	{ 0x5495392, "hid_debug" },
	{ 0xa69a1560, "hid_debug_event" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb3c6f341, "single_open" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");

MODULE_INFO(srcversion, "0E3D5FC259559CDAC6CCA7D");
