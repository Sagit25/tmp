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
	{ 0xbc15ad04, "i2c_match_id" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf523bfa6, "devm_hwmon_device_register_with_groups" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csensirion,shtc1");
MODULE_ALIAS("of:N*T*Csensirion,shtc1C*");
MODULE_ALIAS("of:N*T*Csensirion,shtw1");
MODULE_ALIAS("of:N*T*Csensirion,shtw1C*");
MODULE_ALIAS("of:N*T*Csensirion,shtc3");
MODULE_ALIAS("of:N*T*Csensirion,shtc3C*");
MODULE_ALIAS("i2c:shtc1");
MODULE_ALIAS("i2c:shtw1");
MODULE_ALIAS("i2c:shtc3");

MODULE_INFO(srcversion, "0ECA89073D3D043F1185089");
