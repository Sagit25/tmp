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
	{ 0x63afc7d2, "asoc_simple_parse_convert" },
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
	{ 0x534d017e, "asoc_simple_shutdown" },
	{ 0x5c59c04a, "of_get_parent" },
	{ 0xf53a8fc6, "of_node_get" },
	{ 0x500eba16, "asoc_simple_dai_init" },
	{ 0x2f3d6b64, "snd_soc_of_parse_node_prefix" },
	{ 0x78cccaa7, "asoc_simple_init_jack" },
	{ 0xbeedee72, "of_get_next_child" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x370190e5, "snd_soc_dai_link_set_capabilities" },
	{ 0x81454097, "asoc_simple_parse_card_name" },
	{ 0x5f594094, "snd_soc_of_parse_aux_devs" },
	{ 0x6035d020, "of_get_child_by_name" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0x4eec16bd, "asoc_simple_canonicalize_platform" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xee0e7d49, "asoc_simple_parse_routing" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0xe1d1ff, "asoc_simple_is_convert_required" },
	{ 0x670fea40, "asoc_simple_parse_daifmt" },
	{ 0x3d0fa060, "of_device_is_available" },
	{ 0x3f7aef30, "snd_soc_of_get_dai_name" },
	{ 0xe91fcc0b, "asoc_simple_be_hw_params_fixup" },
	{ 0x7fcc3790, "asoc_simple_init_priv" },
	{ 0xdcb764ad, "memset" },
	{ 0xb6a561b0, "asoc_simple_canonicalize_cpu" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x26874d79, "asoc_simple_startup" },
	{ 0x365f84f8, "asoc_simple_parse_widgets" },
	{ 0x3f602c45, "snd_soc_pm_ops" },
	{ 0xe839c146, "asoc_simple_remove" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xfe675186, "asoc_simple_parse_pin_switches" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0x51ed317e, "devm_snd_soc_register_card" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-simple-card-utils,snd-soc-core");

MODULE_ALIAS("of:N*T*Csimple-audio-card");
MODULE_ALIAS("of:N*T*Csimple-audio-cardC*");
MODULE_ALIAS("of:N*T*Csimple-scu-audio-card");
MODULE_ALIAS("of:N*T*Csimple-scu-audio-cardC*");

MODULE_INFO(srcversion, "B45D3137ADD2F51443D6404");
