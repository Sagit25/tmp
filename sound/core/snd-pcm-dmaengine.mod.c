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

SYMBOL_CRC(snd_dmaengine_pcm_get_chan, 0xf7f06081, "_gpl");
SYMBOL_CRC(snd_hwparams_to_dma_slave_config, 0x3fd142bf, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_set_config_from_dai_data, 0xc5371faa, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_trigger, 0x25bcdbfd, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_pointer_no_residue, 0x23c26407, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_pointer, 0x48676839, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_request_channel, 0x43afc20d, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_open, 0xf86d462a, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_open_request_chan, 0x4f07d636, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_close, 0x3b601639, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_close_release_chan, 0xb78f45ff, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_refine_runtime_hwparams, 0x0a87b09a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x37a0cba, "kfree" },
	{ 0x48f383c2, "dma_release_channel" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xe9e50be8, "__dma_request_channel" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x14a5f266, "dma_get_slave_caps" },
	{ 0xfef3df9c, "snd_pcm_hw_constraint_integer" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb1b572d5, "snd_pcm_period_elapsed" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm");


MODULE_INFO(srcversion, "B0ACD6B055749796CDC2CF9");
