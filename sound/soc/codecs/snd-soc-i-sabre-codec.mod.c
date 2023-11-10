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
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x53225f43, "snd_soc_put_enum_double" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xb56cc929, "snd_soc_get_enum_double" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0x15e22dd0, "snd_soc_unregister_component" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x45d2789d, "snd_soc_get_volsw_range" },
	{ 0xa798b680, "snd_soc_info_volsw_range" },
	{ 0xb413832c, "snd_pcm_hw_constraint_list" },
	{ 0xa39ceef7, "snd_soc_put_volsw_range" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0x3a1174e8, "snd_soc_register_component" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c,snd-pcm");

MODULE_ALIAS("i2c:i-sabre-codec");
MODULE_ALIAS("of:N*T*Caudiophonics,i-sabre-codec");
MODULE_ALIAS("of:N*T*Caudiophonics,i-sabre-codecC*");

MODULE_INFO(srcversion, "101A5446A1D98F58620CBBA");
