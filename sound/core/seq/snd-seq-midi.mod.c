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
	{ 0xe914e41e, "strcpy" },
	{ 0x54ee7db8, "snd_rawmidi_info_select" },
	{ 0x4463685a, "snd_seq_driver_unregister" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x37a0cba, "kfree" },
	{ 0x40464112, "snd_rawmidi_output_params" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0x92997ed8, "_printk" },
	{ 0x842cd08, "snd_rawmidi_kernel_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x880da99f, "snd_rawmidi_kernel_write" },
	{ 0xdd935c83, "snd_midi_event_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbd4167bb, "snd_rawmidi_drain_output" },
	{ 0xdcb764ad, "memset" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0xe9e6c50c, "snd_midi_event_new" },
	{ 0xa34f0eef, "__snd_seq_driver_register" },
	{ 0xbeee216b, "snd_rawmidi_input_params" },
	{ 0xdd70dbf6, "snd_midi_event_decode" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd49674ac, "snd_rawmidi_kernel_open" },
	{ 0x71272dbf, "snd_seq_create_kernel_client" },
	{ 0x6e55f56f, "snd_rawmidi_kernel_release" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x734e4fba, "snd_midi_event_encode_byte" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x8150b379, "snd_midi_event_reset_encode" },
	{ 0xb8620ad8, "snd_midi_event_reset_decode" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-seq-device,snd-seq,snd-seq-midi-event");


MODULE_INFO(srcversion, "554069677A408D23FD8B8D6");
