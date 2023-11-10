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
	{ 0x60390628, "arizona_lhpf2_mode" },
	{ 0x7b5e8a3, "snd_soc_dapm_put_enum_double" },
	{ 0x24abcaa, "wm_adsp_fw_put" },
	{ 0xc39073f0, "wm_adsp_compr_pointer" },
	{ 0x64d764b7, "arizona_init_common" },
	{ 0xd97da4fc, "arizona_init_spk_irqs" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xf37cb070, "wm_adsp2_set_dspclk" },
	{ 0x9911b4a7, "snd_soc_bytes_info_ext" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xa9988942, "wm_adsp_compr_handle_irq" },
	{ 0xe010c432, "snd_soc_bytes_put" },
	{ 0xfdebd622, "snd_soc_new_compress" },
	{ 0x816c2d4d, "arizona_ng_hold" },
	{ 0x11ef93f, "arizona_set_sysclk" },
	{ 0x7d8851d4, "snd_soc_bytes_get" },
	{ 0x39f17d1, "arizona_jack_codec_dev_remove" },
	{ 0x41ef180d, "wm_adsp2_remove" },
	{ 0xbf2d5c2, "arizona_eq_coeff_put" },
	{ 0x53225f43, "snd_soc_put_enum_double" },
	{ 0x478dd002, "arizona_in_vd_ramp" },
	{ 0x103be782, "arizona_out_vd_ramp" },
	{ 0x48d4ed88, "arizona_dvfs_sysclk_ev" },
	{ 0x7930759b, "arizona_init_gpio" },
	{ 0x45e64a86, "arizona_set_fll_refclk" },
	{ 0x87b6c74a, "arizona_of_get_audio_pdata" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0x816922fd, "arizona_init_fll" },
	{ 0x7f26f273, "arizona_mixer_texts" },
	{ 0x42d1b572, "arizona_dai_ops" },
	{ 0xb56cc929, "snd_soc_get_enum_double" },
	{ 0x265ab1c2, "arizona_in_vi_ramp" },
	{ 0x10c85cfd, "snd_soc_component_init_regmap" },
	{ 0x2420386f, "arizona_isrc_fsl" },
	{ 0x71ec8642, "arizona_out_vi_ramp" },
	{ 0xc64e0d9c, "arizona_lhpf3_mode" },
	{ 0xa0be43cd, "arizona_set_irq_wake" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0xf3c86c24, "arizona_free_irq" },
	{ 0xfcc42fe9, "wm_adsp_compr_get_caps" },
	{ 0x4ef4afb5, "arizona_simple_dai_ops" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x99ba471c, "wm_adsp_event" },
	{ 0xe0b5384d, "wm_adsp_compr_copy" },
	{ 0x45d2789d, "snd_soc_get_volsw_range" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf57dea84, "arizona_hp_ev" },
	{ 0xba50867e, "arizona_init_spk" },
	{ 0xd9e8db0f, "snd_soc_bytes_info" },
	{ 0xa798b680, "snd_soc_info_volsw_range" },
	{ 0xa95f3470, "arizona_jack_codec_dev_probe" },
	{ 0x2e83e82e, "snd_soc_add_component_controls" },
	{ 0x918d7bc3, "arizona_clk_ev" },
	{ 0x153bf9fd, "arizona_adsp2_rate_controls" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfde0e1c0, "arizona_out_ev" },
	{ 0xc9c29637, "arizona_mixer_tlv" },
	{ 0x894458f3, "wm_adsp_fw_enum" },
	{ 0xf87428ed, "wm_adsp_compr_open" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xcae245fb, "wm_adsp2_component_probe" },
	{ 0xa39ceef7, "snd_soc_put_volsw_range" },
	{ 0x3efff488, "wm_adsp2_preloader_put" },
	{ 0x9513bbf0, "arizona_dvfs_up" },
	{ 0xa8394d3a, "wm_adsp_compr_free" },
	{ 0xb6f4d490, "wm_adsp2_preloader_get" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0x25092541, "wm_adsp2_component_remove" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xc36a510c, "wm_adsp2_init" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0x295b467f, "arizona_init_dvfs" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0x8a419cb2, "wm_adsp_fw_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd62ac492, "wm_adsp_compr_trigger" },
	{ 0xe52ac48d, "arizona_dvfs_down" },
	{ 0x80096ccc, "regmap_write_async" },
	{ 0xa2bcb646, "wm_adsp_compr_set_params" },
	{ 0x729a5ef3, "arizona_mixer_values" },
	{ 0x51d11cb5, "arizona_lhpf1_mode" },
	{ 0xd440bca4, "dapm_regulator_event" },
	{ 0x494e2fc9, "arizona_jack_set_jack" },
	{ 0xcdedc12, "snd_soc_component_disable_pin" },
	{ 0xe545138, "arizona_in_ev" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x7579d782, "arizona_init_dai" },
	{ 0x9545453e, "snd_soc_dapm_get_enum_double" },
	{ 0x280a30af, "wm_adsp_early_event" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x56843dd2, "arizona_init_vol_limit" },
	{ 0xe17e9ffe, "arizona_lhpf_coeff_put" },
	{ 0x176ab207, "arizona_free_spk_irqs" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xa3a2d7db, "arizona_set_fll" },
	{ 0x3e93312, "arizona_lhpf4_mode" },
	{ 0xcdcc7f43, "arizona_request_irq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-arizona,snd-soc-core,snd-soc-wm-adsp,arizona");


MODULE_INFO(srcversion, "203FAB86C5E0AEA3FCAF510");
