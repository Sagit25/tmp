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
	{ 0x635c6b0b, "snd_rawmidi_receive" },
	{ 0x3a18ddba, "snd_rawmidi_transmit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0x510abc69, "snd_card_free" },
	{ 0x14050dae, "usb_interface_id" },
	{ 0xf2396e57, "snd_rawmidi_drop_output" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e09263f, "usb_copy_descriptors" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0xb313877b, "config_ep_by_speed" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb775db55, "alloc_ep_req" },
	{ 0xc2935cfa, "snd_component_add" },
	{ 0xcf12e895, "snd_card_new" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x829925fd, "usb_function_register" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe5cfa168, "snd_card_free_when_closed" },
	{ 0x3389d953, "usb_ep_autoconfig" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x68e6942f, "usb_put_function_instance" },
	{ 0x21f8804, "snd_device_new" },
	{ 0xebc992b1, "snd_rawmidi_new" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x4125292c, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x803eac35, "snd_rawmidi_set_ops" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0x8212fa83, "usb_free_all_descriptors" },
	{ 0xd143eaea, "usb_gstrings_attach" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd,libcomposite");


MODULE_INFO(srcversion, "E945AEF9ED97634B3352B66");
