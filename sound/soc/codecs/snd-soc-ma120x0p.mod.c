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
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x29b0ee76, "snd_soc_component_test_bits" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x53225f43, "snd_soc_put_enum_double" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x92997ed8, "_printk" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xb56cc929, "snd_soc_get_enum_double" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x15e22dd0, "snd_soc_unregister_component" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x45d2789d, "snd_soc_get_volsw_range" },
	{ 0xa798b680, "snd_soc_info_volsw_range" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xa39ceef7, "snd_soc_put_volsw_range" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cma,ma120x0p");
MODULE_ALIAS("of:N*T*Cma,ma120x0pC*");
MODULE_ALIAS("i2c:ma120x0p");

MODULE_INFO(srcversion, "7D6AC84D6218A105B465019");
