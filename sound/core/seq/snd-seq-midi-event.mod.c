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

SYMBOL_CRC(snd_midi_event_new, 0xe9e6c50c, "");
SYMBOL_CRC(snd_midi_event_free, 0xdd935c83, "");
SYMBOL_CRC(snd_midi_event_reset_encode, 0x8150b379, "");
SYMBOL_CRC(snd_midi_event_reset_decode, 0xb8620ad8, "");
SYMBOL_CRC(snd_midi_event_no_status, 0x7a3e0db5, "");
SYMBOL_CRC(snd_midi_event_encode_byte, 0x734e4fba, "");
SYMBOL_CRC(snd_midi_event_decode, 0xdd70dbf6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7ac2f329, "snd_seq_expand_var_event" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-seq");


MODULE_INFO(srcversion, "F4A287381EA8C2C29A9D02C");
