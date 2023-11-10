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

SYMBOL_CRC(arizona_init_spk, 0xba50867e, "_gpl");
SYMBOL_CRC(arizona_init_spk_irqs, 0xd97da4fc, "_gpl");
SYMBOL_CRC(arizona_free_spk_irqs, 0x176ab207, "_gpl");
SYMBOL_CRC(arizona_init_mono, 0x9de3433f, "_gpl");
SYMBOL_CRC(arizona_init_gpio, 0x7930759b, "_gpl");
SYMBOL_CRC(arizona_init_common, 0x64d764b7, "_gpl");
SYMBOL_CRC(arizona_init_vol_limit, 0x56843dd2, "_gpl");
SYMBOL_CRC(arizona_mixer_texts, 0x7f26f273, "_gpl");
SYMBOL_CRC(arizona_mixer_values, 0x729a5ef3, "_gpl");
SYMBOL_CRC(arizona_mixer_tlv, 0xc9c29637, "_gpl");
SYMBOL_CRC(arizona_sample_rate_text, 0x69102a20, "_gpl");
SYMBOL_CRC(arizona_sample_rate_val, 0xdfe804b8, "_gpl");
SYMBOL_CRC(arizona_sample_rate_val_to_name, 0x7fcb929a, "_gpl");
SYMBOL_CRC(arizona_rate_text, 0xab4d845c, "_gpl");
SYMBOL_CRC(arizona_rate_val, 0x46277216, "_gpl");
SYMBOL_CRC(arizona_isrc_fsh, 0xbfb17a79, "_gpl");
SYMBOL_CRC(arizona_isrc_fsl, 0x2420386f, "_gpl");
SYMBOL_CRC(arizona_asrc_rate1, 0xde5be3e7, "_gpl");
SYMBOL_CRC(arizona_in_vd_ramp, 0x478dd002, "_gpl");
SYMBOL_CRC(arizona_in_vi_ramp, 0x265ab1c2, "_gpl");
SYMBOL_CRC(arizona_out_vd_ramp, 0x103be782, "_gpl");
SYMBOL_CRC(arizona_out_vi_ramp, 0x71ec8642, "_gpl");
SYMBOL_CRC(arizona_lhpf1_mode, 0x51d11cb5, "_gpl");
SYMBOL_CRC(arizona_lhpf2_mode, 0x60390628, "_gpl");
SYMBOL_CRC(arizona_lhpf3_mode, 0xc64e0d9c, "_gpl");
SYMBOL_CRC(arizona_lhpf4_mode, 0x03e93312, "_gpl");
SYMBOL_CRC(arizona_ng_hold, 0x816c2d4d, "_gpl");
SYMBOL_CRC(arizona_in_hpf_cut_enum, 0xd8a7b36e, "_gpl");
SYMBOL_CRC(arizona_in_dmic_osr, 0x88a143b6, "_gpl");
SYMBOL_CRC(arizona_anc_input_src, 0x0e93f73b, "_gpl");
SYMBOL_CRC(arizona_anc_ng_enum, 0x48e31891, "_gpl");
SYMBOL_CRC(arizona_output_anc_src, 0xb56c878b, "_gpl");
SYMBOL_CRC(arizona_voice_trigger_switch, 0xa3eb8027, "_gpl");
SYMBOL_CRC(arizona_input_analog, 0x24a7fa6c, "_gpl");
SYMBOL_CRC(arizona_in_ev, 0x0e545138, "_gpl");
SYMBOL_CRC(arizona_out_ev, 0xfde0e1c0, "_gpl");
SYMBOL_CRC(arizona_hp_ev, 0xf57dea84, "_gpl");
SYMBOL_CRC(arizona_dvfs_up, 0x9513bbf0, "_gpl");
SYMBOL_CRC(arizona_dvfs_down, 0xe52ac48d, "_gpl");
SYMBOL_CRC(arizona_dvfs_sysclk_ev, 0x48d4ed88, "_gpl");
SYMBOL_CRC(arizona_init_dvfs, 0x295b467f, "_gpl");
SYMBOL_CRC(arizona_anc_ev, 0x8f858da3, "_gpl");
SYMBOL_CRC(arizona_clk_ev, 0x918d7bc3, "_gpl");
SYMBOL_CRC(arizona_set_sysclk, 0x011ef93f, "_gpl");
SYMBOL_CRC(arizona_dai_ops, 0x42d1b572, "_gpl");
SYMBOL_CRC(arizona_simple_dai_ops, 0x4ef4afb5, "_gpl");
SYMBOL_CRC(arizona_init_dai, 0x7579d782, "_gpl");
SYMBOL_CRC(arizona_set_fll_refclk, 0x45e64a86, "_gpl");
SYMBOL_CRC(arizona_set_fll, 0xa3a2d7db, "_gpl");
SYMBOL_CRC(arizona_init_fll, 0x816922fd, "_gpl");
SYMBOL_CRC(arizona_set_output_mode, 0xca312972, "_gpl");
SYMBOL_CRC(arizona_adsp2_rate_controls, 0x153bf9fd, "_gpl");
SYMBOL_CRC(arizona_eq_coeff_put, 0x0bf2d5c2, "_gpl");
SYMBOL_CRC(arizona_lhpf_coeff_put, 0xe17e9ffe, "_gpl");
SYMBOL_CRC(arizona_of_get_audio_pdata, 0x87b6c74a, "_gpl");
SYMBOL_CRC(arizona_jack_codec_dev_probe, 0xa95f3470, "_gpl");
SYMBOL_CRC(arizona_jack_codec_dev_remove, 0x039f17d1, "_gpl");
SYMBOL_CRC(arizona_jack_set_jack, 0x494e2fc9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe52de225, "regulator_enable" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x9a8a544a, "gpiod_put" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xfeaf4b58, "snd_soc_component_force_enable_pin" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcace6925, "regmap_get_val_bytes" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x663cc0ce, "snd_soc_jack_report" },
	{ 0xe010c432, "snd_soc_bytes_put" },
	{ 0x30defdbb, "snd_soc_component_read" },
	{ 0x17a65868, "gpiod_set_raw_value_cansleep" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x53225f43, "snd_soc_put_enum_double" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0x7cc6bba5, "snd_soc_dapm_sync" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5a6db39b, "arizona_clk32k_disable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0xb56cc929, "snd_soc_get_enum_double" },
	{ 0xea1fa0da, "arizona_clk32k_enable" },
	{ 0xa0be43cd, "arizona_set_irq_wake" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0xf3c86c24, "arizona_free_irq" },
	{ 0xac095dce, "devm_gpio_request_one" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xeed2b076, "snd_soc_dapm_put_volsw" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7de96dcb, "regulator_allow_bypass" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb413832c, "snd_pcm_hw_constraint_list" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x622b1adf, "snd_soc_dapm_add_routes" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0xdd7f7465, "snd_jack_set_key" },
	{ 0xf94dfaea, "snd_soc_component_enable_pin" },
	{ 0xc711578e, "of_prop_next_u32" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x64eaaab, "snd_soc_dapm_new_controls" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0xcdedc12, "snd_soc_component_disable_pin" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9ff869eb, "gpiod_get_optional" },
	{ 0xeb02ce78, "_dev_crit" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x3a90ab7e, "regmap_multi_reg_write" },
	{ 0x117767ca, "snd_soc_dapm_get_volsw" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0xea124bd1, "gcd" },
	{ 0x2d3abc95, "regmap_raw_write" },
	{ 0xfa0e45fe, "snd_soc_dai_active" },
	{ 0x21da4ca2, "snd_soc_dapm_del_routes" },
	{ 0x815588a6, "clk_enable" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x4623f12f, "regulator_set_voltage" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcdcc7f43, "arizona_request_irq" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,arizona,snd-pcm,snd");


MODULE_INFO(srcversion, "B8F9F6287B7FB7A08B653FF");
