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
	{ 0x1dc09e9b, "usb_control_msg_send" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x771d5acf, "led_classdev_unregister" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf8c9fec2, "line6_read_data" },
	{ 0x30e3b9c5, "line6_suspend" },
	{ 0x259c545e, "line6_init_pcm" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x2e077701, "led_classdev_register_ext" },
	{ 0x17ade1f, "line6_pcm_acquire" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x4456e9ad, "line6_pcm_release" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5cda0b05, "line6_disconnect" },
	{ 0x6e48dae2, "line6_write_data" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xfd2e612a, "line6_probe" },
	{ 0x155e1737, "line6_resume" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xaf4cd98e, "line6_read_serial_number" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-usb-line6");

MODULE_ALIAS("usb:v0E41p4750d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4151d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4147d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4141d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4142d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "52589F8A3BD64DE56231748");
