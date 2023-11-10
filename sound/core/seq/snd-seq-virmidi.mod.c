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

SYMBOL_CRC(snd_virmidi_new, 0xff5a0699, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x1425e33, "try_module_get" },
	{ 0x635c6b0b, "snd_rawmidi_receive" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x3a18ddba, "snd_rawmidi_transmit" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x37a0cba, "kfree" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdd935c83, "snd_midi_event_free" },
	{ 0xcc793c4a, "module_put" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0xe9e6c50c, "snd_midi_event_new" },
	{ 0x668b19a1, "down_read" },
	{ 0xebc992b1, "snd_rawmidi_new" },
	{ 0xdd70dbf6, "snd_midi_event_decode" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x803eac35, "snd_rawmidi_set_ops" },
	{ 0x71272dbf, "snd_seq_create_kernel_client" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x734e4fba, "snd_midi_event_encode_byte" },
	{ 0x9abd5901, "snd_device_free" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb8620ad8, "snd_midi_event_reset_decode" },
	{ 0x53b954a2, "up_read" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x3ac044bd, "snd_rawmidi_proceed" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-seq,snd-seq-midi-event,snd");


MODULE_INFO(srcversion, "008840F7230427640DD6028");
