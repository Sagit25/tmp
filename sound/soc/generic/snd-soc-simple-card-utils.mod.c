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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(asoc_simple_convert_fixup, 0xeea20112, "_gpl");
SYMBOL_CRC(asoc_simple_parse_convert, 0x63afc7d2, "_gpl");
SYMBOL_CRC(asoc_simple_is_convert_required, 0x00e1d1ff, "_gpl");
SYMBOL_CRC(asoc_simple_parse_daifmt, 0x670fea40, "_gpl");
SYMBOL_CRC(asoc_simple_parse_tdm_width_map, 0xdf3e3e67, "_gpl");
SYMBOL_CRC(asoc_simple_set_dailink_name, 0x477d71c3, "_gpl");
SYMBOL_CRC(asoc_simple_parse_card_name, 0x81454097, "_gpl");
SYMBOL_CRC(asoc_simple_parse_clk, 0xfab01e18, "_gpl");
SYMBOL_CRC(asoc_simple_startup, 0x26874d79, "_gpl");
SYMBOL_CRC(asoc_simple_shutdown, 0x534d017e, "_gpl");
SYMBOL_CRC(asoc_simple_hw_params, 0x53357f32, "_gpl");
SYMBOL_CRC(asoc_simple_be_hw_params_fixup, 0xe91fcc0b, "_gpl");
SYMBOL_CRC(asoc_simple_dai_init, 0x500eba16, "_gpl");
SYMBOL_CRC(asoc_simple_canonicalize_platform, 0x4eec16bd, "_gpl");
SYMBOL_CRC(asoc_simple_canonicalize_cpu, 0xb6a561b0, "_gpl");
SYMBOL_CRC(asoc_simple_clean_reference, 0x7d9f2a58, "_gpl");
SYMBOL_CRC(asoc_simple_parse_routing, 0xee0e7d49, "_gpl");
SYMBOL_CRC(asoc_simple_parse_widgets, 0x365f84f8, "_gpl");
SYMBOL_CRC(asoc_simple_parse_pin_switches, 0xfe675186, "_gpl");
SYMBOL_CRC(asoc_simple_init_jack, 0x78cccaa7, "_gpl");
SYMBOL_CRC(asoc_simple_init_priv, 0x7fcc3790, "_gpl");
SYMBOL_CRC(asoc_simple_remove, 0xe839c146, "_gpl");
SYMBOL_CRC(asoc_graph_card_probe, 0x60f99ba3, "_gpl");
SYMBOL_CRC(asoc_graph_is_ports0, 0x1bd7827d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x645a9dd8, "snd_soc_dai_set_tdm_slot" },
	{ 0x8ef770b2, "snd_soc_jack_add_gpios" },
	{ 0x468e478d, "snd_pcm_hw_constraint_minmax" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c59c04a, "of_get_parent" },
	{ 0xf9622dd1, "snd_soc_daifmt_clock_provider_from_bitmap" },
	{ 0xf53a8fc6, "of_node_get" },
	{ 0x81faf72f, "snd_soc_component_set_sysclk" },
	{ 0x3803095d, "snd_soc_of_parse_audio_routing" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xa758bf91, "devm_kvasprintf" },
	{ 0x39fc2458, "snd_soc_dai_set_sysclk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4dc9c1ab, "snd_soc_daifmt_parse_clock_provider_raw" },
	{ 0x6035d020, "of_get_child_by_name" },
	{ 0x803ab35, "devm_get_clk_from_child" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xecf7a0d8, "of_property_count_elems_of_size" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd7fa199c, "snd_soc_daifmt_parse_format" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x54bfe82b, "snd_soc_card_jack_new_pins" },
	{ 0x524075ba, "snd_soc_runtime_calc_hw" },
	{ 0xc559bc83, "snd_soc_of_parse_pin_switches" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9ff869eb, "gpiod_get_optional" },
	{ 0xab5ee2f3, "of_node_name_eq" },
	{ 0xa12ddbfe, "snd_soc_of_parse_audio_simple_widgets" },
	{ 0xa6ef4e59, "gpiod_set_consumer_name" },
	{ 0xfa0e45fe, "snd_soc_dai_active" },
	{ 0xd3e5540, "snd_soc_of_parse_card_name" },
	{ 0x815588a6, "clk_enable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "F0B45CD505D307F8E17DBAB");
