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
	{ 0xc1514a3b, "free_irq" },
	{ 0x635c6b0b, "snd_rawmidi_receive" },
	{ 0x9a8a544a, "gpiod_put" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x5a05543e, "snd_soc_register_card" },
	{ 0xcbca3a1f, "gpiod_set_value" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8791dfee, "gpiod_get_index" },
	{ 0x468e478d, "snd_pcm_hw_constraint_minmax" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0x8f75c0a1, "gpiod_export" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xbfd84f16, "kernel_kobj" },
	{ 0x29d64eb5, "gpiod_get_value" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x606b7e51, "put_device" },
	{ 0x536b3232, "gpiod_unexport" },
	{ 0x932d368d, "snd_rawmidi_transmit_ack" },
	{ 0xac72dfe2, "snd_soc_dai_set_bclk_ratio" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0xd4084a9a, "bus_find_device" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8409b00f, "snd_soc_unregister_card" },
	{ 0xcd322cb3, "spi_bus_type" },
	{ 0x604f36d6, "gpiod_direction_input" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa5a6cdea, "snd_rawmidi_transmit_peek" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0xb413832c, "snd_pcm_hw_constraint_list" },
	{ 0xdcb764ad, "memset" },
	{ 0x4e2698a4, "snd_pcm_hw_constraint_mask64" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x99009758, "kobject_create_and_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xebc992b1, "snd_rawmidi_new" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x803eac35, "snd_rawmidi_set_ops" },
	{ 0xd0585d22, "spi_setup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x796376c1, "gpiod_direction_output" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xd39ca817, "kobject_put" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-soc-core,snd,snd-pcm");

MODULE_ALIAS("of:N*T*Cblokaslabs,pisound");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisoundC*");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spi");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spiC*");

MODULE_INFO(srcversion, "24971CC03F907057A2B242B");
