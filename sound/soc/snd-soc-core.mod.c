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

SYMBOL_CRC(null_dailink_component, 0xdba8d986, "_gpl");
SYMBOL_CRC(snd_soc_debugfs_root, 0x5a9b1699, "_gpl");
SYMBOL_CRC(snd_soc_rtdcom_lookup, 0xa0bfcf27, "_gpl");
SYMBOL_CRC(snd_soc_lookup_component_nolocked, 0x1bd78fc0, "_gpl");
SYMBOL_CRC(snd_soc_lookup_component, 0xbefd590c, "_gpl");
SYMBOL_CRC(snd_soc_get_pcm_runtime, 0x09b7126c, "_gpl");
SYMBOL_CRC(snd_soc_close_delayed_work, 0xd53450b3, "_gpl");
SYMBOL_CRC(snd_soc_find_dai, 0x8d3f0cb6, "_gpl");
SYMBOL_CRC(snd_soc_find_dai_with_mutex, 0x18c0865f, "_gpl");
SYMBOL_CRC(snd_soc_remove_pcm_runtime, 0xe71e65d1, "_gpl");
SYMBOL_CRC(snd_soc_add_pcm_runtime, 0x0d296519, "_gpl");
SYMBOL_CRC(snd_soc_runtime_set_dai_fmt, 0xc4d862e4, "_gpl");
SYMBOL_CRC(snd_soc_set_dmi_name, 0x009b6634, "_gpl");
SYMBOL_CRC(snd_soc_poweroff, 0x2704e528, "_gpl");
SYMBOL_CRC(snd_soc_pm_ops, 0x3f602c45, "_gpl");
SYMBOL_CRC(snd_soc_cnew, 0xdbfb658e, "_gpl");
SYMBOL_CRC(snd_soc_add_component_controls, 0x2e83e82e, "_gpl");
SYMBOL_CRC(snd_soc_add_card_controls, 0xe73d44bd, "_gpl");
SYMBOL_CRC(snd_soc_add_dai_controls, 0x098c01dc, "_gpl");
SYMBOL_CRC(snd_soc_register_card, 0x5a05543e, "_gpl");
SYMBOL_CRC(snd_soc_unregister_card, 0x8409b00f, "_gpl");
SYMBOL_CRC(snd_soc_unregister_dai, 0x31f85fbd, "_gpl");
SYMBOL_CRC(snd_soc_register_dai, 0x17afc032, "_gpl");
SYMBOL_CRC(snd_soc_component_initialize, 0x8a62405a, "_gpl");
SYMBOL_CRC(snd_soc_add_component, 0x9f622479, "_gpl");
SYMBOL_CRC(snd_soc_register_component, 0x3a1174e8, "_gpl");
SYMBOL_CRC(snd_soc_unregister_component_by_driver, 0xb9b6fc33, "_gpl");
SYMBOL_CRC(snd_soc_unregister_component, 0x15e22dd0, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_card_name, 0x0d3e5540, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_audio_simple_widgets, 0xa12ddbfe, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_pin_switches, 0xc559bc83, "_gpl");
SYMBOL_CRC(snd_soc_of_get_slot_mask, 0x9d606366, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_tdm_slot, 0xf6615fcf, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_node_prefix, 0x2f3d6b64, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_audio_routing, 0x3803095d, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_aux_devs, 0x5f594094, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_clock_provider_flipped, 0xc317a15e, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_clock_provider_from_bitmap, 0xf9622dd1, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_parse_format, 0xd7fa199c, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_parse_clock_provider_raw, 0x4dc9c1ab, "_gpl");
SYMBOL_CRC(snd_soc_get_dai_id, 0x9b8162fb, "_gpl");
SYMBOL_CRC(snd_soc_get_dai_name, 0xe4f403b1, "_gpl");
SYMBOL_CRC(snd_soc_of_get_dai_name, 0x3f7aef30, "_gpl");
SYMBOL_CRC(snd_soc_of_put_dai_link_codecs, 0xbd15e53e, "_gpl");
SYMBOL_CRC(snd_soc_of_get_dai_link_codecs, 0x86c1e344, "_gpl");
SYMBOL_CRC(snd_soc_of_put_dai_link_cpus, 0xf66442e8, "_gpl");
SYMBOL_CRC(snd_soc_of_get_dai_link_cpus, 0x2dd91ea1, "_gpl");
SYMBOL_CRC(dapm_mark_endpoints_dirty, 0x863be82b, "_gpl");
SYMBOL_CRC(dapm_kcontrol_get_value, 0x3b09763f, "_gpl");
SYMBOL_CRC(snd_soc_dapm_kcontrol_widget, 0xcedbd053, "_gpl");
SYMBOL_CRC(snd_soc_dapm_kcontrol_dapm, 0x1fe5d58b, "_gpl");
SYMBOL_CRC(snd_soc_dapm_force_bias_level, 0x805c3d51, "_gpl");
SYMBOL_CRC(snd_soc_dapm_dai_get_connected_widgets, 0xe69224de, "_gpl");
SYMBOL_CRC(snd_soc_dapm_dai_free_widgets, 0x8be8be79, "_gpl");
SYMBOL_CRC(dapm_regulator_event, 0xd440bca4, "_gpl");
SYMBOL_CRC(dapm_pinctrl_event, 0x48caef8d, "_gpl");
SYMBOL_CRC(dapm_clock_event, 0x938479f4, "_gpl");
SYMBOL_CRC(snd_soc_dapm_mux_update_power, 0xeb9e9057, "_gpl");
SYMBOL_CRC(snd_soc_dapm_mixer_update_power, 0xe6010fe8, "_gpl");
SYMBOL_CRC(snd_soc_dapm_free_widget, 0x30da0536, "_gpl");
SYMBOL_CRC(snd_soc_dapm_sync_unlocked, 0x80b2219d, "_gpl");
SYMBOL_CRC(snd_soc_dapm_sync, 0x7cc6bba5, "_gpl");
SYMBOL_CRC(snd_soc_dapm_update_dai, 0x5f7c3827, "_gpl");
SYMBOL_CRC(snd_soc_dapm_add_routes, 0x622b1adf, "_gpl");
SYMBOL_CRC(snd_soc_dapm_del_routes, 0x21da4ca2, "_gpl");
SYMBOL_CRC(snd_soc_dapm_weak_routes, 0xe27bae81, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_widgets, 0xd082e8de, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_volsw, 0x117767ca, "_gpl");
SYMBOL_CRC(snd_soc_dapm_put_volsw, 0xeed2b076, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_enum_double, 0x9545453e, "_gpl");
SYMBOL_CRC(snd_soc_dapm_put_enum_double, 0x07b5e8a3, "_gpl");
SYMBOL_CRC(snd_soc_dapm_info_pin_switch, 0x652d8085, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_pin_switch, 0x76b45c4f, "_gpl");
SYMBOL_CRC(snd_soc_dapm_put_pin_switch, 0x54975a83, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_control, 0xb34f9a41, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_controls, 0x064eaaab, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_dai_widgets, 0xf8231fc8, "_gpl");
SYMBOL_CRC(snd_soc_dapm_stream_stop, 0x6fe9a29d, "_gpl");
SYMBOL_CRC(snd_soc_dapm_enable_pin_unlocked, 0xd19b5d21, "_gpl");
SYMBOL_CRC(snd_soc_dapm_enable_pin, 0x4a6241d4, "_gpl");
SYMBOL_CRC(snd_soc_dapm_force_enable_pin_unlocked, 0x223ba301, "_gpl");
SYMBOL_CRC(snd_soc_dapm_force_enable_pin, 0x9a780319, "_gpl");
SYMBOL_CRC(snd_soc_dapm_disable_pin_unlocked, 0x313cef9f, "_gpl");
SYMBOL_CRC(snd_soc_dapm_disable_pin, 0xca953a43, "_gpl");
SYMBOL_CRC(snd_soc_dapm_nc_pin_unlocked, 0x28752703, "_gpl");
SYMBOL_CRC(snd_soc_dapm_nc_pin, 0xe8c9bad1, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_pin_status, 0x8f36e0eb, "_gpl");
SYMBOL_CRC(snd_soc_dapm_ignore_suspend, 0xde5eee60, "_gpl");
SYMBOL_CRC(snd_soc_dapm_free, 0xce70cd45, "_gpl");
SYMBOL_CRC(snd_soc_dapm_init, 0x2479e5ca, "_gpl");
SYMBOL_CRC(snd_soc_jack_report, 0x663cc0ce, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_zones, 0xf292cbb7, "_gpl");
SYMBOL_CRC(snd_soc_jack_get_type, 0x63a899d3, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_pins, 0x9a7ec6c5, "_gpl");
SYMBOL_CRC(snd_soc_jack_notifier_register, 0x47871e24, "_gpl");
SYMBOL_CRC(snd_soc_jack_notifier_unregister, 0x33c32c00, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_gpios, 0x8ef770b2, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_gpiods, 0xdbc676e9, "_gpl");
SYMBOL_CRC(snd_soc_jack_free_gpios, 0x39f82873, "_gpl");
SYMBOL_CRC(snd_soc_calc_frame_size, 0x2541a979, "_gpl");
SYMBOL_CRC(snd_soc_params_to_frame_size, 0xc8269f94, "_gpl");
SYMBOL_CRC(snd_soc_calc_bclk, 0x7e606130, "_gpl");
SYMBOL_CRC(snd_soc_params_to_bclk, 0xeb711ae7, "_gpl");
SYMBOL_CRC(snd_soc_tdm_params_to_bclk, 0x4fa1782d, "_gpl");
SYMBOL_CRC(snd_soc_dai_is_dummy, 0xf74dda31, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_sysclk, 0x39fc2458, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_clkdiv, 0x5d851d33, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_pll, 0x3e113a05, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_bclk_ratio, 0xac72dfe2, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_fmt, 0x43f7635e, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_tdm_slot, 0x645a9dd8, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_channel_map, 0x2b8665e9, "_gpl");
SYMBOL_CRC(snd_soc_dai_get_channel_map, 0x29cf464b, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_tristate, 0xb040968a, "_gpl");
SYMBOL_CRC(snd_soc_dai_digital_mute, 0xdbd86c44, "_gpl");
SYMBOL_CRC(snd_soc_dai_link_set_capabilities, 0x370190e5, "_gpl");
SYMBOL_CRC(snd_soc_dai_action, 0x3e7f4dc5, "_gpl");
SYMBOL_CRC(snd_soc_dai_active, 0xfa0e45fe, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_startup, 0x3c9cc24a, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_shutdown, 0x977b5584, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_trigger, 0x575dac4f, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_set_params, 0xf3e2c360, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_get_params, 0x9fe0bc76, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_ack, 0x9fa3f09a, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_pointer, 0x648be4a6, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_set_metadata, 0xee5b0e9e, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_get_metadata, 0xed02d823, "_gpl");
SYMBOL_CRC(snd_soc_component_set_sysclk, 0x81faf72f, "_gpl");
SYMBOL_CRC(snd_soc_component_set_pll, 0x1636a430, "_gpl");
SYMBOL_CRC(snd_soc_component_enable_pin, 0xf94dfaea, "_gpl");
SYMBOL_CRC(snd_soc_component_enable_pin_unlocked, 0x80b9d490, "_gpl");
SYMBOL_CRC(snd_soc_component_disable_pin, 0x0cdedc12, "_gpl");
SYMBOL_CRC(snd_soc_component_disable_pin_unlocked, 0x09f13ac8, "_gpl");
SYMBOL_CRC(snd_soc_component_nc_pin, 0xc1bbd79f, "_gpl");
SYMBOL_CRC(snd_soc_component_nc_pin_unlocked, 0xb779afae, "_gpl");
SYMBOL_CRC(snd_soc_component_get_pin_status, 0x68799a01, "_gpl");
SYMBOL_CRC(snd_soc_component_force_enable_pin, 0xfeaf4b58, "_gpl");
SYMBOL_CRC(snd_soc_component_force_enable_pin_unlocked, 0x754d6d34, "_gpl");
SYMBOL_CRC(snd_soc_component_set_jack, 0x617dabb0, "_gpl");
SYMBOL_CRC(snd_soc_component_init_regmap, 0x10c85cfd, "_gpl");
SYMBOL_CRC(snd_soc_component_exit_regmap, 0x340c6149, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_open, 0xb7041f3e, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_free, 0x398d58ee, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_trigger, 0xedc4273c, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_set_params, 0x47f38416, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_params, 0x008f9d94, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_caps, 0xcbcc8ff3, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_codec_caps, 0xac59d230, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_ack, 0x9b3917ab, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_pointer, 0x84290f85, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_copy, 0x984edb5a, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_set_metadata, 0x2f9950ed, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_metadata, 0x22282c70, "_gpl");
SYMBOL_CRC(snd_soc_component_read, 0x30defdbb, "_gpl");
SYMBOL_CRC(snd_soc_component_write, 0x280892e9, "_gpl");
SYMBOL_CRC(snd_soc_component_update_bits, 0xb5c3f9fb, "_gpl");
SYMBOL_CRC(snd_soc_component_update_bits_async, 0x07c6f5b8, "_gpl");
SYMBOL_CRC(snd_soc_component_read_field, 0x261be088, "_gpl");
SYMBOL_CRC(snd_soc_component_write_field, 0x5e1fe700, "_gpl");
SYMBOL_CRC(snd_soc_component_async_complete, 0x222f39ca, "_gpl");
SYMBOL_CRC(snd_soc_component_test_bits, 0x29b0ee76, "_gpl");
SYMBOL_CRC(snd_soc_runtime_action, 0xaa7c1432, "_gpl");
SYMBOL_CRC(snd_soc_set_runtime_hwparams, 0x8ec333b1, "_gpl");
SYMBOL_CRC(snd_soc_runtime_calc_hw, 0x524075ba, "_gpl");
SYMBOL_CRC(dpcm_end_walk_at_be, 0x677aa2bb, "_gpl");
SYMBOL_CRC(dpcm_be_dai_trigger, 0x4dc946e9, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_runtime_update, 0xcc83e61a, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_fe_can_update, 0xa5567415, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_be_can_update, 0x3633300f, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_get_substream, 0x25c4fb9b, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_can_be_free_stop, 0x5b125f14, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_can_be_params, 0xc7a23f10, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_can_be_prepared, 0x98a20eb9, "_gpl");
SYMBOL_CRC(devm_snd_soc_register_dai, 0x59ea3a7c, "_gpl");
SYMBOL_CRC(devm_snd_soc_register_component, 0xe7df0c51, "_gpl");
SYMBOL_CRC(devm_snd_soc_register_card, 0x51ed317e, "_gpl");
SYMBOL_CRC(devm_snd_dmaengine_pcm_register, 0x8cc18dfc, "_gpl");
SYMBOL_CRC(snd_soc_info_enum_double, 0x16ba4610, "_gpl");
SYMBOL_CRC(snd_soc_get_enum_double, 0xb56cc929, "_gpl");
SYMBOL_CRC(snd_soc_put_enum_double, 0x53225f43, "_gpl");
SYMBOL_CRC(snd_soc_info_volsw, 0xeaa1a4f3, "_gpl");
SYMBOL_CRC(snd_soc_info_volsw_sx, 0x9c9f3941, "_gpl");
SYMBOL_CRC(snd_soc_get_volsw, 0x91f68aa2, "_gpl");
SYMBOL_CRC(snd_soc_put_volsw, 0xc53238b5, "_gpl");
SYMBOL_CRC(snd_soc_get_volsw_sx, 0x23a0566a, "_gpl");
SYMBOL_CRC(snd_soc_put_volsw_sx, 0x70332958, "_gpl");
SYMBOL_CRC(snd_soc_info_volsw_range, 0xa798b680, "_gpl");
SYMBOL_CRC(snd_soc_put_volsw_range, 0xa39ceef7, "_gpl");
SYMBOL_CRC(snd_soc_get_volsw_range, 0x45d2789d, "_gpl");
SYMBOL_CRC(snd_soc_limit_volume, 0x02de9868, "_gpl");
SYMBOL_CRC(snd_soc_bytes_info, 0xd9e8db0f, "_gpl");
SYMBOL_CRC(snd_soc_bytes_get, 0x7d8851d4, "_gpl");
SYMBOL_CRC(snd_soc_bytes_put, 0xe010c432, "_gpl");
SYMBOL_CRC(snd_soc_bytes_info_ext, 0x9911b4a7, "_gpl");
SYMBOL_CRC(snd_soc_bytes_tlv_callback, 0xd8f792e9, "_gpl");
SYMBOL_CRC(snd_soc_info_xr_sx, 0x8974d087, "_gpl");
SYMBOL_CRC(snd_soc_get_xr_sx, 0xc6fdeaf3, "_gpl");
SYMBOL_CRC(snd_soc_put_xr_sx, 0x923958e4, "_gpl");
SYMBOL_CRC(snd_soc_get_strobe, 0x80401ee3, "_gpl");
SYMBOL_CRC(snd_soc_put_strobe, 0x03c75f96, "_gpl");
SYMBOL_CRC(snd_soc_link_compr_startup, 0x421475ae, "_gpl");
SYMBOL_CRC(snd_soc_link_compr_shutdown, 0x79c921d1, "_gpl");
SYMBOL_CRC(snd_soc_link_compr_set_params, 0x96b9c8c5, "_gpl");
SYMBOL_CRC(snd_soc_card_get_kcontrol, 0xe11aef15, "_gpl");
SYMBOL_CRC(snd_soc_card_jack_new, 0x9ccdf4dc, "_gpl");
SYMBOL_CRC(snd_soc_card_jack_new_pins, 0x54bfe82b, "_gpl");
SYMBOL_CRC(snd_soc_card_add_dai_link, 0x56618205, "_gpl");
SYMBOL_CRC(snd_soc_card_remove_dai_link, 0x388959fc, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_prepare_slave_config, 0xe60b61da, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_register, 0x34d2774c, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_unregister, 0x84ca3c61, "_gpl");
SYMBOL_CRC(snd_soc_new_compress, 0xfdebd622, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe52de225, "regulator_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x1425e33, "try_module_get" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xab8bc1a2, "snd_pcm_rate_mask_intersect" },
	{ 0x9a8a544a, "gpiod_put" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x69255f54, "snd_pcm_hw_limit_rates" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0xcace6925, "regmap_get_val_bytes" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf25f39f5, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7efc1a59, "snd_jack_report" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xc047d9e, "regmap_raw_read" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0x510abc69, "snd_card_free" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x4ea0155, "devres_destroy" },
	{ 0x96848186, "scnprintf" },
	{ 0x8791dfee, "gpiod_get_index" },
	{ 0x25bcdbfd, "snd_dmaengine_pcm_trigger" },
	{ 0x468e478d, "snd_pcm_hw_constraint_minmax" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0x8f75c0a1, "gpiod_export" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6ca4bf88, "async_synchronize_full_domain" },
	{ 0x37a0cba, "kfree" },
	{ 0x48f383c2, "dma_release_channel" },
	{ 0x655cade0, "seq_lseek" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xfe990052, "gpio_free" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x148653, "vsnprintf" },
	{ 0x84d8243f, "regulator_disable_deferred" },
	{ 0x68f24aaa, "snd_ctl_free_one" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x28eced4f, "devres_add" },
	{ 0xf6e769a, "snd_pcm_new_internal" },
	{ 0x1dac9fc8, "of_get_property" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xa87b09a, "snd_dmaengine_pcm_refine_runtime_hwparams" },
	{ 0xf7f06081, "snd_dmaengine_pcm_get_chan" },
	{ 0x3fac1802, "pinctrl_pm_select_default_state" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0x92997ed8, "_printk" },
	{ 0x7aabd10b, "snd_pcm_stream_unlock_irq" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0xc48a83dc, "devm_kstrdup" },
	{ 0xd0d695bf, "snd_pcm_stream_lock_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x536b3232, "gpiod_unexport" },
	{ 0xc2935cfa, "snd_component_add" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0x3b601639, "snd_dmaengine_pcm_close" },
	{ 0x14a5f266, "dma_get_slave_caps" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xcc793c4a, "module_put" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xcf12e895, "snd_card_new" },
	{ 0x46af572f, "snd_card_disconnect_sync" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x7ea31e0c, "devm_kmemdup" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x43afc20d, "snd_dmaengine_pcm_request_channel" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xb978a17e, "pinctrl_pm_select_sleep_state" },
	{ 0x394f4efd, "simple_open" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0x4c1a8cca, "snd_pcm_lib_ioctl" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0xdc02eb39, "dmi_available" },
	{ 0x4d04246c, "snd_jack_new" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x8b02f66d, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x1ea924a4, "snd_jack_add_new_kctl" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc523d20b, "dev_get_regmap" },
	{ 0xfbb8a761, "strscpy_pad" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0xdc510a8f, "__devres_alloc_node" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0x7de96dcb, "regulator_allow_bypass" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x10c6cb91, "snd_pcm_set_ops" },
	{ 0xa81e394c, "regmap_async_complete" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xabb897e6, "snd_pcm_set_managed_buffer" },
	{ 0x7bc670ab, "_snd_pcm_stream_lock_irqsave_nested" },
	{ 0x11089ac7, "_ctype" },
	{ 0x4c74bd14, "device_register" },
	{ 0x27e4ffed, "bpf_trace_run1" },
	{ 0x683b9cce, "default_llseek" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x1fa115ba, "debugfs_create_u32" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xf86d462a, "snd_dmaengine_pcm_open" },
	{ 0xf1eb2c6, "regmap_parse_val" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x48676839, "snd_dmaengine_pcm_pointer" },
	{ 0x7fbcc3d7, "of_graph_get_port_parent" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xaf8c45f8, "dma_request_chan" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0x9dedb40d, "pinctrl_lookup_state" },
	{ 0x7de4bde7, "bpf_trace_run3" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x6a78234, "snd_compress_new" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x3fd142bf, "snd_hwparams_to_dma_slave_config" },
	{ 0x5561da8a, "platform_device_register_full" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0x547c53c3, "devm_pinctrl_get" },
	{ 0xd21b61bd, "async_schedule_node_domain" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x797f7937, "pinctrl_select_state" },
	{ 0x1f0870c0, "snd_pcm_hw_constraint_msbits" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x49f376db, "of_count_phandle_with_args" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xc5371faa, "snd_dmaengine_pcm_set_config_from_dai_data" },
	{ 0xae8923ba, "device_add_groups" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0x9fbffb21, "regmap_exit" },
	{ 0x81188c30, "match_string" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x2d3abc95, "regmap_raw_write" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xb3c6f341, "single_open" },
	{ 0xa286a234, "snd_pcm_format_name" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x815588a6, "clk_enable" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xf1852056, "of_property_read_string_helper" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x23c26407, "snd_dmaengine_pcm_pointer_no_residue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-pcm-dmaengine,snd-compress");


MODULE_INFO(srcversion, "B6274142B8D17CAF70592F1");
