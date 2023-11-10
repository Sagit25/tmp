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
	{ 0xb26e53b2, "regmap_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0x92997ed8, "_printk" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0x15e22dd0, "snd_soc_unregister_component" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0x3a1174e8, "snd_soc_register_component" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:tas5713");
MODULE_ALIAS("of:N*T*Cti,tas5713");
MODULE_ALIAS("of:N*T*Cti,tas5713C*");

MODULE_INFO(srcversion, "DD65124ABDBA33FF78627BB");
