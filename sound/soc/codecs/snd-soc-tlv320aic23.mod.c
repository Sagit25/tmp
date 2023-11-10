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

SYMBOL_CRC(tlv320aic23_regmap, 0xfe973719, "");
SYMBOL_CRC(tlv320aic23_probe, 0xbb111000, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7b5e8a3, "snd_soc_dapm_put_enum_double" },
	{ 0xbfb5bed4, "regcache_sync" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x30defdbb, "snd_soc_component_read" },
	{ 0x53225f43, "snd_soc_put_enum_double" },
	{ 0x80e32692, "regcache_mark_dirty" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x92997ed8, "_printk" },
	{ 0xb56cc929, "snd_soc_get_enum_double" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0xeed2b076, "snd_soc_dapm_put_volsw" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x117767ca, "snd_soc_dapm_get_volsw" },
	{ 0x9545453e, "snd_soc_dapm_get_enum_double" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "3C32C7581AB55AB14DCF484");
