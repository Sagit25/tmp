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
	{ 0x1ca3e33, "w1_register_family" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a234d1c, "w1_reset_bus" },
	{ 0x8fc10b6d, "w1_write_8" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4a1a07c, "w1_read_8" },
	{ 0x66ad212e, "w1_read_block" },
	{ 0x32bd488, "w1_write_block" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x81138b63, "w1_unregister_family" },
	{ 0x5a921311, "strncmp" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x4a8e004, "w1_next_pullup" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0x11adcfd5, "w1_touch_bit" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe914e41e, "strcpy" },
	{ 0x85df9b6c, "strsep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92997ed8, "_printk" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "E5EB8DC41F18162AFCB52D1");
