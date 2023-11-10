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

SYMBOL_CRC(audio_graph_parse_of, 0xe7fbe4b1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x63afc7d2, "asoc_simple_parse_convert" },
	{ 0x1583a2fa, "of_graph_get_remote_endpoint" },
	{ 0xf6615fcf, "snd_soc_of_parse_tdm_slot" },
	{ 0xfab01e18, "asoc_simple_parse_clk" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x53357f32, "asoc_simple_hw_params" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x477d71c3, "asoc_simple_set_dailink_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7d9f2a58, "asoc_simple_clean_reference" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x534d017e, "asoc_simple_shutdown" },
	{ 0xe4f403b1, "snd_soc_get_dai_name" },
	{ 0x7d0cdd04, "of_graph_parse_endpoint" },
	{ 0x5c59c04a, "of_get_parent" },
	{ 0xa50cc680, "of_phandle_iterator_next" },
	{ 0x9b8162fb, "snd_soc_get_dai_id" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x500eba16, "asoc_simple_dai_init" },
	{ 0x2f3d6b64, "snd_soc_of_parse_node_prefix" },
	{ 0x1dac9fc8, "of_get_property" },
	{ 0xbeedee72, "of_get_next_child" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x370190e5, "snd_soc_dai_link_set_capabilities" },
	{ 0x81454097, "asoc_simple_parse_card_name" },
	{ 0xd7c4aacf, "of_graph_get_endpoint_count" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0x4eec16bd, "asoc_simple_canonicalize_platform" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xee0e7d49, "asoc_simple_parse_routing" },
	{ 0xe1d1ff, "asoc_simple_is_convert_required" },
	{ 0x670fea40, "asoc_simple_parse_daifmt" },
	{ 0x3c5dae42, "of_graph_get_next_endpoint" },
	{ 0xe91fcc0b, "asoc_simple_be_hw_params_fixup" },
	{ 0x7fcc3790, "asoc_simple_init_priv" },
	{ 0x18c0865f, "snd_soc_find_dai_with_mutex" },
	{ 0xdcb764ad, "memset" },
	{ 0xb6a561b0, "asoc_simple_canonicalize_cpu" },
	{ 0x7fbcc3d7, "of_graph_get_port_parent" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x26874d79, "asoc_simple_startup" },
	{ 0x365f84f8, "asoc_simple_parse_widgets" },
	{ 0x3f602c45, "snd_soc_pm_ops" },
	{ 0xab5ee2f3, "of_node_name_eq" },
	{ 0xe839c146, "asoc_simple_remove" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x60f99ba3, "asoc_graph_card_probe" },
	{ 0x1003eac0, "of_phandle_iterator_init" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0x51ed317e, "devm_snd_soc_register_card" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-simple-card-utils,snd-soc-core");

MODULE_ALIAS("of:N*T*Caudio-graph-card");
MODULE_ALIAS("of:N*T*Caudio-graph-cardC*");
MODULE_ALIAS("of:N*T*Caudio-graph-scu-card");
MODULE_ALIAS("of:N*T*Caudio-graph-scu-cardC*");

MODULE_INFO(srcversion, "DF53ED60A7C54BC9DB94B55");
