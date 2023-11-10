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

SYMBOL_CRC(snd_mpu401_uart_interrupt, 0xc0fec227, "");
SYMBOL_CRC(snd_mpu401_uart_interrupt_tx, 0x6d629c59, "");
SYMBOL_CRC(snd_mpu401_uart_new, 0xfcb11606, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc1514a3b, "free_irq" },
	{ 0x635c6b0b, "snd_rawmidi_receive" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x932d368d, "snd_rawmidi_transmit_ack" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa5a6cdea, "snd_rawmidi_transmit_peek" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xebc992b1, "snd_rawmidi_new" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x803eac35, "snd_rawmidi_set_ops" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x9abd5901, "snd_device_free" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x85bd1608, "__request_region" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");


MODULE_INFO(srcversion, "19D8B2CEFA95767EA669A52");
