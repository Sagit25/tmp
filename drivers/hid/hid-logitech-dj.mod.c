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
	{ 0x1c149c2e, "__hid_register_driver" },
	{ 0x5495392, "hid_debug" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x99ab0cdc, "hid_parse_report" },
	{ 0x37a0cba, "kfree" },
	{ 0x85b3820a, "hid_unregister_driver" },
	{ 0xa73a99e, "hid_hw_request" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7c300bdc, "hid_hw_raw_request" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc8c45145, "hid_input_report" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x78b34fa8, "hid_destroy_device" },
	{ 0xd96a3ad0, "hid_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x1a9f20b5, "hid_add_device" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x87ee74ed, "hid_hw_close" },
	{ 0xc4e5cc2c, "hid_hw_stop" },
	{ 0xbcbf76ab, "hid_open_report" },
	{ 0x30faa048, "usb_hid_driver" },
	{ 0xb4a9628b, "hid_compare_device_paths" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x89198190, "hid_hw_start" },
	{ 0xa5a1fe62, "hid_hw_open" },
	{ 0xcf2a6966, "up" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C532");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C534");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C531");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C537");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C539");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C53A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C53F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C513");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C517");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C51B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C70E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C70A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71C");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C713");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C714");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71F");

MODULE_INFO(srcversion, "B041E2BA3F7B2FE73CA19E4");
