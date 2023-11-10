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
	{ 0xbfb5bed4, "regcache_sync" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x80e32692, "regcache_mark_dirty" },
	{ 0xebf5cd86, "gpiod_set_array_value_cansleep" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0xbc3e2ccb, "sigmadsp_restrict_params" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x23729ecc, "sigmadsp_setup" },
	{ 0x97dd01de, "sigmadsp_reset" },
	{ 0xa7e0c03a, "devm_gpiod_get_array_optional" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x1196dca3, "of_property_read_variable_u8_array" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0x292a0ee6, "sigmadsp_attach" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdb23d7f, "devm_sigmadsp_init_i2c" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x45e6bd64, "__devm_regmap_init" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-sigmadsp,snd-soc-sigmadsp-i2c,snd-pcm");

MODULE_ALIAS("of:N*T*Cadi,adau1701");
MODULE_ALIAS("of:N*T*Cadi,adau1701C*");
MODULE_ALIAS("i2c:adau1401");
MODULE_ALIAS("i2c:adau1401a");
MODULE_ALIAS("i2c:adau1701");
MODULE_ALIAS("i2c:adau1702");

MODULE_INFO(srcversion, "7D4BE871B114D0549581132");
