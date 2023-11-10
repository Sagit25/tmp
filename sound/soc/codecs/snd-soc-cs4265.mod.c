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
	{ 0x7b5e8a3, "snd_soc_dapm_put_enum_double" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x70332958, "snd_soc_put_volsw_sx" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xe010c432, "snd_soc_bytes_put" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x7d8851d4, "snd_soc_bytes_get" },
	{ 0x53225f43, "snd_soc_put_enum_double" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb56cc929, "snd_soc_get_enum_double" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xeed2b076, "snd_soc_dapm_put_volsw" },
	{ 0xd9e8db0f, "snd_soc_bytes_info" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0x9c9f3941, "snd_soc_info_volsw_sx" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x117767ca, "snd_soc_dapm_get_volsw" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x9545453e, "snd_soc_dapm_get_enum_double" },
	{ 0x23a0566a, "snd_soc_get_volsw_sx" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c,snd-pcm");

MODULE_ALIAS("of:N*T*Ccirrus,cs4265");
MODULE_ALIAS("of:N*T*Ccirrus,cs4265C*");
MODULE_ALIAS("i2c:cs4265");

MODULE_INFO(srcversion, "63F2F61FB9B09B96DEB19C9");
