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
	{ 0x63230d82, "usb_register_driver" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c7a4d79, "usb_interrupt_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x3a955f39, "usb_check_int_endpoints" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x87a83807, "v4l2_device_set_name" },
	{ 0x4829a47e, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2e077701, "led_classdev_register_ext" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xdd64e639, "strscpy" },
	{ 0x43cce41f, "snd_tea575x_init" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x771d5acf, "led_classdev_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfc64277d, "snd_tea575x_set_freq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5ec2c5ad, "v4l2_device_disconnect" },
	{ 0xa8f2ed67, "snd_tea575x_exit" },
	{ 0x973151f0, "v4l2_device_put" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,tea575x");

MODULE_ALIAS("usb:v077Dp627Ad0001dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "9A76EB431A0C63ADC12C521");
