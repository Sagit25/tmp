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

SYMBOL_CRC(devm_sigmadsp_init, 0x6d01a6b5, "_gpl");
SYMBOL_CRC(sigmadsp_attach, 0x292a0ee6, "_gpl");
SYMBOL_CRC(sigmadsp_setup, 0x23729ecc, "_gpl");
SYMBOL_CRC(sigmadsp_reset, 0x97dd01de, "_gpl");
SYMBOL_CRC(sigmadsp_restrict_params, 0xbc3e2ccb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0x74a05018, "request_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x28eced4f, "devres_add" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x57bc19d2, "down_write" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5a921311, "strncmp" },
	{ 0xdc510a8f, "__devres_alloc_node" },
	{ 0x37230f5c, "snd_ctl_notify" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb413832c, "snd_pcm_hw_constraint_list" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-pcm");


MODULE_INFO(srcversion, "1346943CB1E71ABBBA67937");
