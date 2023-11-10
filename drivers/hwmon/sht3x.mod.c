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
	{ 0x96848186, "scnprintf" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbc15ad04, "i2c_match_id" },
	{ 0xf523bfa6, "devm_hwmon_device_register_with_groups" },
	{ 0x9c5d5b94, "crc8" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "crc8");

MODULE_ALIAS("of:N*T*Csensirion,sht3x");
MODULE_ALIAS("of:N*T*Csensirion,sht3xC*");
MODULE_ALIAS("of:N*T*Csensirion,sts3x");
MODULE_ALIAS("of:N*T*Csensirion,sts3xC*");
MODULE_ALIAS("i2c:sht3x");
MODULE_ALIAS("i2c:sts3x");

MODULE_INFO(srcversion, "9859E1723C0B4CFCA9E7824");
