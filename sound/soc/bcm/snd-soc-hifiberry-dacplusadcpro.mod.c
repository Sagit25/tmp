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
	{ 0x5a05543e, "snd_soc_register_card" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xfdf6508b, "i2c_get_adapter" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x2de9868, "snd_soc_limit_volume" },
	{ 0x30defdbb, "snd_soc_component_read" },
	{ 0x43f7635e, "snd_soc_dai_set_fmt" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x53225f43, "snd_soc_put_enum_double" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0x58c9f362, "of_find_compatible_node" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb56cc929, "snd_soc_get_enum_double" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xac72dfe2, "snd_soc_dai_set_bclk_ratio" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0x1fa963de, "of_changeset_action" },
	{ 0xbc28ce7f, "i2c_smbus_read_byte" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x2e83e82e, "snd_soc_add_component_controls" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xac437f7b, "snd_interval_ratnum" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0x74291057, "i2c_put_adapter" },
	{ 0x696f2b63, "of_changeset_init" },
	{ 0x3c2b68f7, "of_changeset_apply" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusadcpro");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusadcproC*");

MODULE_INFO(srcversion, "B2387B174D09B3FF1203337");
