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
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af8defc, "i2c_smbus_read_byte_data" },
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x96848186, "scnprintf" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbc15ad04, "i2c_match_id" },
	{ 0xc768ff0f, "i2c_smbus_write_byte" },
	{ 0xf523bfa6, "devm_hwmon_device_register_with_groups" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x50d3769f, "i2c_smbus_read_word_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x544f11c4, "i2c_smbus_write_word_data" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdallas,ds1621");
MODULE_ALIAS("of:N*T*Cdallas,ds1621C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1625");
MODULE_ALIAS("of:N*T*Cdallas,ds1625C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1631");
MODULE_ALIAS("of:N*T*Cdallas,ds1631C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1721");
MODULE_ALIAS("of:N*T*Cdallas,ds1721C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1731");
MODULE_ALIAS("of:N*T*Cdallas,ds1731C*");
MODULE_ALIAS("i2c:ds1621");
MODULE_ALIAS("i2c:ds1625");
MODULE_ALIAS("i2c:ds1631");
MODULE_ALIAS("i2c:ds1721");
MODULE_ALIAS("i2c:ds1731");

MODULE_INFO(srcversion, "D791072A3B39426F42D9413");
