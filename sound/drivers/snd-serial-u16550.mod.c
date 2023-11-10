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
	{ 0x635c6b0b, "snd_rawmidi_receive" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x3a18ddba, "snd_rawmidi_transmit" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0x5c645e55, "param_ops_long" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x23271a8f, "__devm_request_region" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x932d368d, "snd_rawmidi_transmit_ack" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa5a6cdea, "snd_rawmidi_transmit_peek" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xdcb764ad, "memset" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0xebc992b1, "snd_rawmidi_new" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x803eac35, "snd_rawmidi_set_ops" },
	{ 0x5561da8a, "platform_device_register_full" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xb7cdc83d, "snd_devm_card_new" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");


MODULE_INFO(srcversion, "293B20A5A6B828A1CFE87AE");
